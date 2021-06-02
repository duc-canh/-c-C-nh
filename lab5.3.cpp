#include <stdio.h>

int main(){
	int n,f3;
	printf("nhap n >= 0: ");
	scanf("%d",&n);
	int f1 = 1;
	int f2 = 1;
	
	if(n==0){
		printf("khong ko tiem can duoi ");
	}else if(n>0&&n<3){
		printf("tiem can duoi cua %d la 0",n);
	}else{
		for(int i=3;f3<n;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		printf("tiem can duoi cua %d trong day Fibonaci la : %d",n,f1);
	}
}
