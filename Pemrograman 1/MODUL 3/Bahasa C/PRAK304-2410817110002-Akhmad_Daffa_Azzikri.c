#include <stdio.h>

int main(){
	int a;
	
	printf("");
	scanf("%d",&a);
	
	if (a == 0){
		printf("Nol");
	}
	else if (a>= 1 && a<=9){
		printf("satuan");
	}
	else if (a == 10 || a>= 20 && a<= 99){
		printf("puluhan");
	}
	else if (a >= 11 && a<= 19){
		printf("belasan");
	}
	else if(a >= 100){
		printf("Anda Menginput Melebihi Limit Bilangan");
	}
	
	return 0;
}
		