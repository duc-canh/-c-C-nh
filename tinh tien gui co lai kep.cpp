#include <stdio.h>
#include <math.h>

int main(){
	int y,money;
	float sum;
	printf("hay nhap so tien gui\n");
	scanf("%d", &money);
	printf("hay nhap so nam can tinh\n");
	scanf("%d", &y);  
	sum = money + 0.08 * money;
	
	if(y > 0 && y < 5 && money > 0){
		if(y == 1){
		printf("so tien ban nhan duoc sau %0.0f nam la : %f",y,sum);
	}
	if(y == 2){
		sum = sum + 0.08 * sum;
		printf("so tien ban nhan duoc sau %0.0f nam la : %f",y,sum);
	}
	if(y == 3){
		sum = sum + 0.16*sum + 0.0064*sum;
		printf("so tien ban nhan duoc sau %0.0f nam la : %f",y,sum);
	}
	if (y == 4){
		sum = sum + 0.24*sum + 0.0192*sum + 0.000512*sum;
		printf("so tien ban nhan duoc sau %0.0f nam la : %f\n",y,sum);
	}
}else{
	printf("ban da nhap sai , hay nhap lai");
}
	
}
