#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n;
        k=n;

        while(k){
            long long int x;
            x=k%10;
            if(x==0 || n%x==0){
                k=k/10;
            }
            else{
                n++;
                k=n;
            }
        }
        cout<<n<<'\n';
    }
    return 0;
}
