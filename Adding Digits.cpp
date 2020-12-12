#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,z;
    cin>>a>>b>>n;
    long long int x;
    bool flag=false;
    string ss;
    x=a;

    ss=to_string(x);
    ss+="0";
    x=stoi(ss);
    flag=false;
    for(int j=0;j<10;j++){
        long long int f;
        f=x;
        f+=j;
        if(f%b==0){
            x=f;
            flag=true;
            break;
        }
    }

    if(flag==false){
        cout<<-1;
    }
    else{
        z=n-1;
        string s;
        s=to_string(x);
        for(int i=0;i<z;i++){
            s+="0";
        }
        cout<<s;
    }
    return 0;
}
