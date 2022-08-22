// Q: print sum of the given array
#include<bits/stdc++.h>
using namespace std;


int help(int n,int *arr){
    int i = 0;
    int sum = 0;
    while(i < n){
        sum += arr[i];
        i++;
    }
    return sum;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<< help(n,arr);
    return 0;
}