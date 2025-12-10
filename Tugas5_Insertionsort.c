#include <stdio.h>

void insertionSortPass3(int A[], int n) {
    printf("Proses Insertion Sort hingga Pass ke-3:\n");

    for (int i = 1; i <= 3; i++) {   // Pass 1 sampai Pass 3
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;

        // Cetak hasil setiap pass
        printf("Setelah Pass %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", A[k]);
        }
        printf("\n");
    }
}

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]);

    insertionSortPass3(A, n);

    return 0;
}
