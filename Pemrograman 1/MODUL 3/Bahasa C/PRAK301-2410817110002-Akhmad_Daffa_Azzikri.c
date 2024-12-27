#include <stdio.h>

int main(){
	int a, b, c;
	
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    printf("");
    scanf("%d", &c);
    
    if (a > b && a > c) {
        if (b > c) {
            printf("%d %d %d\n", c, b, a);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    } else if (b > a && b > c) {
        if (a > c) {
            printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", a, c, b);
        }
    } else {
        if (a > b) {
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", a, b, c);
        }
    }
    
	return 0;
}