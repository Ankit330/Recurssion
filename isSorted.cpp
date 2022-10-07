#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    else if (arr[0] > arr[1])
        return false;
    return isSorted(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5 , 1};
    int size = sizeof(arr) / sizeof(arr[0]); // size nikal sakte haa.

    int ans = isSorted(arr, size);

    if (ans)
        cout << "Array is sorted";
    else
        cout << " Array is not sorted";

}