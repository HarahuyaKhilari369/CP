#include<bits/stdc++.h>
using namespace std;


int arr[]={3,4,65};
int vis[100001];
int mod=100000;
int size=sizeof(arr)/sizeof(arr[0]);

int getMinStepsBfs(int s,int e){
	queue<pair<int,int>> q;
	q.push({s,0});
	vis[s]=1;

	int fl=-1;

	while(!q.empty()){
		auto it=q.front();

		int cur=it.first;
		int steps=it.second;

		q.pop();

		if(cur==e){
			fl=steps;
			break;
		}
		for(int i=0;i<size ;i++){
			int val=(cur*arr[i])%mod;
			if(!vis[val]){
				q.push({val,steps+1});
				vis[val]=1;
			}
		}
	}
	return fl;
}
int main(){

	#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r",stdin);
	//for writing the output
	freopen("output.txt","w",stdout);
	#endif
	int start,end;

	cin>>start>>end;

	cout<<"answer"<<getMinStepsBfs(start,end);
}