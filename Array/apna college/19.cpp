// best time to buy and sells stocks
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b) { return a < b ? a : b; }
int mxprofit(vector<int>&prices){
    int lastInc = -1;
    int i=1;
    int n=prices.size();
    int minSoFar=prices[0]; int mx=0;
    // decreaseing sorted array check
    while (i < n)
    { 
        if (prices[i] > prices[i - 1])
            lastInc = i;
        i += 1;
    }
    if(lastInc == -1)return 0;
    
    else {
        for(int i=0; i<n;i++){
            minSoFar =min(prices[i],minSoFar);
            mx=max(mx,prices[i]-minSoFar);
        cout<<minSoFar<<" "<<mx<<" "<<endl;
        }
    }
    return mx;
}

int bruteForce(vector<int>& prices ){
    int mx = 0;
    for( int i = 0; i < prices.size();i++ ){
        for( int j = i+1; j < prices.size();j++ ){
            if(prices[i]<prices[j]){
                mx=max(mx,prices[j]-prices[i]);
            }
        } 
    }
    return mx;
}
int main(void) {
    int n; cin>>n;
    vector<int> prices;
    for( int i = 0; i < n; i++ ){
        int val; cin>>val; prices.push_back(val);
    }
    cout<<mxprofit(prices);
    return(0);
}