#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int tot_ml=k*l;
    int tot_ls=c*d;
    int cnt=0;

    while(tot_ml>=nl && tot_ls>0 && p>=np){
        tot_ml=tot_ml-nl;
        tot_ls=tot_ls-1;
        p=p-np;
        cnt++;
    }
    cout<<cnt/n;
    return 0;
}


