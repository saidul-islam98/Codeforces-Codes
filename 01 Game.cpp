#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int cnt=0;
        string s;
        cin>>s;

        while(1){
            bool flag=false;
            for(int i=0;i<s.length();i++){
                for(int j=i+1;j<s.length();j++){
                    if(s[i]!=s[j] && (s[i]!='#' && s[j]!='#')){
                        s[i]='#';
                        s[j]='#';
                        flag=true;
                        cnt++;
                        break;
                    }
                }
                if(flag==false){
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }

        if(cnt%2!=0){
            cout<<"DA\n";
        }
        else{
            cout<<"NET\n";
        }
    }
    return 0;
}
