#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        string a;
        cin>>a;
        unordered_map<char, int> mp;
        for(int i=0; i<7; i++){
            mp[char('A'+i)] = 0; 
        }
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        int ans = 0;
        for(auto x: mp)
        {
            if(x.second<m)
            {
                ans += m - x.second;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}