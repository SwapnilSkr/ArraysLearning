#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
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
    int arr[5] = {1, 4, 8, 9, 0};
    int brr[6] = {3, 4, 8, 9, 11, 23};

    reverse(arr, 5);
    printarrary(arr, 5);

    reverse(brr, 6);
    printarrary(brr, 6);

    return 0;
}