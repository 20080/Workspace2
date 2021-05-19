#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){
	//freopen("div7.in", "r", stdin);
	//freopen("div7.out", "w", stdout);
	ll n;
	cin>>n;
	map<ll,ll>m={{0,-1}};
	ll arr[n];
	for(ll i=0;i<n;i++)cin>>arr[i];
	ll rem = 0;
	ll dist = 0,ans=0;
	for(int i=0;i<n;i++){
		
		 rem = (rem+arr[i])%MOD;
		 
		 if(m.count(rem)){
			 dist = i-m[rem];
		}
		else{
			m[rem] = i;
		}
		ans = max(ans,dist);
	}
	
	cout<<ans;
}
