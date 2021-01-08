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

        if(s[0]=='8' && s.length()==11){
            cout<<"YES\n";
        }
        else{
            int cnt=0;
            bool found=false;
            for(int i=0;i<s.length();i++){
                if(s[i]!='8') cnt++;
                else if(s[i]=='8'){
                    found=true;
                    break;
                }
            }

            if(found==false){
                cout<<"NO\n";
            }
            else{
                if(s.length()-cnt>=11){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}
