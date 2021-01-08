#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s,t,cnt=0;
    cin>>n>>s>>t;

    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=0;i<=n;i++){
        b[i]=i;
    }

    int i=s;
    bool flag=false,flagf[n+1];
    memset(flagf,false,sizeof(flagf));
    if(b[t]==s){
        cout<<cnt;
    }
    else if(b[s]==a[s]){
        cout<<-1;
    }
    else{
        while(1){
            b[a[i]]=s;
            if(b[t]!=s){
                i=a[i];
                if(flagf[i]==false){
                    flagf[i]=true;
                }
                else{
                    flag=true;
                    break;
                }
                cnt++;
            }
            else{
                cnt++;
                break;
            }
        }

        if(flag==true){
            cout<<-1;
        }
        else{
            cout<<cnt;
        }
    }

    return 0;
}
