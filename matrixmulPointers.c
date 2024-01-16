// wap to find matrix multiplication using pointers something like below:

/*
 Enter the dimensions of the first matrix (rows and columns): 3 3
Enter the dimensions of the second matrix (rows and columns): 3 3


Enter elements of the first matrix:
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3
Enter element at position (2, 1): 4
Enter element at position (2, 2): 5
Enter element at position (2, 3): 6
Enter element at position (3, 1): 7
Enter element at position (3, 2): 8
Enter element at position (3, 3): 9



Enter elements of the second matrix:
Enter element at position (1, 1): 1
Enter element at position (1, 2): 0
Enter element at position (1, 3): 0
Enter element at position (2, 1): 0
Enter element at position (2, 2): 1
Enter element at position (2, 3): 0
Enter element at position (3, 1): 0
Enter element at position (3, 2): 0
Enter element at position (3, 3): 1


Resultant matrix after multiplication:
1       2       3
4       5       6
7       8       9



*/

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function declarations
void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);
void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2);
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);

// Main function
int main()
{
    // Variable declarations
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    // Input dimensions of matrices
    printf("Enter the dimensions of the first matrix (rows and columns): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the dimensions of the second matrix (rows and columns): ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be multiplied
    if (cols1 != rows2)
    {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1; // Exit with an error code
    }

    // Input matrices
    printf("Enter elements of the first matrix:\n");
    inputMatrix(mat1, rows1, cols1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(mat2, rows2, cols2);

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Display the result matrix
    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}

// Function to input elements of a matrix
void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2)
{
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            *(*(result + i) + j) = 0;

            for (int k = 0; k < cols1; ++k)
            {
                *(*(result + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
