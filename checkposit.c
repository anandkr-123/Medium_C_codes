#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    printf("enter a number\n");
    scanf("%f", &a);
    if (a>0)
    {
        printf("the num. u entered is positive");
    }
   else if (a<0)
    {
        printf("the num. u entered is negative");

    }
    else
    {
        printf("the num. you entered is neither positive nor negative");
    }
    return 0;
}

