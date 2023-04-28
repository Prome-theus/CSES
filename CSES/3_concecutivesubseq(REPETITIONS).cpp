#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<char> v;
	char ch;
	int freq=1;
	int maxfreq=1;
	while(cin>>ch){
		v.push_back(ch);
	}
	for(int i=0;i<v.size();i++){
		if(v[i]==v[i+1]){
			freq++;
			if(freq>maxfreq){
				maxfreq=freq;
			}
		}
		else{
			freq=1;
		}
	}
	cout<<maxfreq;
}
