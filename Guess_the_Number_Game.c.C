#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int number,guess,nguess=1;
  //clrscr();
  srand(time(0));
  number=rand()%100+2;
  //Program to generate the random numbers
  //printf("Random number is %d\n",number);
  //Perform the loop until the number is found
  printf("\t\t\tWelcome to Guess the Number Game\t\t\n");
  printf("\t\t\tMade by Yash Verma\t\t\n");
  printf("\n");
  do{
    printf("\t\t\tGuess the number 1 to 200 : ");
    scanf("%d",&guess);
    if(guess>number)
    {
     printf("\t\t\tLower Number Please\t\t\t\n\n");
     }
     else if(guess<number)
     {
      printf("\t\t\tHigher Number Pleasre\t\t\n\n");
      }
      else {
	      printf("\n\n");
	      printf("\t\t***** Congratulations Number is found *****\t\t");
	      printf("\t\t\t\t\b\b_______________________________\t\t\n\n");
	      printf("\t\t\t\b\bNumber is guessed in %d attempts\t\t\n",nguess);
	      }
	      nguess++;
   }
   while(guess!=number);
  getch();
  }
