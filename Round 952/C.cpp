#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    ll int t;
    cin>>t;
    while (t--){
        ll int n;
        cin>>n;
        ll int a[n];
        for(ll int i=0; i<n; i++){
            cin>>a[i];
        }
        ll int sum = 0;
        unordered_map<ll int, ll int> mp;
        for(ll int i=0; i<n; i++){
            sum+=a[i];
            mp[i] = sum;
        }
        ll int ans=0;
        ll int max = INT16_MIN;
        for(ll int i=0; i<n; i++){
            if(max<a[i]){
                max = a[i];
            }
            if(mp[i]-max==max){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}