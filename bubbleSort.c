// #include <stdio.h>

int main() {
    int arr[] = {14, 37, 25, 2, 56, 13, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    // Apresentar o array desordenado
        printf("Array desordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
	        printf("\n");

    // Looping externo e interno
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Trocar os elementos
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Apresentar o array ordenado
    printf("Array ordenado: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
