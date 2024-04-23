#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	sort(s.begin(), s.end());
	 int n = (s.size())/2;
	int t = 0;
	for(int i = 0; i <= n; i++){
		swap(s[i*2],s[n+t]);
		t++;
	}
	cout<<s<<endl;

	return 0;
}
