#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the num.whom u want to compare");
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("%d is larger then %d", a,b);
    }
    else
    {
        printf("%d is larger then %d", b,a);
    }
    return 0;
}
    
