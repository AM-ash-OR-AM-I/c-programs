#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(char *str, int i, int j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void permutation(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } 
    else {
        for (int i=start; i<=end; i++){
            swap2(str, start, i);
            permutation(str, start+1, end);
            swap2(str, start, i);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string to permute: ");
    scanf("%s", str);
    int n = strlen(str);
    permutation(str, 0, n-1);
    
}