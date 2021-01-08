#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n+1];
        vector<int> v;
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[n]%2==0){
                cout<<1<<'\n';
                cout<<n<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
        else{
            for(int i=1;i<=n;i++){
                if(a[i]%2==0){
                    cout<<1<<'\n';
                    cout<<i<<'\n';
                    break;
                }
                else if(a[i]%2!=0){
                    v.push_back(i);
                    if(v.size()==2){
                        cout<<2<<'\n';
                        cout<<v[0]<<' '<<v[1]<<'\n';
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
