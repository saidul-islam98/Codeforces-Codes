#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    double sum=0.0, result, val[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
        sum=sum+val[i];
    }
    result = sum/n;
    cout<<result;
    return 0;
}
