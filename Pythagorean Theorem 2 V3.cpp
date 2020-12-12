#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,k=0;
    cin>>n;
    int mrr[n*n];
    int arr[n-5];

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int a=i*i+j*j;
            mrr[k]=a;
            k++;
        }
    }

    for(int i=5;i<=n;i++){
        int x=i*i;
        arr[i-5]=x;
    }

    for(int i=0;i<=n-5;i++){
        for(int j=0;j<k;j++){
            if(arr[i]==mrr[j]){
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
