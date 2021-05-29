#include <stdio.h>

int main(){
	int n,i,x,a;
	printf("nhap x : ");
	scanf("%d",&x);
	printf("nhap n : ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	if(arr[0] > x){
		printf("khong co tiem can duoi");
	}else{
		for(i=0;i<n;i++){
			if(arr[i] < x){
				a = arr[i];
			}
		}
		printf("tiem can duoi cua %d la : %d ",x,a);
	}
	
	
	
}
