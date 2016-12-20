#include "group5.h"
//¾ד­׃MAIN×÷UI³£«Ü₪¡ 
int score = readfile();
char menu;
//Created by hihison 
void animation(){
	system("cls");
	system("COLOR 70");
	printf("\n                                                ¥‏°ך³ּ₪j×÷¹Cְ¸¨t²־               \n");
	delay(0.5);
	printf("                                                 ₪W");
	delay(0.2);
	printf("     ½u");
	delay(0.2);
	printf("     ֵo\n");   
	delay(0.5);	
}
void printmenu(){ //§Ú×÷¥D₪H¬O hihison 
	score = readfile();
	system("mode con:cols=120 lines=30");
	system("cls");
	system("COLOR 70");
	printf("\n                                                ¥‏°ך³ּ₪j×÷¹Cְ¸¨t²־               \n");
	
	printf("                                                 ₪W");
	
	printf("     ½u");
	
	printf("     ֵo\n");   
	
	//₪W½uֵo!! (₪U½u×©) 
	printf("            שÝשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששß\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  ¥|­׃¹Cְ¸¥פ§g¿ן¾Ü                                                      שר\n");
	printf("            שר                                                                                        שר\n");	
	printf("            שר                  1. Riddle                                                             שר\n");	
	printf("            שר                                                                                        שר \n");	
	printf("            שר                  2. ¾|³D´ׁ                                                             שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  3. ²q¼ֶ¦r                                                             שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  4. ₪Ü₪@ֲI                                                             שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  ½׀¥H¼ֶ¦rֱה¿ן¾Ü,«צ ¼ֶ¦r0 ֲק¶}¥»¨t²־ ...                                שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שדשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששו\n");
	printf("            שÝשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששß\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                ²{¦³₪ְ¼ֶ : %d                                                          שר\n",score);
	printf("            שר                                                                                        שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שדשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששו\n");
}
int main(){
	if (score<0){
		MessageBox(NULL, "YOU DONT HAVE ENOUGH SCORE TO PLAY ON THIS SYSTEM !", "ERROR", MB_OK);
		exit(1);
	}
	readfile();
	printf("");
	
	int imenu = 1;
	animation();
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
				system("cls");
				
				shetiqi();
				break;
			case 3:
				system("cls");
				guessnum();
				break;
			case 4:
				system("cls");
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
	system("color  00");
	
}


