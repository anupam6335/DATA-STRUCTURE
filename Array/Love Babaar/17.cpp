// merge two sorted array without using extra space 
// leetcode - https://leetcode.com/problems/merge-sorted-array/ not this question
#include<bits/stdc++.h>
using namespace std;

// TLE
void techdose(int arr1[], int arr2[], int n, int m) 
{ 
    int temp=n; n=m; m=temp;
	for (int i=n-1; i>=0; i--) 
	{ 
		int j, last = arr1[m-1]; 
		for (j=m-2; j >= 0 && arr1[j] > arr2[i]; j--) 
			arr1[j+1] = arr1[j]; 

		if (j != m-2 || last > arr2[i]) 
		{ 
			arr1[j+1] = arr2[i]; 
			arr2[i] = last; 
		} 
	} 
} 



// TLE 
void myrule(int arr1[], int arr2[], int n, int m){
    int i=0;
    for(;i<n;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            sort(arr2,arr2+m);
        }
    }
}
int nextGap(int gap){
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}
// without using extra space and using gap method
void merge(int arr1[], int arr2[], int n, int m) {
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)){
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;i < n && j < m; i++, j++)
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
// using extra space
/* void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
        int copy[n+m];int k=0;
        for(int i=0; i<n; i++) copy[k++] = arr1[i];
        for(int i=0; i<m; i++) copy[k++] = arr2[i];
        int l=m+n;
        sort(copy,copy+l); 
        for(int i=0; i<n; i++) arr1[i] = copy[i];
        int a2=0;
        for(int i=n; i<l; i++) arr2[a2++] = copy[i];
} */
int main(void){
    int n,m; cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    merge(arr1,arr2,n,m);
    for(int i=0;i<n;i++)cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++)cout<<arr2[i]<<" ";
    cout<<endl;
    return (0);
}

