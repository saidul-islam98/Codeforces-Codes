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

        string fs="";
        if(s.length()==1){
            cout<<s[0]<<'\n';
        }
        else{
            bool flag=true;
            for(int i=0;i<s.length()-1;i++){
                if(s[i]!=s[i+1]){
                    flag=false;
                    break;
                }
            }

            if(flag==true){
                for(int i=0;i<n;i++){
                    fs+=s[0];
                }
                cout<<fs<<'\n';
            }
            else{
                for(int i=0;i<s.length();i++){
                    if(i%2==0){
                        fs+=s[i];
                    }
                }
                cout<<fs<<'\n';
            }
        }
    }
    return 0;
}
