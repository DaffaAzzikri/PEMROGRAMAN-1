#include <stdio.h>

int main (){
	int a;
	
	printf("");
	scanf("%d",&a);
	
	if (a == 0){
		printf("nol");
	}
	else if (a >= 1){
		printf("positif");
	}
	else {
		printf("negatif");
	}

return 0;
}