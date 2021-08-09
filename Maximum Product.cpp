#include<bits/stdc++.h>

using namespace std;

bool sortasc(const long long int x, const long long int y){
    return abs(x)>abs(y);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n+1],mx=-1e9,prod=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(mx<a[i]){
                mx=a[i];
            }
        }

        sort(a+1,a+n+1,sortasc);
        if(mx<0){
            prod=a[n]*a[n-1]*a[n-2]*a[n-3]*a[n-4];
            cout<<prod<<'\n';
            continue;
        }
        else{
            prod=a[1]*a[2]*a[3]*a[4]*a[5];
            for(int i=6;i<=n;i++){
                for(int j=1;j<=5;j++){
                    long long int tmp=a[i];
                    for(int k=1;k<=5;k++){
                        if(k!=j){
                            tmp*=a[k];
                        }
                    }
                    prod=max(prod,tmp);
                }
            }
            cout<<prod<<'\n';
        }
    }
    return 0;
}
