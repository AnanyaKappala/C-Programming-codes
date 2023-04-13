#include <stdio.h>

int main() {
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    int count  = row*col;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            arr[i][j] = count;
            count--;
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
