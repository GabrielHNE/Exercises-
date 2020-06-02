#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
void printarmapa(char mapa[40][140]){
	int i, j;
	for(i=0; i< 40;i++){
		for(j=0;j<140;j++){
		printf("%c", mapa[i][j]);
		}
		printf("\n");
	}
}
void printMap(char mapa[40][140]){
	int i,j;
	for(i=0; i< 40;i++){
			for(j=0;j<140;j++){
				mapa[i][j]=0;
			}
		}
		
		mapa[0][0] = 201;
		mapa[39][0] = 200;
		mapa[0][139] = 187;
		mapa[39][139] = 188;
		
		for(i = 1; i< 39; i++){
			
			for(j=1;j<139; j++){ //coluna
			mapa[39][j] = 205;		
			mapa[0][j] = 205;
			
			} // linha
			mapa[i][139] = 186;
			mapa[i][0] = 186;
		}
		
//			for(i = 20; i< 30; i++){
//			
//			for(j=1;j<139; j++){
//			mapa[0][0] = 201;
//			mapa[i][0] = 186;
//			mapa[39][0] = 200;
//			mapa[39][j] = 205;
//			mapa[39][139] = 188;
//			mapa[i][139] = 186;
//			mapa[0][139] = 187;
//			mapa[0][j] = 205;
//			}
//		}   
		printarmapa(mapa);	

}
void gotoxy(int x, int y)
{
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x+1,y+1});
}                  /* definição de gotoxy(x,y) */

int main(int argc, char** argv){
	int ver=1, x, col, lin;
	char mapa[40][140];
	printMap(mapa);
	while(1){
				
		gotoxy(col,lin);
		switch(getch()){
			case 'w':{
				if(lin>1){
					system("cls");
					
					lin --;
					gotoxy(col,lin);
					putch(64);
//					printMap();
				}
				break;
			} 
			case 's': {
				if(lin <40){
					system("cls");
					
					lin ++;
					gotoxy(col,lin);
					putch(64);
//					printMap();
				}
				break;
			}
			case'a': {
				if(col>1){
					system("cls");
					
					col --;
					gotoxy(col,lin);
					putch(64);
//					printMap();
				}
				break;
			}
			case'd': {
				if(col<140){
					system("cls");
					
					col ++;
					gotoxy(col,lin);
					putch(64);
//					printMap();
				}
				break;
			}
		}
	}
	

	return 0;
}




