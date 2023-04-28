#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cin>>n;
	int x,y;
	while(cin>>x){
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<=n;++i){
		// cout<<i+1<<" "<<v[i]<<endl;
		if((i+1)!=v[i]){
		 	cout<<i+1;
			break;
		}
	}
}

