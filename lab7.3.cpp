#include <stdio.h>

int main(){
	int i,x,n;
	printf("nhap n : ");
	scanf("%d",&n);
	int arr[n];
	int count = 0;
	
	printf("hay nhap so vao day\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("hay nhap so can tim\n");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		if(arr[i] == x){
			count=1;
			break;
		}
	}
	if(count==1){
		printf("%d thuoc mang",x);
	}else{
		printf("%d k thuoc mang",x);
	}
	
	
}	
