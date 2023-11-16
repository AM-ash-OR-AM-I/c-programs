# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[])
{   
    // argc stores number of arguments
    // argv[i] stores ith argument passed
    printf("Arguments: ");
    int sum = 0;
    for (int i=0; i<argc; i++){
        sum+=atoi(argv[i]);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
