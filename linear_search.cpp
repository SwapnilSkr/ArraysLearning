#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return 1;
    }
    return 0;
}
int main()
{
    int shuor[10] = {23, 45, 67, 11, 33, 1, 39, 59, 2, 7};
    int key;
    cout << "Enter the number you want to search in this array" << endl;
    cin >> key;
    bool found = search(shuor, 10, key);
    if (found == 1)
        cout << "this number is present in this array" << endl;
    else
        cout << "this number is not present in this array" << endl;
    return 0;
}