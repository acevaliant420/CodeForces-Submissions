#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(m<=n){
            if((m+n)%2==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }else{
            cout<<"No"<<endl;
        }
    }
}