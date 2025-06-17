#include <stdio.h>

int main(){
    int arr[2][3][4]; // Declared a 3D array

    // Optional: Fill the array with some values (not needed for printing addresses)

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0 ; k < 4; k++){
                printf("%p ", (void*)&arr[i][j][k]); // Use %p for addresses
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
