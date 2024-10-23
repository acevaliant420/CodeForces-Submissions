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

bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }

	return i==n;
}

void solve(){
	string s;
	cin>>s;
	string t;
	cin>>t;
	int count = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='?'){
			count++;
		}
	}
	if(count>=t.size()){
		for(int i=0; i<s.size(); i++){
			if(s[i]=='?'){
				if(t.size()>0){
					s[i] = t[0];
					t.erase(t.begin());
				}
				else{
					s[i] = 'a';
				}
			}
		}
		cout<<"YES"<<endl;
		cout<<s<<endl;
	}
	else{
		int n = s.size(), m = t.size();
    	int i = 0, j = 0;
		string subi;
		while (i < n && j < m) {
			if(s[i]=='?'){
				subi += t[j];
				j++;
			}
			if (s[i] == t[j]){
				j++;
			}
			i++;
		}
		
		if(j>=m){
			for(int k=0; k<s.size(); k++){
				if(s[k]=='?'){
					if(subi.size()>0){
						s[k] = subi[0];
						subi.erase(subi.begin());
					}
					else{
						s[k] = 'a';
					}
				}

			}
			cout<<"YES"<<endl;
			cout<<s<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
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