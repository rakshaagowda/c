#include <stdio.h>
#include <stdlib.h>
#define MIN_CHARGE 100
int main()
{
	unsigned int units;
    float total,total_amount,net,surcharge;
    printf("\nEnter the units consumed ");
    scanf("%d",&units);
    
    printf("\n******detail Bill******\n");
    printf("\nMinimum charge=Rs.100/-");
    
    if(units<=200)
     {
         total=(units*.80);
         printf("\n@Rs.80 for first 200 units=Rs.%f/-",total);
         total_amount=total;
         printf(">>>>>>>>total amount is Rs.%.2f/-",total_amount);
     }
    else if(units<=300)
     {
         total=((units-200)*.90);
         printf("\n@Rs.80 for first 200 units=Rs.160-");
         printf("\n@Rs.90 for next 100 units=Rs.%f/-",total);
         total_amount=total+160;
         printf(">>>>>>>>total amount is Rs.%.2f/-",total_amount);
         
     }
        else
        {
           total=((units-300)*1.0);
         printf("\n@Rs 0.80 for first 200 units=Rs. 160-");
         printf("\n@Rs 0.90 for next 100 units=Rs. 90/-"); 
         printf("\n@Rs 1.00 for units above 300=Rs.%f/-",total);
         total_amount=total+160+90;
         printf(">>>>>>>>total amount is Rs.%.2f/-",total_amount);
        }
       
       
       total_amount+=MIN_CHARGE;
     if(total_amount>400)
      {
          surcharge=(total_amount*.15);
          printf("\nAn additional %%15 of total is added in case of bill more than Rs.400/- i.e., %.2f",surcharge);
          net=total_amount+surcharge;
      }
     else
         net=total_amount;
         
     printf("******Billed amount is Rs.%.2f/- *******",net);
     
    
	return 0;
}
