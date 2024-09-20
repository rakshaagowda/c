#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t ;
    int guess=0;
    int numberofguesses;
    int randomnumber=0;
    
    //initializing random number
    srand((unsigned) time(&t));
    
    // get the random number
    randomnumber=rand() % 21;
    
   
    printf("This is a guessing game.\nI have chosen a number between 0-20,which you have to guess.\n");
    //printf("enter the guess:\n"); no
    
   // scanf("%d",guess);
    for(numberofguesses=5;numberofguesses>0;--numberofguesses)
    {
        printf("\nYou have %d tr%s\n",numberofguesses,numberofguesses==1 ? "y":"ies");
        printf("Enter the guess :");
        scanf("%d",&guess);
        if (guess==randomnumber)
        {
            printf("Congratulations.You have guessed it right\n");
           return;
        }
        
        else if (guess<0 || guess>20)
        {
            printf("I said number should be between 1-20\n");
        }
        
        else if (guess<randomnumber)
        {
            printf("Sorry  %d is wrong. My number is greater than your guess\n",guess);
        }
        
        else if(guess>randomnumber)
        {
            printf("sorry %d is wrong. My number is lesser than your guess\n",guess);
        }
        
    }
    printf("You've had 5 tries and failed the number was %d.\n",randomnumber);
    return 0;
}