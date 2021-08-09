#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int sumx=0,sumy=0;
    for(int i=0;i<n*2;i++){
        int o,p;
        cin>>o>>p;
        sumx+=o;
        sumy+=p;
    }

    cout<<sumx/n<<' '<<sumy/n;
    return 0;
}
