#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cnt[3]={0},ans=0;
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            if(x%3==0){
                cnt[0]++;
            }
            else if(x%3==1){
                cnt[1]++;
            }
            else{
                cnt[2]++;
            }
        }

        int mn=min(cnt[1],cnt[2]);
        cnt[1]-=mn;
        cnt[2]-=mn;
        ans+=mn;
        ans+=cnt[0];

        ans+=((cnt[1]+cnt[2])/3);

        cout<<ans<<'\n';
    }
    return 0;
}
