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

#define MOD 1000000007


vector<vector<ll>> getMatrixLayers(vector<vector<ll>>& matrix) {
    ll n = matrix.size();
    ll m = matrix[0].size();
    vector<vector<ll>> layers;
    
    ll layer = 0;
    while (layer * 2 < n && layer * 2 < m) {
        vector<ll> curr_layer;
        
        for (ll j = layer; j < m - layer; j++) 
            curr_layer.push_back(matrix[layer][j]);
        
        for (ll i = layer + 1; i < n - layer; i++)
            curr_layer.push_back(matrix[i][m - 1 - layer]);
        
        if (layer * 2 + 1 < n)
            for (ll j = m - 2 - layer; j >= layer; j--)
                curr_layer.push_back(matrix[n - 1 - layer][j]);
        
        if (layer * 2 + 1 < m)
            for (ll i = n - 2 - layer; i > layer; i--)
                curr_layer.push_back(matrix[i][layer]);
        
        layers.push_back(curr_layer);
        layer++;
    }
    return layers;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    
    vector<vector<ll>> matrix(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            matrix[i][j] = s[j] - '0';
    }
    
    vector<vector<ll>> layers = getMatrixLayers(matrix);
    ll int ans = 0;
    for(int i = 0; i < layers.size(); i++) {
        ll int count=0;
        int n = layers[i].size();
        if(n<4) continue;
        string l = "";
        for(int j=0; j<n; j++){
            l += to_string(layers[i][j]);
        }
        l += l;
        for(int j=0; j<n; j++){
            if(l[j]=='1' && l[j+1]=='5' && l[j+2]=='4' && l[j+3]=='3'){
                count++;
            }
        }
        ans += count;
    }
    cout<<ans<<endl;
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