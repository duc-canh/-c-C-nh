#include <stdio.h>

int main(){
	int n,i;
	int s = 0;
	printf("hay nhap n\n");
	scanf("%d",&n);
	
	printf("uoc cua %d la : ",n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			s = s + i; 
			printf("%d",i);
		}
		
	}
	printf("\n");
	printf("tong cac uoc do la : %d",s);
}
