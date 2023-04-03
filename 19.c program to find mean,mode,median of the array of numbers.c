#include <stdio.h>
int main() {
    int arr[] = {16,18,27,16,23,21,19}; 
    int i,j,sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    float mean = (float) sum / n;
    printf("Mean: %f\n", mean);
       int temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float median;
    if (n % 2 == 0) {
        median = (float) (arr[(n / 2) - 1] + arr[n / 2]) / 2;
    } else {
        median = arr[n / 2];
    }
    printf("Median: %f\n", median);
    int mode = arr[0];
    int max_count = 1;
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }
    printf("Mode: %d\n", mode);
    return 0;
}
