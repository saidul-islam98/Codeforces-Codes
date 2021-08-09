#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];
    bool oddFound=false,evenFound=false;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
            oddFound=true;
        }
        else{
            evenFound=true;
        }
    }

    if(oddFound && evenFound){
        sort(a,a+n);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
