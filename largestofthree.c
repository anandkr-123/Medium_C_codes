#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("enter any 3 numbers\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%0.2f is largest", a);
    }
    else if (b > a && b > c)
    {
        printf("%0.2f is largest", b);
    }
    else
    {
        printf("%0.2f is largest", c);
    }

    return 0;
}