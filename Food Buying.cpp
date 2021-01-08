#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        if(n<10){
            cout<<n<<'\n';
        }
        else{
            long long int pwr=1000*1000*1000,disc=0,spend=0,remain;
            while(n>9){
                while(n<pwr){
                    pwr/=10;
                }
                spend+=pwr;
                disc=pwr/10;
                n=n-pwr+disc;
            }

            spend+=n;
            cout<<spend<<'\n';
        }

    }
    return 0;
}



