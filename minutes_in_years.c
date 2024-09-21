#include <stdio.h>

int main()
{
	double minutesEntered=0;
    double years=0,days=0;
    double minutesinyear=0,daysinyear=0;
    
    printf("please enter the of minutes:");
    //get the input from user 
    scanf("%lf",&minutesEntered);
    
    minutesinyear=(60*24*365);
    
    years=(minutesEntered/minutesinyear);
    
    daysinyear=(60*24);
    
    days=(minutesEntered/daysinyear);
    printf("%lf minutes equals to %lf years %lf days",minutesEntered,years,days); 
    
	return 0;
}
