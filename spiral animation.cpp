#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy(int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	int x,y;
	int a,b;
	a=20,b=40;
	int ch=185;
	int hc=185;
	while(x!=30 && y!=30){
	
	for(x=a;x<b;x++){
	gotoxy(x,a);
	printf("%c",ch);
	Sleep(10);
}

for(y=a;y<b;y++){
	gotoxy(b,y);
	printf("%c",hc);
	Sleep(10);
}
	for(x=b;x>a;x--){
	gotoxy(x,b);
	printf("%c",ch);
	Sleep(10);
}for(y=b;y>a;y--){
	gotoxy(a,y);
	printf("%c",hc);
	Sleep(10);
}

a++;
b--;

}
	

	}

