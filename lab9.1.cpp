#include <stdio.h>

bool songuyento(int n){
	if(n<2) return false;
	if(n==2) return true;
	if(n>2){
		for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
			}
		}
		return true;
	}
}
int songuyentotieptheo(int n){
	for(int i=n+1;;i++){
		if(songuyento(i)){
			return i;
		}
	}
}

int sodaonguoc(int n){
	int d =0;
	for(;n!=0;n/=10){
		d=d*10+n%10;
	}
	return d;
}

int timsothuocfibonaci(int n){
	if(n<1) return 0;
	if(n <3) return 1;
	if(n<4) return 2;
	int x1 = 1,x2=1,x3=2;
	for(int i=4;i<=n;i++){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	return x3;
}

int main(){
	int k;
	printf("nhap k : ");
	scanf("%d",&k);
	
	printf("so nguyen to tiep theo cua %d la %d\n",k,songuyentotieptheo(k));
	
	printf("so dao nguoc cua %d la %d\n",k,sodaonguoc(k));
	
	printf("so thu %d cua day fibonaci la : %d",k,timsothuocfibonaci(k));
}
