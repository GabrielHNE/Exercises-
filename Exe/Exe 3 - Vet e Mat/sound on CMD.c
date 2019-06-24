#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define a 262
#define s 294
#define d 330
#define f 349
#define j 392
#define k 440
#define l 494

int main(int argc, char** argv){
	

	while (1){
		switch(getch()){
			case 'a':{
				Beep(a,400);
//				sound(a);
//				delay(500);
//				nosound();
//				printf("%c", getch());
				break;
			}
			case 's':{
				Beep(s,400);	
//				sound(s);
//				delay(500);
//				nosound();	
//				printf("%c", getch());			
				break;
			}
			case 'd':{
				Beep(d,400);	
//				sound(d);
//				delay(500);
//				nosound();
//				printf("%c", getch());				
				break;
			}
			case 'f':{
				Beep(f,400);	
//				sound(f);
//				delay(500);
//				nosound();
//				printf("%c", getch());				
				break;
			}
			case 'j':{
				Beep(j,400);	
//				sound(j);
//				delay(500);
//				nosound();
//				printf("%c", getch());			
				break;
			}
			case 'k':{
				Beep(k,400);	
//				sound(k);
//				delay(500);
//				nosound();
//				printf("%c", getch());				
				break;
			}
			case 'l':{
				Beep(l,400);	
//				sound(l);
//				delay(500);
//				nosound();
//				printf("%c", getch());				
				break;
			}
			case 27: {
				exit(1);
			}
		}
	}
	return 0;
}




