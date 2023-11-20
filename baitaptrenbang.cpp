#include <stdio.h>
#include <math.h>

int main(){
	int tong=0,n;
	printf("\nNhap n="); scanf("%d", &n);
	for(int i=1;i<=n;i=i+2)
	tong=tong+1;
	printf("\n Tong = %d", tong);
	//TIm cac so nguyen to
	printf("\nCac SNT la: ");
	for(int i=2;i<=n;i++){
		int dem=0;
		for(int j=2; j<=sqrt(i);j++)
		if(i%j==0)dem=dem+1;
		if(dem==0)printf("%d ", i);
	}
	//TIm cac so chinh phuong
	printf("\nCac so chinh phuong la: ");
	for(int i=1;i*i<=100;i++){
		printf("%d ", i*i);
	}
	//tim cac so hoan hao
	printf("\nCac so hoan hao la: ");
	for(int i=1;i<=n;i++){
		int sum = 0;
		for(int j=1;j<=i/2;j++){
			if(i%j==0) sum=sum+j;
			if(sum==i) printf("%d ", i);
		}
	}
	printf("\nCac so la luy thua cua 3: ");
	int a=3;
	for(int i=1;pow(a,i) <= n; i++){
		printf("%.1f ", pow(a,i));
	}
}
