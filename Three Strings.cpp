#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string fs,ss,ts;
        cin>>fs>>ss>>ts;

        bool flag=true;
        for(int i=0;i<fs.length();i++){
            swap(fs[i],ts[i]);
            if(fs[i]!=ss[i]){
                swap(fs[i],ts[i]);
                swap(ss[i],ts[i]);
                if(fs[i]!=ss[i]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
