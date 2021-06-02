#include <stdio.h>
#include <string.h>

int main(){
	char arr[50];
	printf("nhap chuoi : ");
	scanf("%s",arr);
	
	char a,e,u,o,i,k;
	a=e=u=o=i=k=0;
	
	for(int i=0;i<strlen(arr);i++){
		switch(arr[i]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
			default: k++;
		}
	}
	printf("a = %d\n",a);
	printf("e = %d\n",e);
	printf("i = %d\n",i);
	printf("o = %d\n",o);
	printf("u = %d\n",u);
	printf("khac : %d\n",k);
}
