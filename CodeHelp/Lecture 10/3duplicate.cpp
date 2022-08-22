// Q: Duplicate In Array
#include<bits/stdc++.h>
using namespace std;

// Floyd’s cycle finding algorithm not used but see later please
int help(int n,int *arr){
    int ans = 0;
    for(int i=0;i<n;i++) ans = ans ^arr[i];

    for(int i=0;i<n;i++) ans = ans ^ i;
    return ans;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<" "<<endl;
    cout<< help(n,arr);
    return 0;
}