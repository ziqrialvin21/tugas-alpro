#include <stdio.h>

int sequentialSearch(int A[], int n, int x) {
    printf("Langkah-langkah Sequential Search:\n");

    for (int i = 0; i < n; i++) {
        printf("Langkah %d: Bandingkan x = %d dengan A[%d] = %d\n",
               i + 1, x, i, A[i]);

        if (A[i] == x) {
            printf("\n--> Data ditemukan pada langkah %d, indeks %d\n", i + 1, i);
            return i;
        }
    }

    printf("\n--> Data tidak ditemukan\n");
    return -1;
}

int main() {
    int A[] = {10, 50, 30, 70, 80, 20};
    int x = 30;
    int n = sizeof(A) / sizeof(A[0]);

    sequentialSearch(A, n, x);

    return 0;
}
