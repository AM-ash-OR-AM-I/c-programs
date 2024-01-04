#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a new text\nIt is the second line\nthen next line";
    int totalWords = 0;
    int totalLines = 0;
    char *saveptr1, *saveptr2;
    char *line = strtok_r(str, "\n", &saveptr1);
    while (line != NULL)
    {
        char *word = strtok_r(line, " \t", &saveptr2);
        while (word != NULL)
        {
            totalWords++;
            word = strtok_r(NULL, " \t", &saveptr2);
        }
        totalLines++;
        line = strtok_r(NULL, "\n", &saveptr1);
    }
    if (totalLines != 0)
    {
        double averageWordsPerLine = (double)totalWords / totalLines;
        printf("Average number of words per line: %.2f\n", averageWordsPerLine);
    }
    return 0;
}