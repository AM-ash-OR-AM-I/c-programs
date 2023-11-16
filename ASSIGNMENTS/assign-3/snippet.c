# include <stdio.h>

int main() {
    int m, n;
    for (m = 10; m > 0; --m){
        for (n = m; n > 1; --n)
            printf("%d ", m + n);
        printf("\n");
        }
}