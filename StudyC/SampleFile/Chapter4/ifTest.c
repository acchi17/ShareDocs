#include <stdio.h>

void main(void)
{
    int val;

    printf("Input integral value >>");
    scanf("%d", &val);

    if (val < 10)
    {
        printf("Input value is smaller than 10.");
    }
    else
    {
        printf("Input value is bigger than 10.");
    }
}