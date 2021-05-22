#include <stdio.h>


int main(){
	int n,i;
	printf("hay nhap n\n");
	scanf("%d",&n);
	
	printf("cac so chan nho hon %d la ", n);
	for(i = 0; i < n; i++){
		if(i % 2 == 0){
			printf("%d",i);
		}
	}
}
