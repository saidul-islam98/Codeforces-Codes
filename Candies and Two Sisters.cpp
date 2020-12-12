#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> way;

    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        if(x%2==0){
            long long int k;
            k=(x/2)-1;
            way.push_back(k);
        }
        else{
            long long int k;
            k=x/2;
            way.push_back(k);
        }
    }

    for(int i=0;i<way.size();i++){
        cout<<way[i]<<endl;
    }

    return 0;
}
