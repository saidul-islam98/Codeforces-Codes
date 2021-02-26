#include<bits/stdc++.h>

using namespace std;

int main(){
    int digits[1000005]={0};
    int segs[10]={6,2,5,5,4,5,6,3,7,6};

    for(int i=0;i<10;i++){
        digits[i]=segs[i];
    }

    for(int i=10;i<1000005;i++){
        int x=i;
        while(x){
            int md=x%10;
            digits[i]+=segs[md];
            x=x/10;
        }
    }

    int a,b,sum=0;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        sum+=digits[i];
    }
    cout<<sum;
    return 0;
}
