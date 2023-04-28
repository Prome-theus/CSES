#include <bits/stdc++.h>
using namespace std;
 
int main() {
	vector<int> v;
	long long int n,x,count=0;
	cin>>n;
	while(cin>>x){
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		if(v[i]<v[i-1]){
			count+=(v[i-1]-v[i]);
			v[i]=v[i-1];
		}
	}
	cout<<count;
} 