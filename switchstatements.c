#include <stdio.h>

int main()
{
	float value1, value2;
    char operators;
    
    printf("Type your expressions \n");
    scanf("%f %c %f",&value1,&operators,&value2);
    
    switch(operators)
    {
        case '+':
        printf("%.2f",value1+value2);
        break;
        
        case '-':
        printf("%.2f",value1-value2);
        break;
        
        case '*':
        printf("%.2f",value1*value2);
        break;
        
        case'/':
        printf(".%2f",value1/value2);
        break;
        
        /*case '%':
        printf("%.2f",value1%value2);
        break;*/
        
        default :
        printf("unknown operator");
    }
    return 0;
        
}
