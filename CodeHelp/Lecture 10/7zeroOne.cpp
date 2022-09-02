// Q:
#include<bits/stdc++.h>
using namespace std;
void help(int n,int *arr){
    int i=0;
    int j= n-1;

    while(i<j){
        if(arr[i]==1 and arr[j]==1) j--;
        else if(arr[i]==0 and arr[j]==0) i++;
        else if(arr[i]==0 and arr[j]==1) {i++;j--;}
        else if(arr[i]==1 and arr[j]== 0){ swap(arr[i], arr[j]) ;i++;j--;}
        else{
            swap(arr[i], arr[j]); i++;j--;
        }
    }
}
/* void help(int n,int *arr){
    int z = 0;
    int o = 0;

    for(int i = 0; i < n; i++){
        if(arr[i]==0)z++;
        else o++;
    }

    for(int i = 0; i < z; i++){ 
        arr[i] = 0;
    }
    for(int i = z; i <z+o; i++){ 
        arr[i] = 1;
    }
} */
/* // using sorting
void help(int n,int *arr){
    sort(arr,arr+n);
} */

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    help(n,arr);
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    return 0;
}

