#include <bits/stdc++.h>
// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm tuyến tính để tìm vị trí của phần tử đó trong mảng. Nếu có nhiều phần tử trùng với số đã nhập thì lưu tất cả vị trí tìm được vào một mảng và in tất cả vị trí đó ra màn hình.
int main()
{
    int arr[5] = {1, 1, 3, 4, 1};
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int check = 0;
    int index[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            printf("Phan tu %d ton tai trong mang tai vi tri %d\n", x, i);
            index[count] = i;
            count++;
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    else
    {
        printf("Phan tu %d ton tai trong mang tai cac vi tri: ", x);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", index[i]);
        }
    }
    return 0;
}