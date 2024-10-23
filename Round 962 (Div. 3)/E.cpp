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
	int n, q;
	cin>>n>>q;
	string a, b;
	cin>>a>>b;
	int arr[q][2];
	for(int i=0;i<q;i++){
		cin>>arr[i][0]>>arr[i][1];
	}
	bool check = true;
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]){
			check = false;
			break;
		}
	}
	if(check){
		while(q--){
			cout<<0<<endl;
		}
		return;
	}
	for(int i=0; i<q; i++){
		int ans = 0;
		int alpa[26];
		for(int j=0; j<26; j++){
			alpa[j] = 0;
		}
		for(int j=arr[i][0]-1; j<arr[i][1]; j++){
			int temp = a[j] - 'a';
			alpa[temp]++;
		}
		for(int j=arr[i][0]-1; j<arr[i][1]; j++){
			int temp = b[j] - 'a';
			if(alpa[temp]==0){
				ans++;
			}
			else{
				alpa[temp]--;
			}
		}
		
		cout<<ans<<endl;
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