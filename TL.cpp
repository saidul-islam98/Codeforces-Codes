#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int cs[n],rs[m];
    for(int i=0;i<n;i++){
        cin>>cs[i];
    }
    sort(cs,cs+n);
    for(int i=0;i<m;i++){
        cin>>rs[i];
    }
    sort(rs,rs+m);

    int mnt=cs[0],mnw=rs[0],v=cs[n-1];
    int a=2*mnt;

    if(a<=v && v<mnw){
        cout<<v;
    }
    else if(mnt==v && v<mnw && a<mnw){
        cout<<a;
    }
    else if(mnt<v && a<mnw && v<a){
        cout<<a;
    }
    else{
        cout<<"-1";
    }

    return 0;
}
