#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        char c[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>c[i][j];
            }
        }

        char eu=c[n-1][n],el=c[n][n-1];
        char sr=c[1][2],sd=c[2][1];
        int cnt;
        if(sr==sd && sr=='0'){
            if(eu==el && eu=='1'){
                cout<<0<<'\n';
            }
            else if(eu!=el && eu=='0' && el=='1'){
                cout<<1<<'\n';
                cout<<n-1<<' '<<n<<'\n';
            }
            else if(eu!=el && eu=='1' && el=='0'){
                cout<<1<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
            else if(eu==el && eu=='0'){
                cout<<2<<'\n';
                cout<<n-1<<' '<<n<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
        }
        else if(sr==sd && sr=='1'){
            if(eu==el && eu=='0'){
                cout<<0<<'\n';
            }
            else if(eu!=el && eu=='1' && el=='0'){
                cout<<1<<'\n';
                cout<<n-1<<' '<<n<<'\n';
            }
            else if(eu!=el && eu=='0' && el=='1'){
                cout<<1<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
            else if(eu==el && eu=='1'){
                cout<<2<<'\n';
                cout<<n-1<<' '<<n<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
        }
        else if(sr!=sd && sr=='1' && sd=='0'){
            if(eu==el && eu=='0'){
                cout<<1<<'\n';
                cout<<2<<' '<<1<<'\n';
            }
            else if(eu!=el && eu=='1' && el=='0'){
                cout<<2<<'\n';
                cout<<2<<' '<<1<<'\n';
                cout<<n-1<<' '<<n<<'\n';
            }
            else if(eu!=el && eu=='0' && el=='1'){
                cout<<2<<'\n';
                cout<<2<<' '<<1<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
            else if(eu==el && eu=='1'){
                cout<<1<<'\n';
                cout<<1<<' '<<2<<'\n';
            }
        }
        else if(sr!=sd && sr=='0' && sd=='1'){
            if(eu==el && eu=='0'){
                cout<<1<<'\n';
                cout<<1<<' '<<2<<'\n';
            }
            else if(eu!=el && eu=='1' && el=='0'){
                cout<<2<<'\n';
                cout<<1<<' '<<2<<'\n';
                cout<<n-1<<' '<<n<<'\n';
            }
            else if(eu!=el && eu=='0' && el=='1'){
                cout<<2<<'\n';
                cout<<1<<' '<<2<<'\n';
                cout<<n<<' '<<n-1<<'\n';
            }
            else if(eu==el && eu=='1'){
                cout<<1<<'\n';
                cout<<2<<' '<<1<<'\n';
            }
        }
    }
    return 0;
}
