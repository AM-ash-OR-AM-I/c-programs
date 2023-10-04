# Direct and Indirect recursion.

## Indirect
```c
void func1(){
    func2();
}

void func2(){
    func1();
}

int main(){
    func1();
}
```
## Direct

```c
void func1(){
    func1();
}

func1();
```
