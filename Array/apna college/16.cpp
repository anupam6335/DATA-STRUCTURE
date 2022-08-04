//Chocolate Distribution Problem
// hint - https://youtu.be/h6_lIwZYHQw
// unsolved
#include<bits/stdc++.h>
using namespace std;


void Distribution(int *choco,int n){
    int arrl[n]={1,1,1,1,1,1,1,1};
    for(int i=0; i<n; i++){
        if(choco[i]<choco[i+1]){
            arrl[i+1]=arrl[i]+1;
        }
    }
    int arrr[n]={1,1,1,1,1,1,1,1};
    for(int i =n-1; i>=0; i--){
        if(choco[i]<choco[i-1]){
            if(i == 0){
                arrr[0]=arrr[i+1]+1;
            }
            else
                arrr[i]=arrr[i-1]+1;
        }
    }
    for(int i = 0;i<n;i++) cout<<arrr[i]<<" ";

}

int main(){
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Distribution(arr,n);
}
