#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    vector<int>::iterator it;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    if(n%2==0)
        cout<<v[n/2-1];
    else
        cout<<v[n/2];
    return 0;
}
