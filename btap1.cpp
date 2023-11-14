#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d/n", &n);
	if(n<1||n>9){
		printf("So khong hop le.");
		return 0;
	}
	for(int i = 1; i<=9; i++){
		int result=n*i;
		printf("%d x %d = %d \n", n, i, result);
	}
}
