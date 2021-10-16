#include <stdio.h>
int main()
{
    float c, f;
    printf("enter temp in c\n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%fcelsius=%ffahrenheit", c, f);
    return 0;
}