#include <bits/stdc++.h>
// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp bất kỳ để sắp xếp lại mảng theo thứ tự tăng dần. Yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm nhị phân để tìm vị trí của phần tử đó trong mảng.
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);
    int left = 0;
    int right = 4;
    int check = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            printf("Phan tu %d ton tai trong mang tai vi tri %d\n", x, mid);
            check = 1;
            break;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (check == 0)
    {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    return 0;
}