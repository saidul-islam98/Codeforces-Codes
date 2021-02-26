#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a[1000000]={0},k=1;
    for(int i=1;i<=100000000;i++){
        int x=i;
        int sum=0;
        while(x){
            int z=x%10;
            sum+=z;
            x=x/10;
        }
        if(sum==10){
            a[k]=i;
            k++;
        }
    }

    int n;
    cin>>n;

    cout<<a[n];
    return 0;
}
