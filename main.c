#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=4, b=3,c;
    a=a^b;
    b=a^b;
    c=a^b;
    printf("a=%d,b=%d",a,b);
    return 0;
}
