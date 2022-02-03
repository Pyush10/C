#include <stdio.h>
#include <stdlib.h>
int main() {
    system("cls");
    long i, n, t1 = 0, t2 = 1;
    long nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%ld", &n);
    printf("Fibonacci Series: %ld, %ld, ", t1, t2);

    for (i = 1; i <= n; ++i) {
        printf("%ld, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}