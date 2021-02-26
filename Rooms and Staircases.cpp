#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cntz=0,cnto=0;
        if(s[0]=='1' || s[n-1]=='1'){
            cout<<n*2<<'\n';
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='0')
                    cntz++;
                else
                    cnto++;
            }

            if(cnto==n){
                cout<<n*2<<'\n';
            }
            else if(cntz==n){
                cout<<n<<'\n';
            }
            else if(cnto==1){
                int newCntz1=0,newCntz2=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        break;
                    }
                    else{
                        newCntz1++;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='1'){
                        break;
                    }
                    else{
                        newCntz2++;
                    }
                }
                int mn=min(newCntz1,newCntz2);
                int total1=2*n-2*mn;
                cout<<total1<<'\n';
            }
            else{
                int newCntz1=0,newCntz2=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        break;
                    }
                    else{
                        newCntz1++;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='1'){
                        break;
                    }
                    else{
                        newCntz2++;
                    }
                }
                int mn=min(newCntz1,newCntz2);
                int total1=2*n-2*mn;
                int total2=newCntz1+newCntz2+(n-(newCntz1+newCntz2))+2;
                cout<<max(total1,total2)<<'\n';
            }
        }
    }
    return 0;
}
