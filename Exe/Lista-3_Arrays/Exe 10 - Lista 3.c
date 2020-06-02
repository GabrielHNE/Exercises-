#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int moviment (){
	int x, y, i;
	
	while (kbhit()){
		x = getch();
		
		if(x == 87 || x == 119){
			mapa[][] =
		}

	}
}

int main (int argc, char** argv){
	int i, j, x, y;
	int run = 1;
//	char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}, 
	char mapa[40][140], caract = 64; //@ personagem
	
	x = 69;
	y = 19;
	
	while(run==1){
		
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
		
			for(i = 20; i< 30; i++){
			
			for(j=1;j<139; j++){
			mapa[0][0] = 201;
			mapa[i][0] = 186;
			mapa[39][0] = 200;
			mapa[39][j] = 205;
			mapa[39][139] = 188;
			mapa[i][139] = 186;
			mapa[0][139] = 187;
			mapa[0][j] = 205;
			}
		}   
		//start point do caract
		
		mapa[x][y] = caract;
		
		moviment();
		
		for(i=0; i< 40;i++){
			for(j=0;j<140;j++){
			printf("%c", map[i][j]);
			}
			printf("\n");
		}
		
		
	}
	
	return 0;
}

