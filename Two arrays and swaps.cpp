#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c;
    cin>>n;
    c=n;
    vector<int> rs;

    while(c--){
        int m,k,sum=0;
        cin>>m>>k;
        int a[m],b[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b,b+m,greater<int>());

        for(int i=0;i<k;i++){
            if(a[i]<b[i]){
                swap(a[i],b[i]);
            }
        }
        for(int i=0;i<m;i++){
            sum+=a[i];
        }
        rs.push_back(sum);
    }

    for(int i=0;i<n;i++){
        cout<<rs[i]<<endl;
    }
    return 0;
}
