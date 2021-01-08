#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string ss,s="0000000000";
    cin>>ss;

    for(int i=0;i<ss.length();i++){
        if(ss[i]=='L'){
            for(int j=0;j<10;j++){
                if(s[j]=='0'){
                    s[j]='1';
                    break;
                }
            }
        }
        else if(ss[i]=='R'){
            for(int j=9;j>=0;j--){
                if(s[j]=='0'){
                    s[j]='1';
                    break;
                }
            }
        }
        else if(ss[i]>='0' && ss[i]<='9'){
            int x=int(ss[i])-48;
            s[x]='0';
        }
    }

    cout<<s;
    return 0;
}
