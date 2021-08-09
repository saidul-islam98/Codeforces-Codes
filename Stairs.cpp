#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        long long int cnt=0;

        for(long long int i=1;;i=(i*2)+1){
            long long int val=(i*(i+1))/2;
            if(n<val)
                break;
            n-=val;
            cnt++;
        }

        cout<<cnt<<'\n';
    }
    return 0;
}
