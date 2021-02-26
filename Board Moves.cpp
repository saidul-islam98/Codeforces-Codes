#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int sum=0;
        for(int i=1;i<=(n-1)/2;i++){
            sum+=pow(i,2);
        }

        cout<<sum*8<<'\n';
    }
    return 0;
}
