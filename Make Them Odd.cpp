#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,ans=0;
        cin>>n;

        set<long long int> st;

        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            st.insert(x);
        }

        while(!st.empty()){
            long long int x=*st.rbegin();
            st.erase(x);
            if(x%2==0){
                ans++;
                st.insert(x/2);
            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}
