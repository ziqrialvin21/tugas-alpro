#include <stdio.h>

void buble_sort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data)/sizeof(data[0]);
    buble_sort(data, n);
    printf("hasil bubble sort: ");
    for(int i=0; 1<n; i++) printf("%d", data[i]);
    return 0;
}