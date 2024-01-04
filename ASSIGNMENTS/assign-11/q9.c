/*
Ans3 using strtok()
*/
#include <stdio.h> #include <string.h>

    int main()
{
    char str[] = "ITER:IBCS;SOA:Pot*Hot";
    char *token;
    char *saveptr;
    // Tokenize the string using multiple delimiters token = strtok_r(str, ":;*", &saveptr);
    while (token != NULL)
    {
        printf("Token=%s\n", token);
        // Get the next token
        token = strtok_r(NULL, ":;*", &saveptr);
    }
    return 0;
}

/**
 * Ans4 using strtok()
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "*ITER:IBCS;SOA:Pot*Hot:";
    char *token;
    char *saveptr;
    token = strtok_r(str, ":;*", &saveptr);
    while (token != NULL)
    {
        printf("Token=%s\n", token);
        token = strtok_r(NULL, ":;*", &saveptr);
    }
    return 0;
}

/**
 * Ans5 using strtok_r()
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "TOC;;PLC,USP;";
    char *token;
    char *saveptr;
    token = strtok_r(str, ";,", &saveptr);

    while (token != NULL)
    {
        printf("Token=%s\n", token);
        token = strtok_r(NULL, ";,", &saveptr);
    }
    return 0;
}