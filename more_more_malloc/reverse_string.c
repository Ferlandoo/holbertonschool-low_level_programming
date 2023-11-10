#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(const char* str)
{
    int len = strlen(str);
    int i;
    char* reversed_str = malloc(len + 1);
    
    if (reversed_str == NULL)
    {
        return NULL;
    }
    for (i = 0; i < len; i++)
    {
        reversed_str[i] = str[len - i - 1];
    }
    reversed_str[len] = '\0';
    return reversed_str;
}

int main(void)
{
    const char* str = "Hello, world!";
    char* reversed_str = reverseString(str);
    printf("%s\n", reversed_str);
    free(reversed_str);
    return 0;
}