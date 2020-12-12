#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,flag=0;
    cin>>n>>m;
    int s[m];
    int b[m];
    bool ss[m];
    for(int i=0;i<m;i++){
        cin>>s[i];
        cin>>b[i];
        ss[i]=false;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(ss[j]!=true){
                if(n>s[j]){
                    n=n+b[j];
                    ss[j]=true;
                    flag=1;
                }
                else{
                    flag=0;
                }
            }
        }
    }

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
