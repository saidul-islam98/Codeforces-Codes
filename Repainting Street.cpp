#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n],fcnt=999999999;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }

        set<int>:: iterator it;
        it=s.begin();
        int c=0;
        while(it!=s.end()){
            int z=*it,j=0;
            int cnt=0;
            while(j<n){
                if(z==a[j]){
                    j++;
                }
                else{
                    cnt++;
                    j+=k;
                }
            }
            fcnt=min(fcnt,cnt);
            it++;
        }
        cout<<fcnt<<'\n';
    }


    return 0;
}
