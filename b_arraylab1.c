#include <stdio.h>
int main()
{
    int i,n,element,position=-1;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of the array");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
	    if(a[i]==element)
	    {
	       position=i;
	       break;
	    }
	}
	if(position==-1)
	printf("Element not found");
	else
	printf("\nElement found at index %d",position 
    );
	return 0;
}