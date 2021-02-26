#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        bool isPossible=true;
        for(int j=0;j<n;j++){
            if(a[j]!=j){
                isPossible=false;
            }
        }
        if(isPossible){
            cout<<"Yes";
            return 0;
        }
        else{
            for(int j=0;j<n;j++){
                if(j%2==0){
                    a[j]=(a[j]+1)%n;
                }
                else{
                    a[j]=(a[j]+n-1)%n;
                }
            }
        }
    }

    cout<<"No";
    return 0;
}
