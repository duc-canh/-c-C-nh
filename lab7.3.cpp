#include <stdio.h>

int main(){
	int ary[5];
	int i,x;
	int count = 0;
	
	printf("hay nhap so vao day\n");
	for(i=0;i<5;i++){
		scanf("%d",&ary[i]);
	}
	printf("hay nhap so can tim\n");
	scanf("%d",&x);
	
	for(i=0;i<5;i++){
		if(ary[i] == x){
			count++;
		}
	}
	if(count == 0){
		printf("%d k thuoc mang",x);
	}else{
		printf("%d thuoc mang",x);
	}
	
}	
