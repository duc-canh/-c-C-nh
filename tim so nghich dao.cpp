#include <stdio.h>

int main(){
	int num;
	int a,b,c;
	printf("Hay nhap mot so nguyen duong < 1000\n");
	scanf("%d",&num);
	
	if(num < 1000 && num > 0){
		if(num >0 && num < 9){
			printf("so do khong co nghich dao");
		}
		if(num > 9 && num < 100){
			b = num / 10;
			c = num % 10;
			printf("so nghich dao cua so do la : %d%d",c,b);
		}
		if(num >= 100 & num < 1000){
			a = num / 100;
			b = (num - (a * 100)) / 10;
			c = num - (a * 100)- (b * 10);
			printf("so nghich dao cua so do la : %d%d%d", c,b,a);
		}
	}else{
		printf("ban da nhap sai so ! hay nhap lai");
	}
}
