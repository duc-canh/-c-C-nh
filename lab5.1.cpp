#include <stdio.h>

int main(){
	int n,count;
	
	printf("nhap n : ");
	scanf("%d",&n);
	count =0;
	
	if(n>0){
		for(int i=1;i<n;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==2){
		printf("%d la so nguyen to",n);
		}else{
		printf("%d khong la so nguyen to",n);
		}
	}else{
		printf("hay nhap n > 0");
	}
	
}
