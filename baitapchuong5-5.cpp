#include <stdio.h>
#include <math.h>

int main(){
	int conga,concho, chan = 0;
	for(int i=1; i<=100; i++){
		//vi con ga co 2 chan nen ta lay so chan
		if(i%2==0) chan += 1;
	}
	conga = 50 - 36;
	printf("So con ga la: %d", conga);
	concho = 36 - conga;
	printf("\nSo con cho la: %d", concho);
}
