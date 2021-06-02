#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m;
	printf("nhap n : ");
	scanf("%d",&n);
	int *arr;
	arr = (int *) malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("phan tu thu %d la : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int teap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = teap;
			}
		}
	}
	printf("mang sau sap xep\n");
	for(int i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	printf("so lon nhat trong mang la %d\n",arr[n-1]);
	printf("so phan tu can bo sung :");
	scanf("%d",&m);
	arr = (int *) realloc(arr,m*sizeof(int));
	for(int i=n;i<(m+n);i++){
		printf("phan tu thu %d la ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int j=1;j<(m+n);j++){
		int i = j-1;
		int tmp = arr[j];
		for(;i>=0&&tmp<arr[i];i--){
			arr[i+1] = arr[i];
		}
		arr[i+1] = tmp;
	}
	printf("mang sau sap xep : \n");
	for(int i=0;i<(m+n);i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	printf("so lon nhat la : %d",arr[(m+n)-1]);
}
