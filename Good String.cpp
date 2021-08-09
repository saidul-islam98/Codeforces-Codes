#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cntr=0,cntl=0;
        bool foundr=false,foundl=false;
        for(int i=0;i<n;i++){
            if(s[i]=='>' && foundr==false){
                foundr=true;
                cntr=i;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='<' && foundl==false){
                foundl=true;
                cntl=n-i-1;
            }
        }

        cout<<min(cntl,cntr)<<'\n';
    }
    return 0;
}
