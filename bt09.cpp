#include <bits/stdc++.h>
// Nhập số dòng và số cột mảng 2 chiều (row,col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo. Tiến hành sắp xếp các phần tử trên đường chéo chính theo thứ tự tăng dần.
int main()
{
    int row, col;
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        printf("Nhap dong %d: ", i);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col - i - 1; j++)
        {
            if (arr[j][j] > arr[j + 1][j + 1])
            {
                int temp = arr[j][j];
                arr[j][j] = arr[j + 1][j + 1];
                arr[j + 1][j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}