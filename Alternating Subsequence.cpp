#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,p,x,sum=0;

        cin>>n>>p;
		for(int i=0;i<n-1;i++){
			cin>>x;
			if(x*p>0){
				p=max(p,x);
			}
			else{
				sum+=p;
				p=x;
			}
		}
		cout<<sum+p<<'\n';
    }
    return 0;
}
