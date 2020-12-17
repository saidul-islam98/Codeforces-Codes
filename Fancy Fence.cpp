#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    float poly[405];

    for(int i=3;i<=400;i++){
        float x=(float(i-2)*180)/i;
        if(x==(int)x){
            poly[i]=((i-2)*180)/i;
        }
        else{
            poly[i]=0;
        }
    }

    while(t--){
        int a;
        cin>>a;
        bool yea=false;
        for(int i=3;i<=400;i++){
            if(poly[i]==a){
                yea=true;
                break;
            }
        }
        if(yea==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
