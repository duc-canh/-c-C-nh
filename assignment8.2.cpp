#include <stdio.h>

int main(){
	int n,x;
	printf("nhap n : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("phan tu thu %d la : ",i);
		scanf("%d",&x);
		if(i==0){
			arr[0] = x;
		}
		for(int j=0;j<i;j++){
			if(arr[j] == x){
			printf("nhap lai gia tri %d : ",i);

			scanf("%d",&x);
			}
			if(x != arr[j]){
				arr[i] = x;
			}
		
		}
	}
	printf("mang chua cac phan tu la : ");
	for(int i=0;i<n;i++){
		printf("%2d",arr[i]);
	}
}
