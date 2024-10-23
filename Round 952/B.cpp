#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    ll int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ans_sum = INT16_MIN;
        int ans;
        for(int i=2; i<=n; i++){
            int sum=0;
            for(int j=i; j<=n; j+=i){
                sum+=j;
            }
            if(sum>ans_sum){
                ans_sum = sum;
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}