#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int N=101;
    map<long long int,int> mp;
    long long int rick,morty,val;
    bool found=false;
    for(int i=0;i<=N;i++){
        rick=b+i*a;
        if(mp[rick]!=1){
            mp[rick]=1;
        }
        else{
            val=rick;
            found=true;
            break;
        }
        morty=d+i*c;
        if(mp[morty]!=1){
            mp[morty]=1;
        }
        else{
            val=morty;
            found=true;
            break;
        }
    }
    if(found)
        cout<<val;
    else
        cout<<-1;

    return 0;
}
