#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(char *string, int start_index, int length);

int main(void)
{
    char *string = "Hello, world!";
    int start_index = 7;
    int length = 5;

    char *sub = substring(string, start_index, length);

    printf("Substring: %s\n", sub);

    free(sub);

    return 0;
}

char *substring(char *string, int start_index, int length)
{
    char *sub = malloc(length + 1);

    if (sub == NULL)
    {
        printf("Error: unable to allocate memory.\n");
        exit(1);
    }

    strncpy(sub, string + start_index, length);
    sub[length] = '\0';

    return sub;
}