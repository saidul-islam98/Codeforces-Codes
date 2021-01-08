#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool flagf=false,flagt=false;
        int incntf=0,incntt=0,total,cntf=0,cntt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                incntf++;
            }
            else if(s[i]=='['){
                incntt++;
            }
            else if(s[i]==')' && incntf>0){
                incntf--;
                cntf++;
            }
            else if(s[i]==']' && incntt>0){
                incntt--;
                cntt++;
            }
        }

        total=cntf+cntt;
        cout<<total<<'\n';
    }
    return 0;
}
