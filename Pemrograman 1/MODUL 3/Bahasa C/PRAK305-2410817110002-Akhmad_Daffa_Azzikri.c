#include <stdio.h>

int main(){
	int d1, h, j, m, d2;
	
	printf("");
	scanf("%d",&d1);
	
	h =(d1 / 86400);
	j = (d1 % 86400) / 3600;
	m = (d1 % 3600) / 60;
	d2 = (d1 % 60);
	
	if (h > 0){
		printf("%d hari %02d:%02d:%02d\n", h, j, m, d2);
	}
	else {
		printf("%02d:%02d:%02d\n", j, m, d2);
	}
		return 0;
	}