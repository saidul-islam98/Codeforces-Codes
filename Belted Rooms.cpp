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

        bool cl=false,ccl=false;
        for(int i=0;i<n;i++){
            if(s[i]=='<')
                cl=true;
            else if(s[i]=='>')
                ccl=true;
        }

        int cnt=0;
        if(cl && ccl){
            s+=s[0];
            for(int i=0;i<n;i++){
                if(s[i]=='-' || s[i+1]=='-'){
                    cnt++;
                }
            }
            cout<<cnt<<'\n';
        }
        else{
            cout<<n<<'\n';
        }
    }
    return 0;
}
