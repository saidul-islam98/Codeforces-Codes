#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,st;
        cin>>s>>st;

        bool isSame=false;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<st.length();j++){
                if(s[i]==st[j]){
                    isSame=true;
                    break;
                }
            }
            if(isSame){
                break;
            }
        }

        if(isSame){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
