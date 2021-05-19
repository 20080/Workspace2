
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){
	//link http://www.usaco.org/index.php?page=viewproblem2&cpid=691
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	int games;
	cin>>games;
	vector<int>P(games);
	vector<int>H(games);
	vector<int>S(games);
	
	int psum=0,hsum=0,ssum=0;
	char x;
	for(int i=0;i<games;i++){
		cin>>x;
		if(x=='P'){
			psum++;
		}
		else if(x=='H'){
			hsum++;
		}
		else{
			ssum++;
		}
		P[i]=psum;
		H[i]=hsum;
		S[i]=ssum;
	
	}
	int ans =0;
	
	for(int i=0;i<games;i++){
	
		int before = max(P[i],max(H[i],S[i]));
		int after = max(P[games-1]-P[i],max(H[games-1]-H[i],S[games-1]-S[i]));
		ans = max(ans,(before+after));
		
	}
	cout<<ans;

return 0;
}
