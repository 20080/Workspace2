#include<iostream>
#define int long long
int32_t main(){
    int n,q;
    std::cin>>n>>q;
    int arr[n];
    int ss[n];
    int kk[n];
    for(int &i :arr)
    std::cin>>i;
    
    std::copy(arr, arr+n, ss);
    std::copy(arr, arr+n, kk);
    
    for(int i=1;i<n;i++){
		ss[i]+=ss[i-1];
	}
	
    while(q--){
		int ans =0;
        int i,j;
        std::cin>>i>>j;
        j--;
        if(i==j)
        std::cout<<arr[j]<<std::endl;
        else{
		if(i==0)
		ans = ss[j];
		else{
		 ans = ss[j]-ss[--i];
	}
        std::cout<<ans<<std::endl;
	}
	}
        return 0;
}
