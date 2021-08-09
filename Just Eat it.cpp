#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int a[n],yass=0,adel=-1e9,cnt=0;
        set<int> st;

        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        for(auto it=st.begin();it!=st.end();it++){
            yass+=(*it);
        }
        //cout<<yass<<'\n';

        bool poss=true;
        long long int maxEndingHere1=0, maxEndingHere2=0;
        for(int i=0;i<n;i++){
            maxEndingHere1+=a[i];
            if(maxEndingHere1<=0){
                poss=false;
                break;
            }
        }

        if(poss){
            for(int i=n-1;i>=0;i--){
                maxEndingHere2+=a[i];
                if(maxEndingHere2<=0){
                    poss=false;
                    break;
                }
            }
        }


        if(poss){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
