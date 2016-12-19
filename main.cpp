#include "group5.h"
//¾ד­׃MAIN×÷UI³£«Ü₪¡ 
int score = readfile();
char menu;
//Created by hihison 
void printmenu(){ //§Ú×÷¥D₪H¬O hihison 
	score = readfile();
	system("cls");
	system("COLOR 70");
	printf("\n                                                ¥‏°ך³ּ₪j×÷¹Cְ¸¨t²־               \n");
	delay(0.005);
	printf("                                                 ₪W");
	delay(0.005 );
	printf("     ½u");
	delay(0.005);
	printf("     ֵo\n");   
	delay(0.005);
	//₪W½uֵo!! (₪U½u×©) 
	printf("            שÝשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששß\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  ¥|­׃¹Cְ¸¥פ§g¿ן¾Ü                                                      שר\n");
	printf("            שר                                                                                        שר\n");	
	printf("            שר                  1. Riddle                                                             שר\n");	
	printf("            שר                                                                                        שר \n");	
	printf("            שר                  2. ¾|³D´ׁ /no                                                         שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  3. ²q¼ֶ¦r                                                             שר\n");
	printf("            שר                                                                                        שר\n");
	printf("            שר                  4. ₪Ü₪@ֲI   /no                                                       שר\n");
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
				break;
			case 3:
				guessnum();
				break;
			case 4:
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


