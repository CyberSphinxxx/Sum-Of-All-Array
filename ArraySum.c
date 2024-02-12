#include <stdio.h>

int arrayCalculator(int array[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int array[n];
    printf("\nEnter elements of the array:\n");
    
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
        }

    int sum = arrayCalculator(array, n);
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
