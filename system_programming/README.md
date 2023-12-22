# Process

## fork()

- Clone the calling process, creating an exact copy.
Return -1 for errors, 0 to the new process (child process), and the process ID of the new process to the old process.

## wait()

- `waitpid()` suspends execution of the calling process until a child specified by pid argument has changed state.

## Zombie Process

- When a child dies first but parent keeps running
- In process table entry the child process holds resources virtually until parent terminates.

```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid;
  childPid = fork();

  if (childPid == 0) {
    sleep(5);
    printf("Child [pid]: %d\n", getpid());
  } else if (childPid > 0) {
    sleep(30);
    wait(NULL);
    printf("Parent [pid]: %d\n", getpid());
  }
}
```

### Orphan process

- Child is waiting but parent as finished its execution.
- Child gets assigned to another parent before process terminates.

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid = fork();
  printf("pid_t: %d\n", childPid);
  if (childPid == -1) {
    printf("Fork error");
    return 1;
  } else if (childPid == 0) {
    printf("Child %d, parent %d\n", getpid(), getppid());
    sleep(5);
    printf("Child %d, parent %d\n", getpid(), getppid());
  } else {
    printf("Parent pid %d\n", getpid());
    exit(0);
  }
}
```

## UNIX Process

### ps command

- `ps` command is used to provide information about the currently running processes, including their process identification numbers (PIDs).
- `ps -al` displays all the processes running on the terminal & not assocaited with any terminal with their process id.
- `ps -aux` displays all the processes currently running on the terminal.
- `ps -aux | grep <process_name>` displays all the processes currently running on the terminal with the given process name.
  
#### PROCESS STATE CODES (S column in ps)

```bash
Here  are  the  different  values  that  the  s, stat and state  output
specifiers (header "STAT" or "S") will display to describe the state of
a process:

        D    uninterruptible sleep (usually IO)
        I    Idle kernel thread
        R    running or runnable (on run queue)
        S    interruptible sleep (waiting for an event to complete)
        T    stopped by job control signal
        t    stopped by debugger during the tracing
        W    paging (not valid since the 2.6.xx kernel)
        X    dead (should never be seen)
        Z    defunct  ("zombie")  process, terminated but not reaped by
            its parent

```

### pstree command

- We use it to display the process tree for fan and chain processes.
- `pstree` command is used to display the processes in a tree format.
- `pstree -p` displays the process tree with their process id.
- `pstree -p <process_id>` displays the process tree with their process id for the given process id.

### Kill command

- `SIGTERM (15)` gracefully kills the process whereas `SIGKILL (9)` kills the process immediately. SIGTERM signal can be handled, ignored and blocked but SIGKILL cannot be handled or blocked. SIGTERM doesn't kill the child processes. SIGKILL kills the child processes as well.
- `SIGSTOP (19)` and `SIGCONT (18)` are used to stop and continue the process respectively.
- `kill -9 <process_id>` kills the process with the given process id.
- `kill -l` displays the list of signals.
- `kill -l <signal_number>` displays the signal name for the given signal number.
- `kill -<signal_number> <process_id>` sends the signal to the process with the given process id.
