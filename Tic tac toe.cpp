// BISMILLAHIR RAHMANIR RAHIM...
// Md. Miraz Hossain (Anik).
// 20, April , 2015.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int x,y,i,j,in,win_p1=0,win_p1c=0,win_p2=0,win_p2c=0,turn = 1,z=0;
char a[50],b[50],g[9]={NULL},again;
long double l;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void take_player_name();
void wellcome();
void help();
void draw_2();
void play();
void bye();
void player1();
void player2();
void check();
int madraw();

int main(){
	wellcome();
	take_player_name();
	help();
	draw_2();
	play();
	while(1);
}

void wellcome(){
	for(l=0;l<17500;l++){
		gotoxy(30,10);
		printf("W E L C O M E");

	}
	system("cls");
	fflush(stdin);
	for(l=0;l<17500;l++)
	{
		gotoxy(27,10);
		printf("Let's play\n\n\n");
		printf("\t\t\t\tTic Tac Toe . . .");
	}
	system("cls");
}
void take_player_name(){
	printf("\n\n\n\n\t\t\tPlayer 1 name : ");gets(a);
	printf("\n\t\t \t   %s your sign is \" X \"",a);
	printf("\n\n\n\n\t\t\tPlayer 2 name : ");gets(b);
	printf("\n\n\t\t   \t  %s your sign is  \" O \"",b);fflush(stdin);
	printf("\n\n\n\n\n\t\t  \tPress Enter to continue...");
	getchar();
	system("cls");
}
void help(){
	gotoxy(9,3);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(9,7);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(9,11);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(9,15);
	for(i=0;i<16;i++){
		printf("*");}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(9,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(14,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(19,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(24,i);
			printf("*");
		}
	}
	gotoxy(12,5);//
	printf("7");
	gotoxy(17,5);
	printf("8");
	gotoxy(22,5);
	printf("9");
	gotoxy(12,9);
	printf("4");
	gotoxy(17,9);
	printf("5");
	gotoxy(22,9);
	printf("6");
	gotoxy(12,13);
	printf("1");
	gotoxy(17,13);
	printf("2");
	gotoxy(22,13);
	printf("3");//

	gotoxy(47,3);
	printf("Instruction");
	gotoxy(40,5);
	printf("Press 1,2,3,4,5,6,7,8,9 on ");
	gotoxy(40,7);
	printf("Your key board to choose");
	gotoxy(40,9);
	printf("Which box you want to input");
	gotoxy(45,14);
	printf("If you understand.");
	gotoxy(41,16);
	printf("Press Enter to continue....");
	getchar();
	system("cls");
}
void draw_2(){
	gotoxy(32,3);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(32,7);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(32,11);
	for(i=0;i<16;i++){
		printf("*");}
	gotoxy(32,15);
	for(i=0;i<16;i++){
		printf("*");}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(32,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(37,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(42,i);
			printf("*");
		}
	}
	for(i=3;i<15;i++){
		if(i!=3||i!=7||i!=11||i!=15){
			gotoxy(47,i);
			printf("*");
		}
	}
	gotoxy(3,3);
	printf("Player 1");
	gotoxy(5,5);
	printf("\"X\"");
	gotoxy(3,7);
	puts(a);
	gotoxy(3,9);
	printf("Score = %d",win_p1c);//
	gotoxy(60,3);
	printf("Player 2");
	gotoxy(62,5);
	printf("\"O\"");
	gotoxy(60,7);
	puts(b);
	gotoxy(60,9);
	printf("Score = %d",win_p2c);//

	gotoxy(35,5);
	printf("%c",g[6]);
	gotoxy(35,9);
	printf("%c",g[3]);
	gotoxy(35,13);
	printf("%c",g[0]);
	gotoxy(40,5);
	printf("%c",g[7]);
	gotoxy(40,9);
	printf("%c",g[4]);
	gotoxy(40,13);
	printf("%c",g[1]);
	gotoxy(45,5);
	printf("%c",g[8]);
	gotoxy(45,9);
	printf("%c",g[5]);
	gotoxy(45,13);
	printf("%c",g[2]);
}
void player1(){

	system("cls");
	draw_2();
	if(z==1){
		gotoxy(34,17);	printf("\a\aWrong choice !");//
		gotoxy(32,19);	printf(" Press again.....");//
		z=0;
	}
	gotoxy(6,16);
	printf("***");
	gotoxy(3,18);
	printf("%s's turn ",a);
	fflush(stdin);
	scanf("%d",&in);
	if(in>0 && in<=9){
		if(g[in-1]=='\0'){
			g[in-1] = 'X';
		}
		else{
			z=1;
			player1();
		}
	}
	else{
		z=1;
		player1();
		}
}
void player2(){
	system("cls");
	draw_2();
	if(z==1){
		gotoxy(34,17);	printf("\a\aWrong choice !");//
		gotoxy(32,19);	printf("Press again.....");//
		z=0;
	}
	gotoxy(65,16);
	printf("***");
	gotoxy(60,18);
	printf("%s's turn ",b);
	fflush(stdin);
	scanf("%d",&in);
	if(in>0 && in<=9){
		if(g[in-1]=='\0'){
			g[in-1] = 'O';
		}
		else{
			z=1;
			player2();
		}
	}
	else{
			z=1;
			player2();
		}
}
void check(){
	if(g[0]=='X' && g[1]=='X' && g[2]=='X'){
		win_p1=1;
		g[3]='\0';
		g[4]='\0';
		g[5]='\0';
		g[6]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[3]=='X' && g[4]=='X' && g[5]=='X'){
		win_p1=1;
		g[0]='\0';
		g[1]='\0';
		g[2]='\0';
		g[6]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[6]=='X' && g[7]=='X' && g[8]=='X'){
		win_p1=1;
		g[0]='\0';
		g[1]='\0';
		g[2]='\0';
		g[3]='\0';
		g[4]='\0';
		g[5]='\0';
	}
	if(g[0]=='X' && g[3]=='X' && g[6]=='X'){
		win_p1=1;
		g[1]='\0';
		g[2]='\0';
		g[4]='\0';
		g[5]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[1]=='X' && g[4]=='X' && g[7]=='X'){
		win_p1=1;
		g[0]='\0';
		g[2]='\0';
		g[3]='\0';
		g[5]='\0';
		g[6]='\0';
		g[8]='\0';
	}
	if(g[2]=='X' && g[5]=='X' && g[8]=='X'){
		win_p1=1;
		g[0]='\0';
		g[1]='\0';
		g[3]='\0';
		g[4]='\0';
		g[6]='\0';
		g[7]='\0';
	}
	if(g[0]=='X' && g[4]=='X' && g[8]=='X'){
		win_p1=1;
		g[1]='\0';
		g[2]='\0';
		g[3]='\0';
		g[5]='\0';
		g[6]='\0';
		g[7]='\0';
	}
	if(g[2]=='X' && g[4]=='X' && g[6]=='X'){
		win_p1=1;
		g[0]='\0';
		g[1]='\0';
		g[3]='\0';
		g[5]='\0';
		g[7]='\0';
		g[8]='\0';
	}

	if(g[0]=='O' && g[1]=='O' && g[2]=='O'){
		win_p2=1;
		g[3]='\0';
		g[4]='\0';
		g[5]='\0';
		g[6]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[3]=='O' && g[4]=='O' && g[5]=='O'){
		win_p2=1;
		g[0]='\0';
		g[1]='\0';
		g[2]='\0';
		g[6]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[6]=='O' && g[7]=='O' && g[8]=='O'){
		win_p2=1;
		g[0]='\0';
		g[1]='\0';
		g[2]='\0';
		g[3]='\0';
		g[4]='\0';
		g[5]='\0';

	}
	if(g[0]=='O' && g[3]=='O' && g[6]=='O'){
		win_p2=1;

		g[1]='\0';
		g[2]='\0';
		g[4]='\0';
		g[5]='\0';
		g[7]='\0';
		g[8]='\0';
	}
	if(g[1]=='O' && g[4]=='O' && g[7]=='O'){
		win_p2=1;
		g[0]='\0';
		g[2]='\0';
		g[3]='\0';
		g[5]='\0';
		g[6]='\0';
		g[8]='\0';
	}
	if(g[8]=='O' && g[5]=='O' && g[2]=='O'){
		win_p2=1;
		g[0]='\0';
		g[1]='\0';
		g[3]='\0';
		g[4]='\0';
		g[6]='\0';
		g[7]='\0';
	}
	if(g[0]=='O' && g[4]=='O' && g[8]=='O'){
		win_p2=1;

		g[1]='\0';
		g[2]='\0';
		g[3]='\0';
		g[5]='\0';
		g[6]='\0';
		g[7]='\0';
	}
	if(g[6]=='O' && g[4]=='O' && g[2]=='O'){
		win_p2=1;
		g[0]='\0';
		g[1]='\0';
		g[3]='\0';
		g[5]='\0';
		g[7]='\0';
		g[8]='\0';
	}
}
int madraw(){
	int drawco=0;
	for(i=0;i<9;i++){
			if(g[i]=='X' || g[i] == 'O')
				drawco=drawco+1;
	}
	if(drawco==9)
		return 1;
	else
		return 0;
}
void play()
{
	system("cls");
	draw_2();
	if(turn==1)
	{
		if(madraw())
		{
			gotoxy(34,17);
			printf("\"Match DRAW\"");
			gotoxy(28,19);
			printf("Do you want to play again?? Y/N ??\t",a);
			fflush(stdin);
			scanf("%c",&again);
			while(1){
				if(again=='Y' || again == 'y')
				{
					win_p1=0;
					turn=2;
					for(i=0;i<9;i++)
						g[i]='\0';
					draw_2();
					play();

				}
				else if(again=='N' || again == 'n'){
					printf("bye");
					bye();
					break;
				}
				else{
					system("cls");
					draw_2();
					gotoxy(34,17);
					printf("Wrong choice");
					gotoxy(25,19);
					printf("Do you want to play again?? Y/N ??\t",a);
					fflush(stdin);
					scanf("%c",&again);
				}
			}
		}

		player1();
		check();
		if(win_p1==1)
		{
			win_p1c++;
			draw_2();

			system("cls");
			gotoxy(37,16);
			printf("%s win",a);
			draw_2();
			gotoxy(25,18);
			printf("Do you want to play again?? Y/N ??\t",a);
			fflush(stdin);
			scanf("%c",&again);
			while(1){
				if(again=='Y' || again == 'y')
				{
					win_p1=0;
					turn=2;
					for(i=0;i<9;i++)
						g[i]='\0';
					draw_2();
					play();

				}
				else if(again=='N' || again == 'n'){

					bye();
					break;
				}
				else{
					system("cls");
					draw_2();
					gotoxy(34,17);
					printf("Wrong choice");
					gotoxy(25,19);
					printf("Do you want to play again?? Y/N ??\t",a);
					fflush(stdin);
					scanf("%c",&again);
				}
			}
		}
		else
		{
			turn=2;
			system("cls");
			draw_2();
			play();
		}

	}

	else
	{

		if(madraw())
		{
			gotoxy(34,17);
			printf("\"Match DRAW\"");
			gotoxy(25,19);
			printf("Do you want to play again?? Y/N ??\t",a);
			fflush(stdin);
			scanf("%c",&again);
			while(1){
				if(again=='Y' || again == 'y')
				{
					win_p2=0;
					turn=1;
					for(i=0;i<9;i++)
						g[i]='\0';
					draw_2();
					play();

				}
				else if(again=='N' || again == 'n'){
					printf("bye");
					bye();
					break;
				}
				else{
					system("cls");
					draw_2();
					gotoxy(34,17);
					printf("Wrong choice");
					gotoxy(25,19);
					printf("Do you want to play again?? Y/N ??\t",a);
					fflush(stdin);
					scanf("%c",&again);
				}
			}
		}

		player2();
		check();
		if(win_p2==1){
			win_p2c++;
			draw_2();
			system("cls");
			gotoxy(37,16);
			printf("%s win",b);
			draw_2();
			gotoxy(25,18);
			printf("Do you want to play again?? Y/N ??\t",a);
			fflush(stdin);
			scanf("%c",&again);
			while(1)
			{
				if(again=='Y' || again == 'y')
				{
					win_p2=0;
					turn=1;
					for(i=0;i<9;i++)
						g[i]='\0';
					draw_2();
					play();
				}
				else if(again=='N' || again == 'n'){
					bye();
					break;
				}
				else{
					system("cls");
					draw_2();
					gotoxy(34,17);
					printf("Wrong choice");
					gotoxy(25,19);
					printf("Do you want to play again?? Y/N ??\t",a);
					fflush(stdin);
					scanf("%c",&again);
				}
			}
		}
		else
		{
			turn=1;
			system("cls");
			draw_2();
			play();

		}
	}
}
void bye(){

	system("cls");

	gotoxy(29,5);	printf("______________________");
	gotoxy(35,6);	printf("Scorecard");
	gotoxy(29,7);	printf("----------------------");
	gotoxy(29,8);	printf("%7s\t %7s",a,b);
	gotoxy(29,9);	printf("______________________");
	for(i=1,j=8;i<=5;i++,j++){		gotoxy(39,j);	 printf("!");	}
	for(i=1,j=6;i<=8;i++,j++){		gotoxy(29,j);	 printf("#");	}
	for(i=1,j=6;i<=8;i++,j++){		gotoxy(50,j);	 printf("#");	}
	gotoxy(31,11);	printf("%4d",win_p1c);
	gotoxy(41,11);	printf("%5d",win_p2c);
	gotoxy(29,13);	printf("**********************");
	if(win_p1c > win_p2c){
		gotoxy(25,15);	printf("Congratulation \"%s\", You won..",a);
		gotoxy(27,17);	printf("Better luck next time \"%s\"",b);
	}
	else if(win_p1c < win_p2c){
		gotoxy(25,15);	printf("Congratulation \"%s\", You won..",b);
		gotoxy(27,17);	printf("Better luck next time \"%s\"",a);
	}
	else{
		gotoxy(20,17);	printf("Great !!!.. Both of you are intelligent !!");
	}
	gotoxy(17,3);	printf("Thank you %s and %s for playing Tic Tac Toe.",a,b);
	gotoxy(32,20);	printf("Have a nice day !");
	gotoxy(22,23); printf("Copyright - MD. MIRAZ HOSSAIN @ 2015");
	gotoxy(39,21);
	while(1);
}
