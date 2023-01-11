#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter two angles of triangle\n");
    printf("Enter first angle: ");
    scanf("%d",&a);
    printf("Enter second angle: ");
    scanf("%d",&b);
    c=180-a-b;
    printf("The first angle is: %d\n",a);
    printf("The second angle is: %d\n",b);
    printf("The third angle is: %d\n",c);
    return 0;
}
