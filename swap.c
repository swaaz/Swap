#include <stdio.h>

void swap(int a,int b)
{
	int temp;
    temp=a;
    a=b;
    b=temp;
print("After Swapping\n Value of a=%d and b=%d",a,b);
}
void main()
{
    int a,b;
    a=10;
    b=20;
    print("Before Swapping\n Value of a=%d and b=%d",a,b);
    swap(a,b);
}
