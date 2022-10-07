#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int k)
{
    if (n == 0)
        return false;

    if (arr[n-1] == k)
        return true;

    else
        return linearSearch(arr, n - 1, k);
    ;
}

int main()
{
    int arr[] = {2, 4, 5, 3, 5, 6};
    int n = 6;
    int k = 8;

    int ans = linearSearch(arr, n, k);
    if (ans)
        cout << "Key is Present";
    else
        cout << " Key is not Present";
}