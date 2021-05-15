#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c, delta,x,x1,x2;
	printf("nhap lan luot cac he so cua phuong trinh\n");
	printf("hay nhap a : ");
	scanf("%f",&a);
	printf("hay nhap b : ");
	scanf("%f",&b);
	printf("hay nhap c : ");
	scanf("%f",&c);
	
	if(a == 0){
		if(b== 0){
			if(c==0){
				printf("pt co vo so nghiem");
			}else{
				printf("pt vo nghiem");
			}
		}else{
			x = -c/b;
			printf("pt co 1 nghiem X = %0.2f",x);
		}
	}else{
		delta = b * b - 4 * a * c;
		if(delta < 0){
			printf("PT vo nghiem");
		}else{
			if(delta == 0){
				x = -b/(2 * a);
				printf("pt co 1 nghiem x = %0.2f",x);
			}else{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				printf("PT co 2 nghiem lan luot la \n");
				printf(" x1 = %0.2f\n", x1);
				printf(" x2 = %0.2f\n", x2);
			}
		}
	}
}
