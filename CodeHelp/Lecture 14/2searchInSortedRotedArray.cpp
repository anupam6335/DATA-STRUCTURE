// Q:
#include<bits/stdc++.h>
using namespace std;


int pivot(int *arr, int start, int end){
    int pivot = -1;
    while(start < end) {
        int mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else end = mid;
    }
     pivot = start;
     return pivot;
}

int  binarySearch(int *arr,int start,int end,int key){
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}
int searchElement(int *arr, int start,int end, int target){
    int p = pivot(arr,start,end);
    if(arr[p] <= target and target>=arr[end]){
       return binarySearch(arr,p,end,target);
    }else return binarySearch(arr,start,p,target);
    
}


int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    int p = pivot(arr,0,n-1);
   
    cout<<searchElement(arr,0,n-1,2)+1;
    return 0;
}