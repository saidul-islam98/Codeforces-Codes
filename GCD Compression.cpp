#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[2*n+1],cntevn=0,cntodd=0;
        vector<int> vodd;
        vector<int> vevn;
        for(int i=1;i<=2*n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cntevn++;
            }
            else{
                cntodd++;
            }
        }

        if(cntodd%2==0 && cntodd>cntevn && cntevn>0){
            cntevn-=2;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntodd%2!=0 && cntodd>cntevn){
            cntodd-=1;
            cntevn-=1;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntevn%2==0 && cntevn>cntodd && cntodd>0){
            cntodd-=2;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntevn%2==0 && cntevn>cntodd && cntodd==0){
            cntevn-=2;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntodd%2==0 && cntodd>cntevn && cntevn==0){
            cntodd-=2;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
            }
        }
        else if(cntevn%2!=0 && cntevn>cntodd){
            cntodd-=1;
            cntevn-=1;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntevn==cntodd && cntevn%2==0){
            cntodd-=2;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }
        else if(cntevn==cntodd && cntevn%2!=0){
            cntodd-=1;
            cntevn-=1;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2!=0 && cntodd>0){
                    vodd.push_back(i);
                    cntodd--;
                }
                else if(a[i]%2==0 && cntevn>0){
                    vevn.push_back(i);
                    cntevn--;
                }
            }
        }

        if(vodd.size()>0){
            for(int i=0;i<vodd.size();i+=2){
                cout<<vodd[i]<<' '<<vodd[i+1]<<'\n';
            }
        }

        if(vevn.size()>0){
            for(int i=0;i<vevn.size();i+=2){
                cout<<vevn[i]<<' '<<vevn[i+1]<<'\n';
            }
        }
    }
    return 0;
}
