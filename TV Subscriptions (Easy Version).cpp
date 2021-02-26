#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,d,subsmn=99999999,cnt;
        cin>>n>>k>>d;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            vector<int> v;
            cnt=0;
            if(i+d>n)
                break;
            for(int j=i;j<i+d;j++){
                v.push_back(a[j]);
            }

            for(int o=0;o<v.size();o++){
                for(int p=o+1;p<v.size();p++){
                    if(v[o]==v[p]){
                        v[p]=-1;
                    }
                }
            }
            for(int j=0;j<v.size();j++){
                if(v[j]>0)
                    cnt++;
            }
            v.clear();

            if(cnt<subsmn)
                subsmn=cnt;
        }

        cout<<subsmn<<'\n';
    }
    return 0;
}
