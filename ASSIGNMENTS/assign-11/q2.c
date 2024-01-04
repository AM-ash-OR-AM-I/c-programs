#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "iter ibcs soa ids sum";
    char *token;
    token = strtok(str, " ");
    int numtokens = 0;
    while (token != NULL)
    {
        printf("Token=%s\n", token);
        numtokens++;

        token = strtok(NULL, " ");
    }
    printf("Number of tokens: %d\n", numtokens);
    return 0;
}