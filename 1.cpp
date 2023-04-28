#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int sum = (n*(n+1))/2;
	if (sum%2==0 ){
		cout<<"YES"<<endl;
		set<long long> s1,s2;
		long long target = sum/2;
		int t = n;
		for(int i = 1 ;i<=n;i++){
			s1.insert(i);
		}
		while(s1.count(target)==0){
			s2.insert(t);
			s1.erase(t);
			t--;
		}
		s1.erase(target);
		s2.insert(target);
		cout<<s1.size()<<"poop"<<endl;
		for(auto z:s1){
			cout <<z << " ";
		}
		cout <<s2.size()<<endl;
		for(auto z:s2){
			cout <<z <<" ";
		}
	} 
	else{
		cout<<"NO";
	}
	return 0;
}
