#include <stdio.h>
#include <math.h>

int main(){
	int traudung, traunam, traugia;
	for(traudung = 1; traudung <= 100/5; traudung++){
		for(traunam = 1; traunam < 100/3; traunam++){
			traugia = 100 - (traudung + traunam);
			if(traudung * 5 + traunam * 3 + traugia * 1/3 == 100 and traugia % 3 == 0){
				printf("\nTrau dung: %d",traudung);
				printf("\nTrau nam: %d",traunam);
				printf("\nTrau gia: %d", traugia);
				printf("\n-----------------------");
			}
		}	
	}
}
