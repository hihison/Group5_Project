	#include "group5.h"
 	
 	void init(int board[][10]){
		int count=1;
		for(int i=10;i>0;i--){
		for(int j=10;j>0;j--){
		board[i][j]=count++;
		}	}	}
	 
	void printboard(int board[10][10]){
	    for(int i=1;i<=10;i++){
	  printf("|----|----|----|----|----|----|----|----|----|----|\n");
	        for(int j=1;j<=10;j++){
	            printf("|%3d ",board[i][j]);
	        }
	  printf("|");
	        printf("\n");
	    }
	 printf("|----|----|----|----|----|----|----|----|----|----|\n");
	} 
 	
	int shetiqi(){
	int player1=0,player2=0,Player=0,T=0,turn,location,chance=0;
	int k;	
	char dice;
	int board[10][10]={0};
	int SL[]={99,3,17,23,59,70,34,48,54,79};
	int move[]={-49,15,-10,32,-12,15,32,-21,20,-21};
	
	init(board);
	printboard(board);
	
	printf("\n1 is begin            34 is ladder go 66\n");
	      printf("99 is snake go 50     48 is snake  go 27\n");
	      printf("3 is ladder go 18     54 is ladder  go 74\n");
	      printf("17 is snake  go 7     79 is snake  go 58\n");
	      printf("23 is ladder go 55    70 is ladder  go 85\n");
	      printf("59 is snake  go 47    100 is Goal\n");
	printf("\n");
	srand(time(NULL));
	while (1){
	turn=(T%2)+1;
	printf("Player %d turn\n",turn);
	 
	while(1){	
	  printf("\nPress enter roll the dice to move");	
	  scanf("%c",&dice);
	
	  if (dice==10){	
	    location=(rand()%6)+1;	
	    break;
	    }     	
	  }
	  printf("Dice : %d\n",location);
	
	while(1)	
	  {
	  if (location!=6 && chance!=6)	
	  break;	
	  while(1){
	    printf("Your dice returned to be 6\n");
	    printf("\nYou have a chance to roll again:");
	    scanf("%c",&dice);
	
	    if (dice==10){
	      chance=(rand()%6)+1;
	      break;
	      }
	    }		
	   printf("The new dice position is %d\n",chance);
	   location=location+chance;
	   }
	   
	if (turn==1)	
	  Player=player1;
	
	if (turn==2)		
	  Player=player2;
	
	if (Player+location > 100)
	  printf("The Value over 100 so the Player will will be moved backwards\n");	
	else if (Player+location <= 100){
	
	  Player+=location;	
	
	  for(k=0;k<10;k++){
	    if (Player==SL[k])
	    Player+=move[k];
	    }
	  }
	
	if (turn==1){	
	  player1=Player;			
	  printf("Player 1 place = %d\n",player1);	
	  }
	if (turn==2){	
	  player2=Player;			
	  printf("Player 2 place = %d\n",player2);	
	  }	
	
	if (player1==100){	
	  printf("Player 1 win!!!\n");			
	  break;	
	  }
	if (player2==100){
	  printf("Player 2 win!!!\n");	
	  break;
	  }
	T++;
	}				
	}
