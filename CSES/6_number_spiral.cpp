#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int diagonal,row,col;
	cin>>n;
	for(int i=0;i<n;i++){
		pair<int,int> p1;
		cin>>p1.first>>p1.second;
		row=p1.first;
		col=p1.second;
		if(row >= col){
			if ((row&1)==0) cout<<row*row-col+1<<endl;
			else cout << (row-1)*(row-1) + col<<endl;
		}
		else{
			if ((col&1)==1) cout<<col*col-row+1 << endl;
			else cout<<(col-1)*(col-1)+row<<endl;
		}
	}
	return 0;
}
