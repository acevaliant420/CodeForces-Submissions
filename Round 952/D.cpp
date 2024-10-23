#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll int n, m;
        cin>>n>>m;
        ll int x=INT64_MAX;
        ll int x_cord = 0;
        ll int y=INT64_MAX;
        ll int y_cord = 0;
        for(ll int i=0; i<n; i++){
            for(ll int j=0; j<m; j++){
                char temp;
                cin>>temp;
                if(temp=='#'){
                    if(i<y){
                        y=i;
                        y_cord=j+1;
                    }
                    if(j<x){
                        x=j;
                        x_cord = i+1;
                    }
                }
            }
        }
        cout<<x_cord<<" "<<y_cord<<endl;

    }
    
    return 0;
}