#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    if((n/2)>=k){
        int j=1;
        int i=1;
        while(i<=n+1){
            if(j==k){
                cout<<i;
            }
            j++;
            i=i+2;
        }
    }
    else{
        if(n%2==0){
            int j=n/2+1;
            int i=2;
            while(i<=n+1){
                if(j==k){
                    cout<<i;
                }
                j++;
                i=i+2;
            }
        }
        else{
            int j=(n/2)+2;
            int i=2;
            while(i<=n+1){
                if(j==k){
                    cout<<i;
                }
                j++;
                i=i+2;
            }
        }
    }
    //cout<<n<<" "<<k;


    return 0;
}
