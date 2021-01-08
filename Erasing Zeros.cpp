#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int cnt=0;
        string s;
        cin>>s;

        int idxf=0, idxl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                idxf=i;
                break;
            }
        }

        for(int i=s.length()-1;i>=idxf;i--){
            if(s[i]=='1'){
                idxl=i;
                break;
            }
        }

        if(idxf==idxl) cout<<0<<'\n';
        else{
            for(int i=idxf;i<idxl;i++){
                if(s[i]=='0') cnt++;
            }
            cout<<cnt<<'\n';
        }
    }
    return 0;
}

