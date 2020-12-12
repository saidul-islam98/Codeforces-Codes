#include<bits/stdc++.h>

using namespace std;

int main(){
    bool flag=false;
    string s;
    cin>>s;
    vector<string> ss;
    for(int i=0;i<5;i++){
        string st;
        cin>>st;
        ss.push_back(st);
    }

    for(int i=0;i<5;i++){
        if(ss[i][1]==s[1]){
            flag=true;
            break;
        }
        else if(ss[i][0]==s[0]){
            flag=true;
            break;
        }
        else{
            flag=false;
        }
    }

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
