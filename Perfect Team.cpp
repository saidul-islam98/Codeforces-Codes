#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        long long int c,m,ns;
        cin>>c>>m>>ns;

        long long int total,need;
        total=min(c,m);
        if(total==c){
            if(ns>=c){
                cout<<total<<'\n';
            }
            else{
                need=c-ns;
                if(m-c>=need){
                    cout<<total<<'\n';
                }
                else{
                    total=(c+m+ns)/3;
                    cout<<total<<'\n';
                }
            }
        }
        else{
            if(ns>=m){
                cout<<total<<'\n';
            }
            else{
                need=m-ns;
                if(c-m>=need){
                    cout<<total<<'\n';
                }
                else{
                    total=(c+m+ns)/3;
                    cout<<total<<'\n';
                }
            }
        }
    }
    return 0;
}
