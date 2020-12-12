#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int hh,mm;
        cin>>hh>>mm;
        int lft;
        lft=(23-hh)*60+(60-mm);
        cout<<lft<<"\n";
    }
    return 0;
}
