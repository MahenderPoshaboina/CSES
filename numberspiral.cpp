#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
	cin>>n;
	for(long long i=0; i<n; i++){
		long long r,c;
		cin>>r;
		cin>>c;

		if(r== c){
			cout<< (r* (r-1)+1)<<endl;
			continue;
		}
		long long res = max(r,c)* (max(r,c)-1)+1;
		if(r> c){
			if(r%2){
				res -= (r-c);
				cout<< res<<endl;
				continue;
			}
			res += (r-c);
			cout<< res<<endl;
			continue;
		}
		else{
			if(c%2){
				res += (c-r);
				cout<<res<<endl;
				continue;
			}
			res -= (c-r);
			cout<<res <<endl;
			continue;
		}
	}
  
}

// Can optimize it by removing some unnecessary code
