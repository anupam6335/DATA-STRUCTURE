// Q:
#include<bits/stdc++.h>
using namespace std;


void pivot(int *arr, int start, int end, int& pivot){

    while(start < end) {
        int mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else end = mid;
    }
     pivot = start+1;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    int p = 0;
    pivot(arr,0,n-1,p);
    cout<<p<<endl;
    return 0;
}