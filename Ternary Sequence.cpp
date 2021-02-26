#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int midval,numzA,numoA,numtA,numzB,numoB,numtB,sum=0;
        cin>>numzA>>numoA>>numtA;
        cin>>numzB>>numoB>>numtB;

        int mn;
        midval=min(numzA,numtB);
        numzA-=midval;
        numtB-=midval;

        midval=min(numoA,numzB);
        numoA-=midval;
        numzB-=midval;

        midval=min(numtA,numoB);
        numtA-=midval;
        numoB-=midval;

        sum+=2*midval;

        sum-=2*min(numoA, numtB);

        cout<<sum<<'\n';
    }
    return 0;
}
