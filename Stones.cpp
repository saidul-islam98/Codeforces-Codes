#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,cnt=0;
        cin>>a>>b>>c;

        if(c>=2){
            while(1){
                if(b-1<0 || c-2<0){
                    break;
                }
                else{
                    cnt+=3;
                    b-=1;
                    c-=2;
                }
            }
            while(1){
                if(a-1<0 || b-2<0){
                    break;
                }
                else{
                    cnt+=3;
                    a-=1;
                    b-=2;
                }
            }
        }
        else{
            while(1){
                if(a-1<0 || b-2<0){
                    break;
                }
                else{
                    cnt+=3;
                    a-=1;
                    b-=2;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
