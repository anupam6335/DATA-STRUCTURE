// Q: Merge Without Extra Space
#include<bits/stdc++.h>
using namespace std;

// brute force 
void help(int arr[], int n, int num[], int m,int* ans){

    int i = 0, j = 0, k = 0;

    while(i<n && j<m){
        
        if(arr[i] < num[j]) {ans[k] = arr[i]; i++;}
        else if(arr[i] > num[j]) {ans[k] = num[j]; j++;}
        else {ans[k] = arr[i]; i++,j++;}
        k++;
    }

    for( ;i < n; i++) {ans[k] = arr[i]; k++;}
    for(; j < m; j++) {ans[k] = num[j]; k++;}
}



// optimized
// gfg https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
void help2(long long arr1[], long long arr2[], int m, int n) {
    int x = m - 1, y = 0;

    while (x >= 0 && y < n) {

        if (arr1[x] >= arr2[y]) {

            swap(arr1[x], arr2[y]);
            x--;
            y++;
        }
        else x--;
    }
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
}


// gap method
int nextGap(int gap){
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
void merge(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}



int main(void){
    cout<<"Merge two sorted array\n";
    int n,m; cin >>n>>m;
    int arr[n],num[m], ans[m+n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<m; i++) cin>>num[i];
    help(arr, n, num, m,ans);
    for(int i=0; i<m+n; i++) cout<<ans[i]<<"  ";
    return 0;
}