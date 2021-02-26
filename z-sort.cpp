#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<long long int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int x;
    if(n%2==0){
        x=n/2;
    }
    else{
        x=n/2+1;
    }

    if(n%2==0){
        for(int i=0;i<n/2;i++,x++){
            cout<<v[i]<<' '<<v[x]<<' ';
        }
    }
    else{
        for(int i=0;i<n/2+1;i++,x++){
            if(i==n/2){
                cout<<v[i];
            }
            else
                cout<<v[i]<<' '<<v[x]<<' ';
        }
    }

    return 0;
}
