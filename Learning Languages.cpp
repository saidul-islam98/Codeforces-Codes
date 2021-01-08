#include<bits/stdc++.h>

using namespace std;

int find(int i){
    if(parent[i]==i)
        return i;
    int x=find(parent[i]);
    parent[i]=x;
    return x;
}

int Union(int x, int y){
    int xs=find(x);
    int ys=find(y);
    if(xs==ys) return 0;
    if(ranks[xs]>ranks[ys])	swap(xs,ys);

	parent[xs]=ys;
	ranks[ys]+=ranks[xs];
	return 1;
}


int main(){
    int n,m,k,cnt=0;
    cin>>n>>m;
    k=n;
    bool lan[m+1];
    memset(lan,false,sizeof(lan));
    vector<vector<int>> v;
    while(k--){
        int t;
        cin>>t;
        vector<int> intv;
        if(t==0){
            intv.push_back(0);
            v.push_back(intv);
            continue;
        }
        while(t--){
            int l;
            cin>>l;
            intv.push_back(l);
        }
        v.push_back(intv);
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
