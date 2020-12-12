#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,x;
    bool flag=true;

    vector<int> idx[5001];

    cin>>n;

    for(int i=1;i<=2*n;i++){
        cin>>x;
        idx[x].push_back(i);
    }

    for(int i=1;i<5001;i++){
        if(idx[i].size()%2==1){
            flag=false;
            break;
        }
    }


    if(flag){
        for(int i=1;i<5001;i++){
            for(size_t j=0;j<idx[i].size();j+=2){
                cout<<idx[i][j]<<" "<<idx[i][j+1]<<"\n";
            }
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
