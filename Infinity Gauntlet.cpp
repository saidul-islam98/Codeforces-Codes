#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    t=n;
    string st[]={"purple","green","blue","orange","red","yellow"};
    string s[]={"Power","Time","Space","Soul","Reality","Mind"};
    bool b[6];
    memset(b,false,sizeof(b));

    while(t--){
        string ss;
        cin>>ss;
        for(int i=0;i<6;i++){
            if(ss==st[i]){
                b[i]=true;
            }
        }
    }

    cout<<6-n<<'\n';
    for(int i=0;i<6;i++){
        if(b[i]==false){
            cout<<s[i]<<'\n';
        }
    }
    return 0;
}
