#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n];
        bool isFirst=false,isSecond=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int k=0;
        while(k<n && a[k]==1){
            k++;
        }

        if((k==n)^(k%2)){
            cout<<"Second\n";
        }
        else{
            cout<<"First\n";
        }
    }
    return 0;
}
