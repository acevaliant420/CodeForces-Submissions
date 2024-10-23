#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 0;
    while (n--){
        string s;
        cin>>s;
        if(n==0){
            if(s[0]=='+' || s[2]=='+'){
                x++;
            }
            else if(s[0]=='-' || s[2]=='-'){
                x--;
            }
            continue;
        }
        else{
            if(s[0]=='+' || s[2]=='+'){
                x++;
            }
            else if(s[0]=='-' || s[2]=='-'){
                x--;
            }
        }
    }
    cout<<x<<endl;

    return 0;
}