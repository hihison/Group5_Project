#include "group5.h"
//整個MAIN的UI都很丑 
int score = readfile();
char menu;
//Created by hihison 
void printmenu(){ //我的主人是 hihison 
	score = readfile();
	system("mode con:cols=120 lines=30");
	system("cls");
	system("COLOR 70");
	printf("\n                                                全國最大的遊戲系統               \n");
	delay(0.005);
	printf("                                                 上");
	delay(0.005 );
	printf("     線");
	delay(0.005);
	printf("     囉\n");   
	delay(0.005);
	//上線囉!! (下線版) 
	printf("            ╔════════════════════════════════════════════╗\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                  四個遊戲任君選擇                                                      ║\n");
	printf("            ║                                                                                        ║\n");	
	printf("            ║                  1. Riddle                                                             ║\n");	
	printf("            ║                                                                                        ║ \n");	
	printf("            ║                  2. 魯蛇棋 /no                                                         ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                  3. 猜數字                                                             ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                  4. 廿一點   /no                                                       ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                  請以數字鍵選擇,按 數字0 離開本系統 ...                                ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ╚════════════════════════════════════════════╝\n");
	printf("            ╔════════════════════════════════════════════╗\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ║                現有分數 : %d                                                          ║\n",score);
	printf("            ║                                                                                        ║\n");
	printf("            ║                                                                                        ║\n");
	printf("            ╚════════════════════════════════════════════╝\n");
}
int main(){
	readfile();
	printf("");
	
	int imenu = 1;
	do{
		printmenu();
		menu = getch();
		imenu = menu - '0';

		switch(imenu){
			case 1:
				system("cls");
				riddle();
				break;
			case 2 :
				printf("game2\n");
				shetiqihontk();
				break;
			case 3:
				guessnum();
				break;
			case 4:
				bj();
				break;
			
		};
		if (imenu<0||imenu>4) {
			printf("Wrong Choice!"); 
			delay(0.1);
		}
	} while (imenu!=0);
	MessageBox(NULL, "Good Bye!", "Bye", MB_OK);
	savefile(score);

	
}


