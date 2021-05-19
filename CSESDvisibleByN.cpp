
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){
	
	ll n;
	cin>>n;
	
	vector<ll>num(n,-1);
	num[0]=0;
	ll ans =0;
	ll sum =0;
	for(int i = 0; i<n; i++){
		ll y;
		cin>>y;
		
		sum = ((sum+y)%n+n)%n;
		
		ans+=++num[sum];
		
	}
	
	
	//map<ll,ll>mp = {{0,1}};
	//ll sum=0;
	//ll ans =0;
	//for(int i=0;i<n;i++){
		
		//ll x;
		//cin>>x;
		//sum+=x;
		//ll rem = sum%n;
		//if(rem<0)rem+=n;
		
		//if(mp.count(rem)){
		//ans+=mp[rem];
		//}
		//mp[rem]++;
	
	//}
	
	cout<<ans<<endl;
	
return 0;
}


