#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("hay nhap lan luot cac canh cua tam giac\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	while((a + b <= c) || (a + c <= b) || (b + c <= a)){
		printf("do khong phai la canh tam giac ! hay nhap lai\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);	
	}
	int p = a + b + c;
	float q = (float)p/2;
	float s = sqrt(q * (q - a) * (q - b) * (q - c));
	printf("chu vi , dien tich  cua tam giac do la %d, %f\n",p,s);
}
