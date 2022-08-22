// Q:
#include<bits/stdc++.h>
using namespace std;


 int bitwiseComplement(int n) {
        
        if(n == 0) return 1;
        else{
            int x = n; 
            int mask = 0;
            int ans; 
            while(x != 0){
                mask = (mask << 1)  | 1;
                x = x >> 1;
            }
            ans = (~n) & mask;
            return ans;
        }
    }
int main(void){
    int n; cin >>n;
    cout<<""<<endl;
    cout << bitwiseComplement(n);
    return 0;
}