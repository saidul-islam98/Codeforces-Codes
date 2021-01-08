#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k=0;
        cin>>n;

        int a[26]={0};
        bool tryg[6],found=false;
        memset(tryg,false,sizeof(tryg));

        string s;
        cin>>s;

        for(int i=0;i<n;i++){
            int x=int(s[i])-97;
            a[x]++;
            if(s[i]=='t' && k==0 && found==false){
                tryg[0]=true;
            }
            else if(s[i]=='r' && tryg[0]==true && found==false){
                tryg[1]=true;
            }
            else if(s[i]=='y' && tryg[1]==true && found==false){
                tryg[2]=true;
            }
            else if(s[i]=='g' && tryg[2]==true && found==false){
                tryg[3]=true;
            }
            else if(s[i]=='u' && tryg[3]==true && found==false){
                tryg[4]=true;
            }
            else if(s[i]=='b' && tryg[4]==true && found==false){
                tryg[5]=true;
                found=true;
            }
        }
        if(found==false){
            cout<<s<<'\n';
        }
        else{
            string ss="";
            for(int i=0;i<26;i++){
                if(a[i]>0){
                    while(a[i]--){
                        ss+=char(i+97);
                    }
                }
            }
            cout<<ss<<'\n';
        }

    }
    return 0;
}
