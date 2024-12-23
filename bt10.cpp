#include <bits/stdc++.h>
// Nhập số dòng và số cột mảng 2 chiều (row, col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo. Tiến hành sắp xếp các phần tử trên đường chéo phụ theo thứ tự giảm dần.
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
            if (arr[j][col - j - 1] < arr[j + 1][col - j - 2])
            {
                int temp = arr[j][col - j - 1];
                arr[j][col - j - 1] = arr[j + 1][col - j - 2];
                arr[j + 1][col - j - 2] = temp;
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