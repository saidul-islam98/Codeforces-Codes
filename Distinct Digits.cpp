#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    while(n<=m){
        int a[10]={0};
        string s;
        s=to_string(n);
        for(int i=0;i<s.length();i++){
            int x=(int)s[i]-48;
            a[x]++;
        }

        bool flag=true;
        for(int i=0;i<10;i++){
            if(a[i]>1){
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<n;
            return 0;
        }
        else{
            n++;
        }
    }

    if(n>m){
        cout<<-1;
    }
    return 0;
}
