#include <stdio.h>
#include <stdlib.h>
#define MAX 90
#include <string.h>
#include <dos.h>
#include <iostream>
#include <unistd.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

//int score = readfile();
void delay(int sec) ;
int readfile ();
void savefile (int score);
void str_low(char *str1, char *strlow);
void riddle();
void printmenu();
//structure of game: riddle // BY CHAN NGO YIN  405416172//

void setSubject(int a[4] );
int guestAnswer(int a[4]);
void check(int A,int a[4]);
void guessnum();
//structure of game: guesssnumber// created by ±i¥H°Ç // 

void init(int board[][10]);
void printboard(int board[10][10]);
int shetiqi();
//structure of game: 2playersshetiqi//  code by TKHon // 

void aiDeawOne();
int srandcard_com();
void playerDrawOne();
int srandcard_player();
int computer_ai();
void printcard(char card[],int count);
int Menu();
void com_printcard();
int player_printcard();
void bj();






