#include <stdio.h>

#include "assignment9.h"

int main(){
	// tim so thuoc mang
	int k,n;
	printf("nhap k : ");
	scanf("%d",&k);
	
	printf("nhap so phan tu trong mang : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("phan tu thu %d la : ",i);
		scanf("%d",&arr[i]);
	}
	if(timsothuocmang(arr,k)){
		printf("so thuoc mang\n");
	}
	else{
		printf("so k thuoc mang\n");
	}
	
	// in ra so le
	printf("so le co trong mang la :");
	solethuocmang(arr,n);
	
	// tim ucln bcnn
	int a,b;
	printf("nhap a : ");
	scanf("%d",&a);
	printf("nhap b : ");
	scanf("%d",&b);
	printf("Ucln cua 2 so la %d\n",ucln(a,b));
	printf("Bcnn cua 2 so la %d\n",bcnn(a,b));

	
}

