#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,z;
    cin>>n;
    k=pow(n,2);
    z=k/2;
    int b1[z+1],b2[z+1];

    for(int i=1;i<=z;i++){
        b1[i]=i;
    }
    int j=1;
    for(int i=z+1;i<=k;i++){
        b2[j]=i;
        j++;
    }

    sort(b2+1,b2+z+1,greater<int>());

    for(int i=1;i<=z;){
        int x=n/2;
        int j=i;
        while(x--){
            cout<<b1[j]<<" "<<b2[j]<<" ";
            j++;
        }
        cout<<'\n';
        i+=n/2;
    }

    return 0;
}
