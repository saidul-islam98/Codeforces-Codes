#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int s,rc=0,bc=0;
        cin>>s;
        string r,b;
        cin>>r;
        cin>>b;
        for(int i=0;i<s;i++){
            if(r[i]>b[i]){
                rc++;
            }
            else if(r[i]<b[i]){
                bc++;
            }
            else if(r[i]==b[i]){
                rc++;
                bc++;
            }
        }

        if(rc==bc){
            cout<<"EQUAL\n";
        }
        else if(rc>bc){
            cout<<"RED\n";
        }
        else{
            cout<<"BLUE\n";
        }
    }
    return 0;
}
