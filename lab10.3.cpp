#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	char s[n][50];
	
	for(int i=0;i<n;i++){
		printf("nhap chuoi : ");
		scanf("%s",s[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j],s[j+1]) >0){
				char team[50];
				strcpy(team,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],team);
				
			}
		}
	}
	printf("sau sap xep : ");
	for(int i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
}
