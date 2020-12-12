#include<bits/stdc++.h>

using namespace std;

int main(){
    int n[3];
    for(int i=0;i<3;i++){
        cin>>n[i];
    }

    sort(n,n+3);

    int ff=n[0], sf=n[1], tf=n[2];

    int diff=abs(sf-ff)+abs(tf-sf);

    cout<<diff;
    return 0;
}
