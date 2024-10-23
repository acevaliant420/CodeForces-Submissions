#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    ll int t;
    cin>>t;
    while (t--){
       string a, b;
       cin>>a>>b;
       cout<<b[0];
       for(int i=1; i<3; i++){
        cout<<a[i];
       }
       cout<<" "<<a[0];
       for(int i=1; i<3; i++){
        cout<<b[i];
       }
       cout<<endl;
    }
    
    return 0;
}