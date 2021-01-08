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

        if(s.compare("2020")==0) cout<<"YES\n";
        else{
            if(s[0]=='2'){
                if(s[1]=='0' && s[s.length()-2]=='2' && s[s.length()-1]=='0') cout<<"YES\n";
                else if(s[1]=='0' && s[2]=='2' && s[s.length()-1]=='0') cout<<"YES\n";
                else if(s[1]=='0' && s[2]=='2' && s[3]=='0') cout<<"YES\n";
                else if(s[s.length()-3]=='0' && s[s.length()-2]=='2' && s[s.length()-1]=='0') cout<<"YES\n";
                else cout<<"NO\n";
            }
            else{
                if(s[s.length()-4]=='2' && s[s.length()-3]=='0' && s[s.length()-2]=='2' && s[s.length()-1]=='0') cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}
