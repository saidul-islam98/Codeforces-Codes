#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,mul=1;
    cin>>a>>b;

    long long int x=b-a;
    long long int z;
    if(x==0){
        z=1;
    }
    else{
        z=b%10;
        x--;

        while(x--){
            b--;
            z=(z*b%10)%10;
            if(z==0)
                break;
        }
    }


    cout<<z;
    return 0;
}
