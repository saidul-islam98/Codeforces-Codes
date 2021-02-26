#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int cnto=0,cntz=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cntz++;
            }
            else{
                cnto++;
            }
        }

        if(s.length()<=2){
            cout<<s<<'\n';
        }
        else{
            if(cnto==s.length()){
                for(int i=0;i<2*s.length()-1;i++){
                    cout<<'1';
                }
                cout<<'\n';
            }
            else if(cntz==s.length()){
                for(int i=0;i<2*s.length()-1;i++){
                    cout<<'0';
                }
                cout<<'\n';
            }
            else if(cntz>0 && cnto>0){
                for(int i=1;i<2*s.length();i++){
                    if(i%2==0){
                        cout<<'0';
                    }
                    else{
                        cout<<'1';
                    }
                }
                cout<<'\n';

            }
        }
    }
    return 0;
}
