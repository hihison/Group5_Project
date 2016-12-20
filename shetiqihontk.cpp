	#include <stdio.h>
	#include<stdlib.h>
	#include<time.h>	
 	#include<conio.h>
 	#include<string.h>
 
	int dice;
	int laddersnake();
	int location, New, move;
	int c;
	 
	void init(int board[][8]){
		int count=1;
		for(int i=8;i>0;i--){
		for(int j=8;j>0;j--){
		board[i][j]=count++;
		}
		}
	}
	 
	void printboard(int board[8][8]){
	    for(int i=1;i<=8;i++){
	  printf("|----|----|----|----|----|----|----|----|\n");
	        for(int j=1;j<=8;j++){
	            printf("|%3d ",board[i][j]);
	        }
	  printf("|");
	        printf("\n");
	    }
	 printf("|----|----|----|----|----|----|----|----|\n");
	} 
	 
	laddersnake(){    
	     switch(location){
	         case 37:
	              return New = 4;
	              break;
	                              
	         case 21:
	              return New = 5;
	              break;
	          
	         case 6:
	              return New =12;
	              break;
	               
	         case 44:
	              return New =15;
	              break;
	               
	         case 13:
	              return New =19;
	              break;
	               
	         case 3:
	              return New =10;
	              break;
	               
	         case 59:
	              return New =22;
	              break;
	               
	         case 26:
	              return New =36;
	              break;
	               
	         case 33:
	              return New =20;
	              break;
	               
	         case 14:
	              return New =45;
	              break;
	               
	         case 49:
	              return New =31;
	              break;
	               
	         case 56:
	              return New =47;
	              break;
	               
	         case 63:
	              return New =2;
	              break;
	               
	         default:
	              return New = location;
	                 }
	}
	
	int shetiqihontk()	{
		int board[8][8]={0};
	      srand(time(NULL));
	      printf("Press 1 to start: \n");
	      scanf("%d",&c);
	      
	      if (c==1){
		  printf("Rules:\nYou press enter to roll\n   You roll the dice to move\n   If you land on a snake you will move down\n   If you land on a ladder then you will climb up\n   In order to win you must just land on 64,else you go over 64 will be moved backwards\n\n");}
	     
		  if (c==1){ 
	      printf("ŽÖ’òŠû\n");
	      init(board);
	      printboard(board);
	      
	      printf("\n64  63  62  61  60  59  58  57         1 is begin           26 is ladder go 36\n");
	      printf("49  50  51  52  53  54  55  56         37 is snake go 4    33 is snake  go 20\n");
	      printf("48  47  46  45  44  43  42  41         21 is snake go 5    14 is ladder  go 45\n");
	      printf("33  34  35  36  37  38  39  40         6 is ladder  go 12     49 is snake  go 31\n");
	      printf("32  31  30  29  28  27  26  25        44 is snake go 15    	56 is snake go 47\n");
	      printf("17  18  19  20  21  22  23  24        13 is ladder  go 19    63 is snake  go 2\n");
	      printf("16  15  14  13  12  11  10   9        3 is ladder  go 10     64 is Goal\n");
	      printf(" 1   2   3   4   5   6   7   8        59 is snake go 22\n");

	do
	{
	      printf("\nPress enter to roll\n");
		 	getche();	
		  dice=(rand()%6)+1;
		        
	      printf("\nYou have rolled %d.\n", dice);
 		
	      location+=dice;
	   
	      if(location >64)
	           {move = (location-64);
	           location = (64 - move);}  
	        
	      printf("\nYou have move to %d.\n", location);
	 	       
	      laddersnake();
	   
	      if (location<New){
			printf("\nYou have climbed up on %d\n.", New);
			}
	       
	      if (location>New){
			printf("\nYou have fell down on %d\n.", New);
			}
	       
	      location = New;

	} while(location<64);
	
	     printf(" You win!!!");
	     }   
	getch();
	}
