#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,b;
    cin>>n>>b;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int cut=0,cost=0,evn=0,odd=0;
    vector<int> vc;
    for(int i=0;i<n;i++){
        if(a[i]%2){
            odd++;
        }
        else{
            evn++;
        }
        if(odd==evn){
            if(i<n-1){
                vc.push_back(abs(a[i]-a[i+1]));
            }
        }
    }

    sort(vc.begin(),vc.end());

    for(int i=0;i<vc.size();i++){
        cost+=vc[i];
        if(cost<=b){
            cut++;
        }
        else{
            break;
        }
    }

    cout<<cut;
    return 0;
}
