// count inversions https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// not solved
#include <bits/stdc++.h>
using namespace std;
long long merge(long long int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}
long long mergeSort(long long int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}
long long int inversionCount(long long arr[], long long N)
{
    return mergeSort(arr,0,N-1);
}
int countinversion(int *arr, int n)
{
    long long int i = 1;
    int lastInc = -1;
    while (i < n)
    { // Find the peak of last ASC order
        if (arr[i] > arr[i - 1])
            lastInc = i;
        i += 1;
    }
    if (lastInc == -1)
        return n;
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                    cnt++;
            }
        }
        return cnt;
    }
}
int main(void)
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << inversionCount(a, n) << endl;
    return (0);
}
