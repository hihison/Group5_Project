#include "group5.h"
//created by ±i¥H°Ç 
void setSubject(int a[4] ){
	a[0] = rand()%9 ;
	do{
		a[1] = rand()%9 ;
	}while(a[1] == a[0] ) ;
	do{
		a[2] = rand()%9 ;
	}while(a[2] == a[0] || a[2] == a[1] ) ;
	do{
		a[3] = rand()%9 ;
	}while(a[3] == a[0] || a[3] == a[1] || a[3] == a[2] ) ;
}

int guestAnswer(int a[4]){
	int b[4] , input , A = 0 , B = 0 ;
		printf("Enter the answer : ") ;
		scanf("%d",&input) ;
		b[0] = input/1000 ;
		b[1] = input%1000/100 ;
		b[2] = input%100/10 ;
		b[3] = input%10 ;
		for( int i = 0 ; i < 4 ; i ++ ){
			if( a[i] == b[i] ){
				A ++ ;
			}
			else{
				for( int j = 0 ; j < i ; j ++ ){
					if(a[i] == b[j]){
						B ++ ;
					}
					if(b[i]==a[j]){
						B ++ ;
					}
				}
			}
		}
	system("cls");
	printf("\n%dA%dB\n",A,B) ;
	return A ;
}

void check(int A,int a[4]){
	if(A == 4 ){
			printf("you win!!\nthe answer is :") ;
			for(int i = 0 ; i < 4 ; i ++ ){
				printf("%d",a[i]);
			}
	}
}

void guessnum(){
	system("cls");
	int a[4];
	srand(time(NULL));
	setSubject(a) ;
	while(1){
		check(guestAnswer(a) ,a) ;
		if(guestAnswer(a) == 4){
			break ;
		}
	}
}
