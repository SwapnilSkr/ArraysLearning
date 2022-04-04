#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end) // basically we just have to swap the first and the last digits repeatedly.//
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printarrary(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {1, 4, 8, 9, 0, 7, 13};
    int brr[6] = {3, 4, 8, 9, 11, 23};

    reverse(arr, 7);
    reverse(brr, 6);

    printarrary(arr, 7);
    printarrary(brr, 6);

    return 0;
}