#include <stdio.h>

int main(){
	int a, b, c;
	printf("input a :");
	scanf("%d", &a);
	printf("input b :");
	scanf("%d",&b);
	printf("input c :");
	scanf("%d",&c);
	
	if(a < b){
		if(a < c){
			printf("so nho nhat la : %d",a);
		}else{
			printf("so nho nhat la : %d",c);
		}
	}else{
		if(b < c){
			printf("so nho nhat la : %d",b);
		}else{
			printf("so nho nhat la : %d",c);
		}
	}
}
