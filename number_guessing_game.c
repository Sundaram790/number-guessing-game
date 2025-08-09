# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int RandomNumber;

    srand(time(0));

    RandomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do {
        printf("Guess the number :");
        scanf("%d", &guessed_number);
        if(guessed_number>RandomNumber) {
            printf("Lower number please!\n");
        
        } else if(guessed_number<RandomNumber) {
            printf("Higher number please!\n");
        } else {
            printf("Congrats!!");
        } 
        no_of_guesses ++;

    } while(guessed_number != RandomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);
    

    return 0;
}
