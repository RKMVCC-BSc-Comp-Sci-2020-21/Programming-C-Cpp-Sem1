//Name:-Avirup Dutta  ,  Roll No:-721
//Number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
     number = rand()%100 + 1; // Generate a random number between 1 to 100

    //printf("The number is %d\n",number);
    
    // Keep running the loop untill the number is gussed
    
    do{
      printf("Guess the number between 1 to 100:\n");
      scanf("%d",&guess);
      if(guess>number){
          printf("Lower number please!\n");
      }
      else if(guess<number){
          printf("Higher number please!\n");
      }
      else{
          printf("You guessd it in %d attempts!\n",nguesses);
      }
      nguesses++;
    }while(guess!=number);
    return 0;
}
