#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    bool flag=false;
    for(int i=0;i<n-2;i++){
        if(((a[i]+a[i+1])>a[i+2]) && ((a[i+2]+a[i+1])>a[i]) && ((a[i]+a[i+2])>a[i+1])){
            flag=true;
            break;
        }
    }

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
