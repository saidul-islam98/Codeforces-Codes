#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    vector<int> vc;
    int j=0;
    for(int i=1;;i++){
        if(i!=a[j]){
            if(m-i<0){
                break;
            }
            else{
                m-=i;
                vc.push_back(i);
            }
        }
        else{
            j++;
            if(j>n-1){
                j=n-1;
            }
        }
    }

    cout<<vc.size()<<'\n';

    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<' ';
    }
    return 0;
}
