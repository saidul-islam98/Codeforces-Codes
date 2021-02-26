    #include<bits/stdc++.h>

    using namespace std;

    int main(){
        int t;
        cin>>t;

        while(t--){
            int n;
            cin>>n;

            int a[n+1]={0};
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                a[x]++;
            }

            int unq;
            int comm=*max_element(a,a+n+1);
            unq=n+1-count(a,a+n+1,0);
            int mx=max(min(unq-1,comm),min(unq,comm-1));
            cout<<mx<<'\n';
        }
        return 0;
    }

