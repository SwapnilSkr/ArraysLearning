#include <bits/stdc++.h>
using namespace std;
int MaxArray(int arr[], int n)
{
    int max;
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
int main()
{
    int brr[7] = {25, 5, 6, 7, 11, 34, 56};
    int m;
    m = MaxArray(brr, 7);
    cout << "the maximum number in this array is " << m << endl;
    return 0;
}