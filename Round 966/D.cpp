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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	string s;
	cin>>s;
	long long int score = 0;
	bool check = true;
	int left_right[n];
	for(int i=0; i<n; i++){
		if(s[i]=='L'){
			left_right[i] = 0;
		}
		else{
			left_right[i] = 1;
		}
	}
	int index_l = -1;
	int index_r = -1;
	for(int i=0; i<n; i++){
		if(s[i]=='L'){
			index_l = i;
			break;
		}
	}
	for(int i=n-1; i>=0; i--){
		if(s[i]=='R'){
			index_r = i;
			break;
		}
	}
	if(index_l==-1 || index_r==-1){
		cout<<score<<endl;
		return;
	}
	if(index_l>index_r){
		cout<<score<<endl;
		return;
	}
	for(int i=index_l; i<=index_r; i++){
		score += a[i];
	}
	vector<int> v_l;
	vector<int> v_r;
	int l = 0;
	int r = 0;
	for(int i=index_l+1; i<index_r; i++){
		if(s[i]=='L'){
			l++;
			v_l.push_back(i);
		}
		else{
			r++;
			v_r.push_back(i);
		}
	}
	if(v_l.size()==0 || v_r.size()==0){
		cout<<score<<endl;
		return;
	}
	sort(v_l.begin(), v_l.end());
	sort(v_r.begin(), v_r.end());	
	ll int sum[n];
	sum[0] = a[0];
	for(int i=1; i<n; i++){
		sum[i] = sum[i-1]+a[i];
	}
	sort(v_l.begin(), v_l.end());
	sort(v_r.begin(), v_r.end());	
	for(int i=0; i<v_l.size(); i++){
		if(v_r.size()==0){
			break;
		}
		if(v_l[i]>v_r[v_r.size()-1]){
			break;
		}
		int r = v_r[v_r.size()-1];
		score += sum[r]-sum[v_l[i]-1];
		v_r.pop_back();
	}
	
	cout<<score<<endl;
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