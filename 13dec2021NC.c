#include <stdio.h>
int main()
{
    //Question 01
    int a1, a2, a3, a4;
    int matrix[10][20];
    printf("enter a number for rows : ");
    scanf("%d", &a3);
    printf("enter a number for columns : ");
    scanf("%d", &a4);
    for (a1 = 0; a1 < a3; a1++)
    {
        for (a2 = 0; a2 < a4; a2++)
        {
            printf("enter element for [%d][%d]: ", a1, a2);
            scanf("%d", &matrix[a1][a2]);
        }
    }
    for (a1 = 0; a1 < a3; a1++)
    {
        for (a2 = 0; a2 < a4; a2++)
        {
            printf("%d\t", matrix[a1][a2]);
        }
        printf("\n");
    }

    //Question 02(a)
    int b1, b2, b3[100][100], b4[100][100], b5[100][100], b6, b7;
    printf("enter a number for rows: ");
    scanf("%d", &b1);
    printf("enter a number for columns: ");
    scanf("%d", &b2);
    printf("\nenter elements in matrix 1:\n");
    for (b6 = 0; b6 < b1; ++b6)
    for (b7 = 0; b7 < b2; ++b7) {
      printf("enter element a%d%d: ", b6 + 1, b7 + 1);
      scanf("%d", &b3[b6][b7]);
    }
    printf("enter elements in matrix 2:\n");
    for (b6 = 0; b6 < b1; ++b6)
    for (b7 = 0; b7 < b2; ++b7) {
      printf("enter element b%d%d: ", b6 + 1, b7 + 1);
      scanf("%d", &b4[b6][b7]);
    }
    for (b6 = 0; b6 < b1; ++b6)
    for (b7 = 0; b7 < b2; ++b7) {
      b5[b6][b7] = b3[b6][b7] + b4[b6][b7];
    }
    printf("\nsum of  the two matrices is: \n");
    for (b6 = 0; b6 < b1; ++b6)
    for (b7 = 0; b7 < b2; ++b7) {
      printf("%d  ", b5[b6][b7]);
      if (b7 == b2 - 1) {
        printf("\n\n");
      }
    }

    //Question 02(b)
    int c1, c2, c3, c4, c5[10][10], c6[10][10], c7[10][10];
    printf("enter the number of rows and columns of matrix:");  
    scanf("%d%d", & c1, & c2);  
    printf("enter elements of matrix 1:");  
    for (c3 = 0; c3 < c1; c3++)  
        for (c4 = 0; c4 < c2; c4++) scanf("%d", & c5[c3][c4]);  
    printf("enter elements of matrix 2:");  
    for (c3 = 0; c3 < c1; c3++)  
        for (c4 = 0; c4 < c2; c4++) scanf("%d", & c6[c3][c4]);  
    printf("subtracting matrix 1 - matrix 2:\n");  
    for (c3 = 0; c3 < c1; c3++)   
    {  
        for (c4 = 0; c4 < c2; c4++)   
        {  
            c7[c3][c4] = c5[c3][c4] - c6[c3][c4];  
            printf("%d\t", c7[c3][c4]);  
        }  
        printf("\n");  
    }  

    //Question 02(c)
    int d1[10][10], d2[10][10], d3, d4;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &d3, &d4);
    printf("\nenter elements:\n");
    for (int i = 0; i < d3; ++d3)
    for (int j = 0; j < d4; ++d4) 
    {
    printf("enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &d1[i][j]);
    }
    printf("\nmatrix input by user: \n");
    for (int i = 0; i < d3; ++i)
    for (int j = 0; j < d4; ++j) {
    printf("%d  ", d1[i][j]);
    if (j == d4 - 1)
    printf("\n");
    }
    for (int i = 0; i < d3; ++i)
    for (int j = 0; j < d4; ++j)
    {
    d2[j][i] = d1[i][j];
    }
    printf("\ntranspose of the matrix:\n");
    for (int i = 0; i < d4; ++i)
    for (int j = 0; j < d3; ++j) {
    printf("%d  ", d2[i][j]);
    if (j == d3 - 1)
    printf("\n");
    }
    return 0;
}