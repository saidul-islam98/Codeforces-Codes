#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        long long int n,m,ans,sum=0,div;
        cin>>n>>m;

        div=n/m;
        if(div==0){
            cout<<0<<'\n';
        }
        else if(div<10){
            for(int i=1;i<=div;i++){
                sum+=((m*i)%10);
            }
            cout<<sum<<'\n';
        }
        else{
            for(int i=1;i<=10;i++){
                sum+=((m*i)%10);
            }
            int ex=div%10;
            ans=sum*(div/10);
            for(int i=1;i<=ex;i++){
                ans+=((m*i)%10);
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
