#include<bits/stdc++.h>
using namespace std;

void maxandMIn(int *arr,int n){
    int max=0; int min=0;
    for(int i = 0; i<n;i++){
        if(arr[i]>max) max=arr[i];
        else min=arr[i];
    }
    cout<<max<<" "<<min<<endl;
}
int main(void) {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    maxandMIn(arr,n);
    return(0);
}