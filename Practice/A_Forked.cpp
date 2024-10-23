#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>


#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back


template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }


#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


void solve(){
    ll int a, b;
    cin>>a>>b;
    ll int xk, yk;
    cin>>xk>>yk;
    ll int xq, yq;
    cin>>xq>>yq;
    ll int arr[8][2];
    arr[0][0] = xk + a;
    arr[0][1] = yk + b;
    arr[1][0] = xk + a;
    arr[1][1] = yk - b;
    arr[2][0] = xk - a;
    arr[2][1] = yk + b;
    arr[3][0] = xk - a;
    arr[3][1] = yk - b;
    arr[4][0] = xk + b;
    arr[4][1] = yk + a;
    arr[5][0] = xk + b;
    arr[5][1] = yk - a;
    arr[6][0] = xk - b;
    arr[6][1] = yk + a;
    arr[7][0] = xk - b;
    arr[7][1] = yk - a;

    ll int ans[64][2];
    for(int i=0; i<64; i++){
        ans[i][0] = INT16_MIN;
        ans[i][1] = INT16_MIN;
    }
    int n = 0;
    for(int i=0; i<8; i++){
        ll int mp[8][2];
        mp[0][0] = arr[i][0] + a;
        mp[0][1] = arr[i][1] + b;
        mp[1][0] = arr[i][0] + a;
        mp[1][1] = arr[i][1] - b;
        mp[2][0] = arr[i][0] - a;
        mp[2][1] = arr[i][1] + b;
        mp[3][0] = arr[i][0] - a;
        mp[3][1] = arr[i][1] - b;
        mp[4][0] = arr[i][0] + b;
        mp[4][1] = arr[i][1] + a;
        mp[5][0] = arr[i][0] + b;
        mp[5][1] = arr[i][1] - a;
        mp[6][0] = arr[i][0] - b;
        mp[6][1] = arr[i][1] + a;
        mp[7][0] = arr[i][0] - b;
        mp[7][1] = arr[i][1] - a;

        for(int j=0; j<8; j++){
            if(mp[j][0] == xq && mp[j][1] == yq){
                for(int k=0; k<64; k++){
                    if(ans[k][0] == arr[i][0] && ans[k][1] == arr[i][1]){
                        break;
                    }
                    if(ans[k][0] == INT16_MIN && ans[k][1] == INT16_MIN){
                        ans[k][0] = arr[i][0];
                        ans[k][1] = arr[i][1];
                        n++;
                        break;
                    }
                }
            }
        }
    }
    cout<<n<<endl;
}


int main()
{

	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}
	return 0;
}