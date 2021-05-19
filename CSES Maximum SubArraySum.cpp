
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){

	int n;
	cin>>n;
	ll ans =INT_MIN,mx=0;

	for(int i=0;i<n;i++){
	ll te;
	cin>>te;
	mx += te;
	ans = mx>ans?mx:ans;
	if(mx<0)mx=0;
	}
	cout<<ans<<endl;

return 0;
}

//10
//24 7 -27 17 -67 65 -23 58 85 -39
//185

