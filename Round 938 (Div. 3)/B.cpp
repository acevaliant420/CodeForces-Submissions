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
	int n, c, d;
	cin>>n>>c>>d;
	ll int m[n*n];
	for(int i=0;i<n*n;i++){
		cin>>m[i];
	}
	ll int b[n*n];
	bool check = true;
	ll int mat[n][n];
	sort(m, m+n*n);
	mat[0][0] = m[0];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j+1<n){
				mat[i][j+1] = mat[i][j] + d;
			}
			if(i+1<n){
				mat[i+1][j] = mat[i][j] + c;
			}
		}
	}
	int k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			b[k++] = mat[i][j];
		}
	}
	sort(b, b+n*n);
	for(int i=0; i<n*n; i++){
		if(b[i]!=m[i]){
			check = false;
			break;
		}
	}
	if(check){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
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