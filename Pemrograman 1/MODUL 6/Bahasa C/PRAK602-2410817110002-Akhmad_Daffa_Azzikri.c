#include <stdio.h>

int main() {
    int ruangan;
    scanf("%d", &ruangan);
    int zetsu[ruangan];

    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < ruangan; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
    printf("\n");
    return 0;
}
