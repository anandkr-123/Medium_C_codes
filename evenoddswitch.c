#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x\n");
    scanf("%d", &x);
    switch(x%2)
    {
        case 0 :
        printf("the given number is even");
        break;
        case 1 :
        printf("the given number is odd");
        break;
    }
    return 0;
}