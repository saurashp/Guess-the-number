#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int nguesses = 1;
    srand(time(0));
    number = rand()%100 +1;
    printf("The number is %d\n", number);
    do
    {
        printf("Guess the number 1 and 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
       else{
        printf("you guessed it in %d attempts\n", nguesses);

       }
       nguesses++;
        
        
        
    } while (guess != number);
    
    return 0;
}