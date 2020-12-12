#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    for(int i=1;i<n;i++){
		for(int j=1;j<i;j++){
			int t=i*i+j*j;
			int c=sqrt(t);
			if(c*c!=t) continue;
			if(c>n) continue;
			if(i+j<=c||i+c<=j||c+j<=i) continue;
			cnt++;
		}
    }
    cout<<cnt;
    return 0;
}
