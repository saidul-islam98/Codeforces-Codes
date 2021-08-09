#include<bits/stdc++.h>

using namespace std;

const int x=100;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n],sum=0;
    vector<int> cnt(x+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        int d=sum+a[i]-m,k=0;
		if(d>0){
		    for(int j=x;j>0;j--) {
				int y=j*cnt[j];
				if(d<=y) {
					k+=(d+j-1)/j;
					break;
				}
				k+=cnt[j];
				d-=y;
			}
		}
		sum+=a[i];
		cnt[a[i]]++;
		cout<<k<<" ";
	}
    return 0;
}
