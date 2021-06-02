#include <stdio.h>

int main(){
	int i,n;
	printf("nhap n : ");
	scanf("%d",&n);
	int arr[n];
	int s = 0;
	int count = 0;
	float tbc;
	
	printf("hay nhap so vao day\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i] % 2 == 1){
			s = s + arr[i];
			count++;
		}
	}
	tbc = 1.0*s/count; 
	printf("tbc cua cac so le la : %f",tbc);
	
}
