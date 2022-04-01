// C program for creating & simulating a Snake & Ladder Game
// Constraints and Rules

/*
1.The game will begin with any dice value.
2.If a 6(six) is appeared then a chance is awarded to that player.
3.Only the location of current player is shown on the board,
  the location of other player is mentioned below the board.
4.Snakes:- 99 to  1, 65 to 40, 25 to 9.
5.Ladder:- 70 to 93, 60 to 83, 13 to 42.
*/

#include<stdio.h>
#include<stdlib.h>

// Calling user defined functions
#include "random.h"
#include "displaychart.h"

// Main function
void main()
{
	int i,dice,cur_pos1=0,cur_pos2=0;
	char ch;
	while(1)
	{	printf("\n|----------- SNAKES AND LADDERS GAME ---------------|\n");
		printf("\nSnakes:- 25 to 9,\t 65 to 23,\t 97 to  21.\nLadder:- 13 to 42,\t 60 to 83,\t 70 to 93.\n");
		printf("\nChoose your option\n");
		printf("\n1. Player 1 plays\n");
		printf("2. Player 2 plays\n");
		printf("3. Exit\n");
		scanf("%s",&ch);
	
		switch(ch)
		{
			
			case '1':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					if(dice==6)
					printf("Dice=6: You have earned a chance to play one more time.\n");
					printf("\n--------------------------------------------------------------------------\n");
					printf("\n");
					cur_pos1=dice+cur_pos1;
					if(cur_pos1<101){
						if(cur_pos1==97)
						{
						displaychart(21,"$P1$"); //snake
						}
						if(cur_pos1==65)
						{
						displaychart(23,"$P1$"); //snake
						}
						if(cur_pos1==25)
						{
						displaychart(9,"$P1$"); //snake
						}
						if(cur_pos1==70)
						{
						displaychart(93,"$P1$"); //ladder
						}
						if(cur_pos1==80)
						{
						displaychart(100,"$P1$"); //ladder
						}
						if(cur_pos1==13)
						{
						displaychart(42,"$P1$"); //ladder
						}
						else{
							displaychart(cur_pos1,"$P1$");
						}
						
					}
					else{
						cur_pos1=cur_pos1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(cur_pos1,"$P1$");
					}
					printf("Player 2 position is %d\n",cur_pos2);
			
				break;
			case '2':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n",dice);
					cur_pos2=dice+cur_pos2;
					if(cur_pos2<101){
						if(cur_pos2==97)	//snake
						{
						displaychart(21,"$P2$");
						}
						if(cur_pos2==65)	//snake
						{
						displaychart(23,"$P2$");
						}
						if(cur_pos2==25)	//snake
						{
						displaychart(9,"$P2$");
						}
						if(cur_pos2==70)	//ladder
						{
						displaychart(93,"$P2$");
						}
						if(cur_pos2==80)	//ladder
						{
						displaychart(100,"$P2$");
						}
						if(cur_pos2==13) 	//ladder
						{
						displaychart(42,"$P2$");
						}
						else{
							displaychart(cur_pos2,"$P2$");
						}
					}
						
					else{
						cur_pos2=cur_pos2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_pos2,"$P2$");
					}
					printf("Player 1 position is %d\n",cur_pos1);
				break;
			case '3':exit(0);
				break;
			
			default:printf("Incorrect choice.Try Again\n");
				
		}
		
	}
	
}