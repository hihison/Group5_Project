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

