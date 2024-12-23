#include <bits/stdc++.h>
// Khởi tạo và gán giá trị cho mảng bất kỳ, yêu cầu người dùng nhập vào phần tử bất kỳ và kiểm tra xem phần tử có tồn tại trong mảng không, in ra vị trí của phần tử đó.
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int check = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            printf("Phan tu %d ton tai trong mang tai vi tri %d\n", x, i);
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
}