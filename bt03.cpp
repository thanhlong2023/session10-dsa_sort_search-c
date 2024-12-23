#include <bits/stdc++.h>
// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp chèn (insertion sort) để sắp xếp lại mảng theo thứ tự tăng dần.
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 1; i < 5; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}