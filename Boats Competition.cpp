#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int wt[105]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            wt[x]++;
        }

        int cnt,tm=0;
        for(int i=1;i<105;i++){
            cnt=0;
            for(int j=0;j<=i;j++){
                cnt+=min(wt[j],wt[i-j]);
                tm=max(tm,cnt/2);
            }
        }
        cout<<tm<<'\n';
    }
    return 0;
}
