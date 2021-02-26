#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int cntB=0;
        for(int i=0;i<s.length();i++){
            if(cntB && s[i]=='B'){
                cntB--;
            }
            else{
                cntB++;
            }
        }
        cout<<cntB<<'\n';
    }
    return 0;
}
