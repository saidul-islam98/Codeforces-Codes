#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,y,a,b,i=1,cnt=0;
        cin>>x>>y>>a>>b;

        if(((y-x)%(a+b))==0){
            cout<<((y-x)/(a+b))<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}
