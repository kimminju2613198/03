#include <stdio.h>

int main(void)
{
    char c, i;

    printf("enter a character:");
    scanf("%c", &c);

    i=c+1;
    printf("The input character of %c (%d) is %c (%d)\n", c, c, i, i);

    return 0;
}