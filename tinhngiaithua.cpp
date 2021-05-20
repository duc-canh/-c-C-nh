#include <stdio.h>

int main(){
	int n;
	int i = 1;
	int s = 1;
	printf("hay nhap so nguyen duong n \n");
	scanf("%d",&n);
	
	while(i <= n){
		s = s*i;
		i++;
	}
	printf("giai thua cua %d la : %d",n,s);
}
