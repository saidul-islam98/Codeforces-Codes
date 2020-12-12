#include<bits/stdc++.h>   /// AC Solution

using namespace std;

int main(){
    int n;
    bool flag=false;
    vector<pair<int,int>> v;
    int a[5005];
    for(int i=0;i<5005;i++){
        a[i]=0;
    }

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin>>n;

    for(int i=1;i<=2*n;i++){
        int x;
        cin>>x;
        a[x]++;
        v.push_back(make_pair(x,i));
    }

    for(int i=0;i<5005;i++){
        if(a[i]>0){
            if(a[i]%2==0){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }


    if(flag==true){
        sort(v.begin(), v.end());
        for(int i=0;i<v.size()-1;){
            cout<<v[i].second<<" "<<v[i+1].second<<"\n";
            i+=2;
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
