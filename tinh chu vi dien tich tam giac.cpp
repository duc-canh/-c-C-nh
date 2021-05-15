#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,q,p,s;
	printf("hay nhap cac canh cua tam giac \n");
	printf("Canh a : ");
	scanf("%f",&a);
    printf("Canh b : ");
	scanf("%f",&b);
	printf("Canh c : ");
	scanf("%f",&c);
	
	if(a + b <= c){
		printf("day khong phai la tam giac");
	}else{
		if(a + c <= b){
			printf("day khong phai la tam giac");
		}else{
			if(a + c <= b){
				printf("day khong phai la tam giac");
			}else{
				q = (a + b + c)/2;
				p = q * 2;
				s = sqrt(q * (q - a) * (q - b) * (q - c));
				printf("chu vi cua tam giac la : %f\n",p);
				printf("dien tich cua tam giac la : %0.2f", s);
			}
		}
	}
}
