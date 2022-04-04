#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 3, 5, 7, 8, 10};
    int sum = 0 ;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"the sum of all the elements in this array is "<<sum<<endl;
    return 0;
}