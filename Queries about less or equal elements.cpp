#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    long long int a[n],b[m],c[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
        c[i]=b[i];
    }

    map<int,int> mp;

    sort(a,a+n);
    sort(c,c+m);

    int x=0,y=0,cnt=0;
    while(x<n && y<m){
        if(a[x]<=c[y]){
            cnt++;
            x++;
        }
        else{
            mp[c[y]]=cnt;
            y++;
        }
    }

    if(m-y>0){
        for(int i=y;i<m;i++){
            mp[c[i]]=cnt;
        }
    }


    for(int i=0;i<m;i++){
        cout<<mp[b[i]]<<' ';
    }
    return 0;
}
