#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    sort(a,a+m);
    int cnt=1;
    bool isPossible=true;

    if(a[0]==1 || a[m-1]==n){
        isPossible=false;
    }
    else{
        for(int i=1;i<m;i++){
            if(a[i]==a[i-1]+1){
                cnt++;
                if(cnt==3){
                    isPossible=false;
                    break;
                }
            }
            else{
                cnt=1;
            }
        }
    }

    if(isPossible){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
