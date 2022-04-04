#include <bits/stdc++.h>
using namespace std;
int MaxArray(int arr[], int n)
{
    int min;
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}
int main()
{
    int brr[7] = {25, 5, 6, 7, 11, 34, 56};
    int m;
    m = MaxArray(brr, 7);
    cout << "the minimum number in this array is " << m << endl;
    return 0;
}