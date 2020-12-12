#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> v;
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=0;
    }

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]++;
        v.push_back(make_pair(x,i));
    }

    if(a[1]==0 || a[2]==0 || a[3]==0){
        cout<<"0";
    }
    else{
        int l=0,m=0,k=0,limit;
        bool flag1=false, flag2=false, flag3=false;

        sort(v.begin(),v.end());

        if(a[1]<=a[2] && a[1]<=a[3]){
            limit=a[1];
        }
        else if(a[2]<=a[1] && a[2]<=a[3]){
            limit=a[2];
        }
        else{
            limit=a[3];
        }

        for(int i=0;i<v.size();i++){
            if(v[i].first==1 && flag1==false){
                l=i;
                flag1=true;
            }
            else if(v[i].first==2 && flag2==false){
                m=i;
                flag2=true;
            }
            else if(v[i].first==3 && flag3==false){
                k=i;
                flag3=true;
                break;
            }
        }

        cout<<limit<<"\n";

        while(limit--){
            for(int i=0;i<v.size();i++){
                cout<<v[l].second<<" "<<v[m].second<<" "<<v[k].second<<"\n";
                break;
            }
            l++;
            m++;
            k++;
        }

    }

    return 0;
}
