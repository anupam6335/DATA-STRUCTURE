// Q:
#include<bits/stdc++.h>
using namespace std;


bool help(int n,int *arr){
     int i = 0;
    int j=0;

        sort(arr,arr+n); 

        int ans[n] ;
        for(int i=0; i<n; i++){
            ans[i] = 1001;
        }        

        int count = 1;

        while (i < n){
            if (i+1 < n and 
                arr[i] == arr[i+1])

                count++;
            else{
                ans[j] = count;
                j++;
                count = 1;
            }

            i++;
        }

        sort(ans,ans + n);


        for (int i = 0; i < n and ans[i] <= 1000; i++){
            if (ans[i] == ans [i+1])
                return false;
        }
        return true;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    cout<< help(n,arr);
    return 0;
}