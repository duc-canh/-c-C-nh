#include <stdio.h>

int main(){
	int a,b,i,d;
	printf("hay nhap lan luot 2 so\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int c = a * b;
	

	while(a != b){
		if(a>b){
			a = a -b;
		}else{
			b = b -a;
		}
	}
	printf("UCLN cua 2 so do la : %d\n",a);
	printf("BCNN cua 2 so do la : %d",(c/a));

}
