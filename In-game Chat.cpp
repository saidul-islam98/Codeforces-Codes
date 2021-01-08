#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;

        for(int i=n-1;i>=0;i--){
            if(s[i]!=')'){
                break;
            }
            else{
                cnt++;
            }
        }

        if(cnt>(n-cnt)){
            cout<<"Yes\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
