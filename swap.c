#include <stdio.h>
void main()
{
    int a,b,c;
    a=10;
    b=23;

    print("%d%d",a,b);

    c=a;
    a=b;
    b=c;
print("%d%d",a,b);
}