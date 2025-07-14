#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random , guess ;
	int no_of_guess=0;
	srand (time(NULL));
	printf("Welcome To The World Of Guessing Number");
	random=rand()%100+1;
	do
	{
		printf("\n Please Enter You Guess Between (1 TO 100):");
		scanf("%d", &guess);
		no_of_guess ++;
		if (guess<random)
		{
			printf("Guess a Larger Number .\n");
			
		}
		else if (guess>random)
		{
		printf("Guess A Smaller Number.\n");
		}
		else 
		{
			printf("Congratulation !!! You have Successfully Guessed The Number In %d Attemps" , no_of_guess);
		}
		
	  }
	    
     	while (guess!=random);
    printf("\nBYE BYE !!! Thanks For Playing");
     	printf("\nDeploped by Avi Patel");
}
