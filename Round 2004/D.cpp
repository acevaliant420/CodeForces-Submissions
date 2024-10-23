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

void solve(){
	int n, q;
	cin>>n>>q;
	int s[n][2];
	for(int i=0; i<n; i++){
		string temp;
		cin>>temp;
		if(temp[0]=='B'){
			s[i][0] = 1;
		}
		else if(temp[0]=='G'){
			s[i][0] = 2;
		}
		else if(temp[0]=='R'){
			s[i][0] = 3;
		}
		else if(temp[0]=='Y'){
			s[i][0] = 4;
		}
		if(temp[1]=='B'){
			s[i][1] = 1;
		}
		else if(temp[1]=='G'){
			s[i][1] = 2;
		}
		else if(temp[1]=='R'){
			s[i][1] = 3;
		}
		else if(temp[1]=='Y'){
			s[i][1] = 4;
	}
	int j[q][2];
	for(int i=0; i<q; i++){
		cin>>j[i][0]>>j[i][1];
	}
	unordered_map<int, int> blue;
	unordered_map<int, int> green;
	unordered_map<int, int> red;
	unordered_map<int, int> yellow;
	for(int i=0; i<n; i++){
		if(s[i][0]==1){
			blue[i+1] = s[i][1];
		}
		else if(s[i][0]==2){
			green[i+1] = s[i][1];
		}
		else if(s[i][0]==3){
			red[i+1] = s[i][1];
		}
		else if(s[i][0]==4){
			yellow[i+1] = s[i][1];
		}
		if(s[i][1]==1){
			blue[i+1] = s[i][0];
		}
		else if(s[i][1]==2){
			green[i+1] = s[i][0];
		}
		else if(s[i][1]==3){
			red[i+1] = s[i][0];
		}
		else if(s[i][1]==4){
			yellow[i+1] = s[i][0];
		}
	}
	int index = 0;
	for(int i=0; i<q; i++){
		int start = j[i][0];
		int end = j[i][1];
		if(start==end){
			cout<<"YES"<<endl;
			continue;
		}
		ll int ans = INT_MAX;
		bool check = false;
		int start1 = s[start-1][0];
		int start2 = s[start-1][1];
		int end1 = s[end-1][0];
		int end2 = s[end-1][1];
		
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