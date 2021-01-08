#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,t,sum=0,cnt=0;
    cin>>n>>x;
    t=n;
    while(t--){
        int z;
        cin>>z;
        sum+=z;
    }

    if(sum==0){
        cout<<cnt;
    }
    else if(sum>0){
        if(sum<=x){
            cnt++;
            cout<<cnt;
        }
        else{
            if(sum%x==0){
                cnt+=(sum/x);
                cout<<cnt;
            }
            else{
                cnt+=(sum/x)+1;
                cout<<cnt;
            }
        }
    }
    else{
        if(abs(sum)<=x){
            cnt++;
            cout<<cnt;
        }
        else{
            if(abs(sum)%x==0){
                cnt+=(abs(sum)/x);
                cout<<cnt;
            }
            else{
                cnt+=(abs(sum)/x)+1;
                cout<<cnt;
            }
        }
    }
    return 0;
}
