#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s,st;
        cin>>s>>st;

        if(s.compare(st)==0){
            cout<<"YES\n";
        }
        else{
            int idx;
            bool isSwap=false, canSwap=false;
            for(int i=0;i<n;i++){
                if(s[i]!=st[i] && isSwap==false){
                    idx=i;
                    isSwap=true;
                }
                else if(s[i]!=st[i] && isSwap==true){
                    swap(s[idx],st[i]);
                    if(s.compare(st)==0){
                        canSwap=true;
                        break;
                    }
                    else{
                        swap(s[idx],st[i]);
                        swap(st[idx],s[i]);
                        if(s.compare(st)==0){
                            canSwap=true;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                }
            }
            if(canSwap==true){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
