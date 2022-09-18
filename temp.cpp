// Q:
#include<bits/stdc++.h>
using namespace std;

    int *help(int *arr, int n) {
        sort(arr,arr+n);
        int *ans = new int [2];
        for(int i=0; i<n; i++) {
            if(arr[i] == arr[i+1] and i<n) {ans[0] = arr[i]; cout<<i<<" ";}
            else if(arr[i+1]-arr[i] != 1 and i<n and arr[i] != arr[i+1]) {ans[1] = i;cout<<i<<" ";}
        }
        cout<<endl<<endl;
        return ans;
    }
    

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    int* temp = help(arr,n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<endl;
    cout<<temp[0] << temp[1]<<endl;
    return 0;
}


