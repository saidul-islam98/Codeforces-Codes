#include<bits/stdc++.h>

using namespace std;

int main(){
    string fs,ss;
    cin>>fs>>ss;

    int cnt=0;
    int n=fs.length();

    for(int i=0;i<n;i++){
        if(fs[i]!=ss[i]){
            cnt++;
        }
    }

    if(cnt%2!=0){
        cout<<"impossible";
    }
    else{
        string rs="";
        int cnt=0;
        for(int i=0;i<n;i++){
            if(fs[i]!=ss[i] && cnt==0){
                cnt=1;
                rs+=fs[i];
            }
            else if(fs[i]!=ss[i] && cnt==1){
                cnt=0;
                rs+=ss[i];
            }
            else{
                rs+=fs[i];
            }
        }

        cout<<rs;
    }
    return 0;
}
