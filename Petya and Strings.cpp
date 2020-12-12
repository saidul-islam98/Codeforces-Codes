#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int s1_val, s2_val;
    bool flag=false;

    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        s1_val=(int)s1[i];
        s2[i]=tolower(s2[i]);
        s2_val=(int)s2[i];
        if(s1_val<s2_val){
            flag=true;
            cout<<"-1";
            break;
        }
        else if(s1_val>s2_val){
            flag=true;
            cout<<"1";
            break;
        }
    }

    if(flag==false){
        cout<<"0";
    }

    return 0;
}
