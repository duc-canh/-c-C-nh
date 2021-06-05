#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("nhap canh a : ");
	scanf("%d",&a);
	printf("nhap canh b : ");
	scanf("%d",&b);
	printf("nhap canh c : ");
	scanf("%d",&c);
	float s;
	
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		float p =(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich cua tam giac la : %f",s);
		
	}else{
		printf("error");
	}
}
