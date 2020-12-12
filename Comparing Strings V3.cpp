#include<bits/stdc++.h>  ///AC Solution

using namespace std;

int main(){

    bool flag=false;
    int cnt=0,k=0;
    string fs="";
    string ss="";
    char tmp1[2],tmp2[2];

    getline(cin, fs);
    getline(cin, ss);

    if(fs.length()!=ss.length()){
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=0;i<fs.length();i++){
            if(fs[i]!=ss[i]){
                cnt++;
                if(cnt>2){
                    cout<<"NO";
                    return 0;
                }
                tmp1[k]=fs[i];
                tmp2[k]=ss[i];
                k++;
            }

        }
    }
    if(tmp1[1]!=tmp2[0] || tmp1[0]!=tmp2[1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}

