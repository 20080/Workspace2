
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){

ll n,sum;
cin>>n>>sum;
map<ll,ll>mp;
if(n==1){
	ll x;
	cin>>x;
	if(x==sum)
	cout<<1<<endl;
	else cout<<0<<endl;
	return 0;
}
ll tem=0,ans=0;
for(ll i =0; i < n ;i++){
	ll x;
	cin>>x;
	tem+=x;
	if(tem==sum)
	ans++;
	
	if(mp.count(tem-sum))
		ans+=mp[tem-sum];
	mp[tem]++;
	
	
}
cout<<ans<<endl;

return 0;
}

