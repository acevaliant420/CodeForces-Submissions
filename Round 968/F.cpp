#include <bits/stdc++.h>
using namespace std;



int main()
{
	int x, y, k;
	cin>>x>>y>>k;
	if(abs(x-y)<=k){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}	
	return 0;
}