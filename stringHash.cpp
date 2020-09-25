#include<bits/stdc++.h>
using namespace std;
#define int long 

int computeHash(string s){
	int hash=1;
	int n=s.size();
	int p=1;
	int mod=int(1e9+7);

	for(int i=0;i<n;i++){
	hash=(hash*((s[i]-'a'+1)*p)%mod)%mod;
	p=(p*31)%mod;
	}
	return hash;
}

signed main(){
	#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r",stdin);
	//for writing the output
	freopen("output.txt","w",stdout);
	#endif


	
	/*
	cin>>n;
	for(int =0;i<n;i++) cin>>a[i];
		cout<<minMul(start,end,a,n);*/
	cout<<computeHash("abc");
	

}
