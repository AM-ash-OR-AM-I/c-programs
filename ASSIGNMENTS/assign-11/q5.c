/*
In command line you have to type./a.out ’CSE/CSIT//EEE/EC//MECH//CIVIL:MBA:MBBS’ ’:’ ’/’arguments.You are requiredtowritea’C’codetotokenizethecommand-linearguments.
The first command-line argument(i.e argv[1]) specifies the string to be parsed. The second argu- ment specifies the delimiter byte(s) to be used to separate that string into ”major” tokens. The third argument specifies the delimiter byte(s) to be used to separate the ”major” tokens into subtokens.
Token 1: CSE/CSIT//EEE/EC//MECH//CIVIL Subtoken: CSE CSIT EEE EC MECH CIVIL
         Token 2 MBA
            Subtoken: MBA
         Token 3 MBBS
            Subtoken: MBBS
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *token;
    token = strtok(argv[1], argv[2]);
    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, argv[3]);
    }
    return 0;
}
