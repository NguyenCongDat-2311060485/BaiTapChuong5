#include <stdio.h>
#include <math.h>
int giaithua(int a){
	if(a == 0){
	   return 1;
	}else return a * giaithua(a - 1);
}
int main(){
	int n,x;
	printf("Nhap n= ");
	scanf("%d", &n);
	printf("\nNhap x= ");
	scanf("%d", &x);
	//a
	printf("\nCau A");
	int tonga = 0;
	for(int i=1; i<=n; i++){
		tonga += i;
	}
	printf("\nTong cau a = %d", tonga);
	//b
	printf("\nCau B");
	float tongb = 0;
	for(float i=1.0; i/(i+1.0) <= n/(n+1.0); i++){
		tongb += i/(i+1.0);
	}
	printf("\nTong cau b = %.2f", tongb);
	//c
	printf("\nCau C");
	int tongc = 0,c;
	for(int i=1; i<=pow(-1,n)*n; i++){
		if(n%i != 0){
		c = -1 * i;
		}else c = i;
		tongc += c;
	}
	printf("\nTong cau c = %d", tongc);
	printf("\nCau D");
	float tongd = 0;
	for(float i=1.0; pow(x,i)/giaithua(i) <= pow(x,n)/giaithua(n); i++){
		tongd += pow(x,i)/giaithua(i);
	}
	printf("\nTong cau d = %.2f", 1 + tongd);
	printf("\nCau E");
	float tonge = 0, e;
	for(int i=1; pow(x,i)/giaithua(i) <= pow(x,n)/giaithua(n); i++){
		if(n%i != 0){
			e = - 1 * pow(x,i)/giaithua(i);
		}else e = pow(x,i)/giaithua(i);
		tonge += e;
	}
	printf("\nTong cau e = %.2f", 1 + tonge);
}
