#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100] = "";
    do
    {
        printf(">_ ");
        scanf("%s", str);
        system(str);
    } while (strcmp(str, "exit") != 0);
    return 0;
}