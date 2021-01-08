#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st,fs,rs="";
    cin>>s>>st>>fs;

    for(int i=0;i<fs.length();i++){
        if(fs[i]>='A' && fs[i]<='Z'){
            char c=tolower(fs[i]);
            int idx;
            for(int i=0;i<s.length();i++){
                if(c==s[i]){
                    idx=i;
                    break;
                }
            }
            rs+=toupper(st[idx]);
        }
        else if(fs[i]>='a' && fs[i]<='z'){
            char c=fs[i];
            int idx;
            for(int i=0;i<s.length();i++){
                if(c==s[i]){
                    idx=i;
                    break;
                }
            }
            rs+=st[idx];
        }
        else{
            rs+=fs[i];
        }
    }

    cout<<rs;
    return 0;
}
