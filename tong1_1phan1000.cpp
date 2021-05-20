#include <stdio.h>

int main(){
	float s = 0;
	int n =0;
	
	while(n <= 999){
		s = s + (float)1/(1 + n);
		n++;
	}
	printf("tong tu 1 den 1/1000 la : %f",s);
}
