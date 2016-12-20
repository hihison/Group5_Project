#include "group5.h"

int  aitakecard1[52]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
char drawcard[52]={'A','A','A','A','2','2','2','2','3','3','3','3','4','4','4','4','5','5','5','5','6','6','6','6','7','7','7','7','8','8','8','8','9','9','9','9','T','T','T','T','J','J','J','J','Q','Q','Q','Q','K','K','K','K'};

char aicard[22];
char playercard[22];

int aiPoint=0;
int playerPoint=0;
int aiCount,playerCount=0;

void aiDrawOne(){
	int i;
	do{
		i=rand()%51+1;	
	}while(aitakecard1[i]==0);
		
		if (aitakecard1[i]==1){
			if(aiPoint>=10){
				aiPoint+=11;
			}
		}else{
			aiPoint+=aitakecard1[i];	
		}
		
	aitakecard1[i]=0;
	aicard[aiCount]=drawcard[i];
	aiCount++; 
}

int srandcard_com(){
	aiDrawOne();
	aiDrawOne();
}

void playerDrawOne(){
	int i=0;
	do{
		i=rand()%51+1;	
	}while(aitakecard1[i]==0);
		
		if (aitakecard1[i]==1){
			if(playerPoint>=10){
				playerPoint+=11;
			}
		}else{
			playerPoint+=aitakecard1[i];	
		}
		
	aitakecard1[i]=0;
	playercard[playerCount]=drawcard[i];
	playerCount++; 
}

int srandcard_player(){
	playerDrawOne();
	playerDrawOne();
}

int computer_ai(){	
	if(aiPoint>=17){
		return 0;
	}else{
		aiDrawOne();
		}
	}

	
void printCard(char card[],int count){
	for (int i=0;i<=count;i++){
		printf("%c ",card[i]);
	}
}
 

int Menu(){
	int choice;
	printf("\n1.add\n");
	printf("2.stop\n");
	printf("Your Chose : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			playerDrawOne();
		break;
		
		
	
	}
}

void com_printcard(){
	computer_ai();
	printCard(aicard,aiCount); 
}

int player_printcard(){
	printCard(playercard,playerCount);
	printf("playerpoint: %d\n",playerPoint);
	Menu();
}

void bj(){
	int sum;
	int score = readfile();
	srand(time(NULL));
	srandcard_com();
	srandcard_player();
	while(1){
		system("cls");
		
		printf("\n");
		printf("Recent score : %d \n", score);
		printf("Computer :");
		com_printcard();
		printf("aipoint: %d\n",aiPoint);
		printf("\n");
		printf("Player: ");
		player_printcard();	
		
		
		
	
		if (playerPoint > 21){
			printf("Computer Win!");
			score=score-5;
			savefile (score);
			break;
		}else if (aiPoint > 21){
			printf("Player Win!");
			score=score+5;
			savefile (score);
			break;
		}
		
		if(playerPoint >aiPoint){
			printf("Player Win!");
			score=score+5;
			savefile (score);
			break;
		}else if (aiPoint > playerPoint){
			printf("Computer Win!");
			score=score-5;
			savefile (score);
			break;
		}
		
		
		
		system("pause");
		
	};		
}
