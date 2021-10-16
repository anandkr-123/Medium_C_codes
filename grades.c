#include <stdio.h>
int main()
{
    char grade;
    printf("enter your grade\n");
    scanf("%c", &grade);
    if(grade == 'E')
    {
        printf("your grade is equivalent to excellent");
    }
    else if(grade =='A')
    {
        printf("your grade is equivalent to average");
    }
    else if(grade =='V')
    {
        printf("your grade is equivalent to very good");
    }
    else if(grade =='G')
    {
        printf("your grade is equivalent  to good");
    }
    else if(grade =='F')
    {
        printf("your grade is equivalent fail ");
    }
    return 0;
}
