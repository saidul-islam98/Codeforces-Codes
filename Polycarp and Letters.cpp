#include<bits/stdc++.h>

using namespace std;

int main(){
    int alph[26]={0};

    int n,cnt=0,mx=-99999999;
    cin>>n;

    string s;
    cin>>s;

    bool isCaps=false;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            isCaps=true;
            for(int i=0;i<26;i++){
                if(alph[i]>0){
                    cnt++;
                    alph[i]=0;
                }
            }
            if(mx<cnt){
                mx=cnt;
            }
            cnt=0;
        }
        else{
            int x=int(s[i])-97;
            alph[x]=1;
        }
    }

    if(isCaps){
        cnt=0;
        for(int i=0;i<26;i++){
            if(alph[i]>0){
                cnt++;
            }
        }
        if(mx<cnt)
            mx=cnt;
    }
    else{
        cnt=0;
        for(int i=0;i<26;i++){
            if(alph[i]>0){
                cnt++;
            }
        }
        if(mx<cnt)
            mx=cnt;
    }


    cout<<mx;
    return 0;
}
