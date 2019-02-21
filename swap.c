#include <stdio.h>

void swap(int a,int b)
{
	int temp;
    temp=a;
    a=b;
    b=temp;
printf(" \n After Swapping\n Value of a=%d and b=%d",a,b);
}
void main()
{
    int a,b;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    printf("\n Before Swapping\n Value of a=%d and b=%d",a,b);
    swap(a,b);
}
