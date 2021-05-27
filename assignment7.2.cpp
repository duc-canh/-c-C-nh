#include <stdio.h>

int main(){
	int n;
	printf("hay nhap tong so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n],i,low;
	
	printf("hay nhap lan luot cac so cua mang\n");
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	low = -1;
	for(i=0;i<n;i++){
		if(ary[i] >= 0){
			low = ary[i];
			break;
		}
	}
	if(low == -1){
		printf("k co so nguyen duong nho nhat");
	}else{
		for(i=0;i<n;i++){
			if(ary[i] >= 0 && ary[i] < low){
				low = ary[i];
			}
		}
		printf("so nguyen duong nho nhat la %d",low);
	}
	
}
