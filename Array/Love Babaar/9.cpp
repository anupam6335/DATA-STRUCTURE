//Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;
vector<int> zotSort(int *arr,int n){
    vector<int>v;
    int z,o,t=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)z++;
        else if(arr[i]==1)o++;
        else if(arr[i]==2)t++;
    }
    
    for(int i=0;i<z;i++){ v.push_back(0);}
    for(int i=z;i<z+o;i++){ v.push_back(1);}
    for(int i=z+o;i<n;i++){ v.push_back(2);}
    return v;
}
void sort012(int a[], int n){
    // coode here 
    vector<int>v;
    int z,o,t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)z++;
        else if(a[i]==1)o++;
        else if(a[i]==2)t++;
    }
    
    for(int i=0;i<z;i++){ a[i]=0;}
    for(int i=z;i<z+o;i++){ a[i]=1;}
    for(int i=z+o;i<z+o+t;i++){ a[i]=2;}
    cout<<z<<" "<<o<<" "<<t<<endl;
} 
/* void sort012(int a[], int n)
    {
        // coode here 
        int x=0,y=0,z=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                x+=1;
            }
            else if(a[i]==1){
                y+=1;
            }
            else{
                z+=1;
            }
        }
        
        for(int i=0;i<x;i++){
            a[i]=0;
        }
        for(int i=x;i<x+y;i++){
            a[i]=1;
        }
        for(int i=x+y;i<x+y+z;i++){
            a[i]=2;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    } */
int main(void){
    int n;cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++) cin>>arr[i];
    /* vector<int>v = zotSort(arr,n);
    for(auto i: v)cout<<i<<" ";
    cout<<endl; */
    sort012(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return(0);
}





 