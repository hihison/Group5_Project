#include "group5.h"

void delay(int sec) 
{ 
	time_t _t; 
	_t = time (NULL); 
	while(time (NULL) <= _t + sec){}; 
} 
//time delay for seconds

int readfile (){
	FILE *fPtr;
	int read;
    fPtr = fopen("user_profile/data.txt", "r");
    fscanf(fPtr, "%d", &read);
    fclose(fPtr);
     
   // printf("Recent score : %d \n", read);
     
    return read;
}
//read file for user porfile

void savefile (int score){
	FILE *fPtr;
    fPtr = fopen("user_profile/data.txt", "w");
    fprintf(fPtr, "%d", score);
    fclose(fPtr);
}
//write file for user file

void str_low(char *str1, char *strlow){
int i=0,temp=0;
for (int j = 0  ; j <= strlen(str1)-1; j++ ){
	
	if (str1[j]>=97 || str1[j]<=63) strlow[i++] = str1[j]; 
		else {
		temp=str1[j]+32;
		strlow[i++]=temp;
		}
	}strlow[i]='\0';
}
//convert english characters to lowercase 
void  riddle () {
	FILE *question;		FILE *ansfile;
	char data[999], data2[999];
	char q[MAX][MAX] ;
	char a[MAX][MAX] ;
	char answer[MAX][MAX];
	char anslow[MAX][MAX];
	char choice;
	int counter=0;
	int score = readfile();
	int rq ;
	
	
	question = fopen("gamedata/question.txt", "r");
	while (fgets(data,999,question)!=NULL){
		strcpy(q[counter],data);
		counter=counter+1;
	} fclose(question); 
	
	//first method to get data from txt files
		
	ansfile = fopen("gamedata/answer.txt", "r");
	for (int get = 0; get<=counter ; get++){
		data2[get] = fscanf(ansfile,"%s",a[get]);
	}fclose(ansfile);
	//and this is the second one 
	
	//get questions and answer by reading txt files
	
	system("color F2");
	system("@ECHO off");
	int number ;
	
	
	
	
	
	printf("            ùÝùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùß\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                  Riddle - The English Spelling Game                                    ùø\n");
	printf("            ùø                                                                                        ùø\n");	
	printf("            ùø                                                                                        ùø\n");	
	printf("            ùø                                                                                        ùø \n");	
	printf("            ùø                  Please type in how many questions you want to answer :                ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùãùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùå\n");
	
	
	
	
	
	
	scanf("%d",&number);
	//get times to answer
	
	for (int i = 0 ; i < number ; i++ ){
	srand(time(NULL));
	rq = rand()%(counter);
	// Random access questions

	do{
		system("COLOR F0");
		system("cls");
		
		
		
		
		
	printf("            ùÝùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùß\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                  Riddle - The English Spelling Game                                    ùø\n");
	printf("            ùø                                                                                        ùø\n");	
	printf("            ùø                  Recent score : %d                                                    ùø\n",score);	
	printf("            ùø                                                                                        ùø \n");	
	printf("            ùø                  Question %d                                                            ùø\n",i+1);
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø %s                     ùø\n",q[rq]);
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùø                                                                                        ùø\n");
	printf("            ùãùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùå\n");
		
		
		
		
		
		
		
	  /*  printf("Recent score : %d \n", score);
		printf("%s\n",q[rq]);
		printf("Answer Here: ");*/
		scanf("%s",&answer[i]);
		str_low(answer[i],anslow[i]);
		printf("you typed : %s , Sure? (Y/N) \n",anslow[i]);
		scanf("%s",&choice);
		} while (choice!=89 && choice!=121);
			int iscorrect = strcmp(anslow[i],a[rq]);
		
			if (iscorrect==0) {
				score=score+5;
				savefile (score);
				MessageBox(NULL, "Oops! Correct!", "OMG", MB_OK);	
				system("color 2F");	
				printf("you are right!\n") ;
				delay(0.1);
				system("color F2");	
				printf("scores + 5\n") ;
				delay(0.1);
				system("color 2F");	
				printf("You now have scores : %d  \n",score) ;
				delay(0.1);
				system("color F2");	
				printf("Congratulations !\n") ;
				delay(0.5);
			}
			 else {
			    score=score-5;
			 	savefile (score);
				system("COLOR 4F"); 
				MessageBox(NULL, "Oops! Wrong!", "OMG", MB_OK);	
		    	printf("Wrong, the answer is %s\n",a[rq]);
 		    	delay(0.1);
				system("COLOR F4"); 	
			    printf("Unluckly , you lose $5\n");
 			    delay(0.1);		
			    system("COLOR 4F"); 
			    printf("You now have scores : %d  \n",score) ;
 			    delay(0.5);	

			}
	}
	savefile (score);
	system("COLOR 61"); 	
	system("cls");
	printf("You totally have scores %d\n Back to Main Menu...", score);
	delay(0.5);
	
	
	
}
