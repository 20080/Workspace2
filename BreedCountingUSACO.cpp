
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 7
int main(){
	//link http://www.usaco.org/index.php?page=viewproblem2&cpid=572
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	
	int n,q;
	cin>>n>>q;
	int type1[n+1]={0};
	int type2[n+1]={0};
	int type3[n+1]={0};
	int arr[n];
	int t1=0,t2=0,t3=0;
	int j=1;
	for(int &i : arr){
		cin>>i;
		if(i==1)
		t1++;
		else if(i==2)
		t2++;
		else
		t3++;
		type1[j] = t1;
		type2[j] = t2;
		type3[j] = t3;
		j++;
	}
	
	
	
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		a--;
		cout<<type1[b]-type1[a]<<' '<<type2[b]-type2[a]<<' '<<type3[b]-type3[a]<<endl;
	}

return 0;
}

