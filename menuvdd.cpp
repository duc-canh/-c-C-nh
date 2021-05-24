#include <stdio.h>

int main(){
	printf("Menu :\n");
	printf("1, chon mon an \n");
	printf("2, goi do uong \n");
	printf("3, thanh toan \n");
	printf("4, thoat chuong trinh \n");
	
	printf("hay nhap vao so tuong ung ma ban muon chon \n");
	int n,x;
	scanf("%d",&n);

	
	for(;n > 4 || n < 1;){
		printf("ban hay nhap lai lua chon cua ban \n");
		scanf("%d",&n);
		}
	for(;n >= 1 && n <= 2; ){
		for(;n==1;){
		printf("1,com ga\n2,pho\n3,bun\n4,quay lai\n");
		scanf("%d",&x);
		if(x > 0 && x < 5){
			if(x == 4){
				printf("Menu :\n");
				printf("1, chon mon an \n");
				printf("2, goi do uong \n");
				printf("3, thanh toan \n");
				printf("4, thoat chuong trinh \n");
				scanf("%d",&n);
			} else{
				printf("cam on quy khach da lua chon %d\n",x);
				printf("Menu :\n");
				printf("1, chon mon an \n");
				printf("2, goi do uong \n");
				printf("3, thanh toan \n");
				printf("4, thoat chuong trinh \n");
				scanf("%d",&n);
				}
			}
		}
		for(;n==2;){
		printf("1,tra sua\n2,nuoc cam\n3,sinh to\n4,quay lai\n");
		scanf("%d",&x);
		if(x > 0 && x < 5){
			if(x == 4){
				printf("Menu :\n");
				printf("1, chon mon an \n");
				printf("2, goi do uong \n");
				printf("3, thanh toan \n");
				printf("4, thoat chuong trinh \n");
				scanf("%d",&n);
			} else{
				printf("cam on quy khach da lua chon %d\n",x);
				printf("Menu :\n");
				printf("1, chon mon an \n");
				printf("2, goi do uong \n");
				printf("3, thanh toan \n");
				printf("4, thoat chuong trinh \n");
				scanf("%d",&n);
				}
			}
		}
	}
	if(n == 3){
		printf("so tien quy khach can thanh toan la 10000$\nXin cam on !\n");
	}	
	if(n == 4){
		printf("see you again !!!\n");

    }
}
