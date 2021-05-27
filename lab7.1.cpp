#include <stdio.h>

int main(){
	int ary[5];
	int i;
	int s = 0;
	int count = 0;
	float tbc;
	
	printf("hay nhap so vao day\n");
	for(i=0;i<5;i++){
		scanf("%d",&ary[i]);
	}
	for(i=0;i<5;i++){
		if(ary[i] % 2 == 1){
			s = s + ary[i];
			count++;
		}
	}
	printf("%d\n",s);
	printf("%d\n",count);
	tbc = 1.0*s/count; 
	printf("tbc cua cac so le la : %f",tbc);
	
}
