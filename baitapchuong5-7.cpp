#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	for(a = 1; a <= 9; a++){
		for(b = 1; b <= 9; b++){
			for(c = 1; c <= 9; c++){
		    int bieuthuc1 = pow(a,3) + pow(b, 3) + pow(c, 3);
			int bieuthuc2 = 100*a + 10*b + c;
			if(bieuthuc1 == bieuthuc2) printf("\nKet qua a=%d b=%d c=%d",a,b,c);
		}
	}
}
	
}
