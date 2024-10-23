#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll int cords[3];
        for(int i=0; i<3; i++){
            cin>>cords[i];
        }
        ll int k;
        cin>>k;
        ll int dim[3];
        for(int i=2; i<k/2; i++){
            if(k%i==0){
                dim[0] = i;
                break;
            }
        }
        k = k/dim[0];
        for(int i=2; i<k/2; i++){
            if(k%i==0){
                dim[1] = i;
                break;
            }
        }
        dim[2] = k/dim[1];
        ll int ans = 0;
        for(int i=0; i<3; i++){
            ll int temp = 1;
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(j!=k && k!=i && j!=i){
                        temp *= (cords[i]-dim[0]+1)*(cords[j]-dim[1]+1)*(cords[k]-dim[2]+1);
                    }
                    if(temp>ans){
                        ans = temp;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}