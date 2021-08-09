#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,c;
        cin>>n;

        c=n;

        vector<pair<int,int>> vc;
        bool yes[n+1];
        memset(yes,false,sizeof(yes));
        for(int i=0;i<n;i++){
            vc.push_back(make_pair(i+1,0));
        }

        for(int c=0;c<n;c++){
            int m;
            cin>>m;

            int z[m];
            for(int i=0;i<m;i++){
                cin>>z[i];
            }
            for(int i=0;i<m;i++){
                if(yes[z[i]]==false){
                    yes[z[i]]=true;
                    vc[c].second=z[i];
                    break;
                }
            }
        }
//
//        for(int i=0;i<n;i++){
//            cout<<yes[i]<<' ';
//        }
//        cout<<'\n';
//        for(int i=0;i<n;i++){
//            cout<<vc[i].first<<' '<<vc[i].second<<'\n';
//        }

        int idx1,idx2;
        bool found=false;
        for(int i=0;i<n;i++){
            if(vc[i].second==0){
                idx1=vc[i].first;
                found=true;
                break;
            }
        }

        if(found){
            for(int i=1;i<=n;i++){
                if(yes[i]==false){
                    idx2=i;
                    break;
                }
            }

            cout<<"IMPROVE\n";
            cout<<idx1<<' '<<idx2<<'\n';
        }
        else{
            cout<<"OPTIMAL\n";
        }
    }
    return 0;
}
