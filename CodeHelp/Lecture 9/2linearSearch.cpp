#include <iostream>
using namespace std;

bool lS(int n,int k, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i] == k)
            return true;
    }
    return false;;
}

int main() {
    int n,k; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>k;
    cout<<lS(n,k,arr);
}