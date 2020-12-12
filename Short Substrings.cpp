#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    k=t;
    vector<string> v;

    while(k--){
        bool flag=false;
        string s,ss;
        cin>>s;
        ss=s;
        string tmp="";
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }

        if(flag==true){
            for(int i=0;i<s.length()/2+1;i++){
                tmp=tmp+s[i];
            }
            v.push_back(tmp);
        }
        else{
            string tmps="";
            for(int i=0;i<s.length()-1;i++){
                if(s[i]==s[i+1]){
                    s[i+1]='#';
                }
                else{
                    tmp=tmp+s[i]+s[i+1];
                }
            }
            for(int i=0;i<s.length();i++){
                if(tmp[i]!='#'){
                     tmps=tmps+tmp[i];
                }
            }
            v.push_back(tmps);
        }

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}


