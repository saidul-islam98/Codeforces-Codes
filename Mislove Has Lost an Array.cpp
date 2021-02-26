#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,l,r;
    cin>>n>>l>>r;


    if(l==1 && r==1){
        cout<<n<<' '<<n;
    }
    else if(l==1 && r>1){
        cout<<n<<' ';
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=pow(2,i);
        }
        for(int i=0;i<n-r;i++){
            sum+=pow(2,r-1);
        }
        cout<<sum;
    }
    else{
        int sum=0,minsum=0;
        for(int i=0;i<r;i++){
            sum+=pow(2,i);
        }
        for(int i=0;i<n-r;i++){
            sum+=pow(2,r-1);
        }
        for(int i=0;i<l;i++){
            minsum+=pow(2,i);
        }
        minsum+=(n-l);
        cout<<minsum<<' '<<sum;
    }
    return 0;
}
