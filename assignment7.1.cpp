#include <stdio.h>

int main(){
	int n;
	printf("hay nhap tong so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n],i,x;
	
	printf("hay nhap lan luot cac so cua mang\n");
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	
	for(i=0;i<n;i++){
		if(ary[i] % 2 == 1){
			x = ary[i];
		}
	}
	printf("so le cuoi cung cua mang la %d",x);
}
