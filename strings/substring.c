#include <stdio.h>
#include <string.h>

void printSubstrings(char *str, int start, int end){
    while (start<=end){
        printf("%c", *(str+start));
        start++;
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Generating substrings..\n");
    int n = strlen(str);
    for (int length=n-1; length>=0; length--){
        for (int start=0; start+length<n; start++){
            printSubstrings(str, start, start+length);
        }
    }
}