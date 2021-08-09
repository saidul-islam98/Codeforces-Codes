#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n],res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=29;j>=0;j--){
            long long int cnt=0;
            for(int i=0;i<n;i++){
                if(a[i]>=(1<<j) && a[i]<(1<<(j+1))){
                    cnt++;
                }
            }
            res+=((cnt*(cnt-1))/2);
        }

        cout<<res<<'\n';
    }
    return 0;
}
