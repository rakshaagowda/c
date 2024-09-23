//to illustrate the use of bitwise operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned short int a,b,c,d,e,f,g,h,n;
    system("clear");
	/*printf("Please Enter two numbers: ");
    scanf("%d %d",&a,&b);*/

    a=10,b=5;
    n=1;
    c=a&b;
    printf("%d bitwise-AND %d is %d.\n",a,b,c);
    
    d=a|b;
    printf("%d bitwise-OR %d is %d.\n",a,b,d);
    
    e=~a;
    printf("Bitwise NOT of %d is %d.\n",a,e);
    
    printf("Enter the number of bit to be shifted: ");
    scanf("%hd",&n);
    
    f=a>>n;
    printf("Bitwise-Right shift of %d by %d BIT is %d.\n",a,n,f);
    
    g=a<<n;
    printf("Bitwise-Left shift of %d by %d BIT is %d.\n",a,n,g);
    
    h=a^b;
    printf("%d bitwise-Ex-OR/XOR %d is %d.\n",a,b,h);
    
	return 0;
}
