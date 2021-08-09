#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int x;
        vector<long long int> vc;
        for(int i=0;i<n;i++){
            cin>>x;
            vc.push_back(x);
        }

        long long int fnres=0;
        sort(vc.rbegin(),vc.rend());

        for(int i=0;i<vc.size();i++){
            if(i%2){
                if(vc[i]%2){
                    fnres-=vc[i];
                }
            }
            else{
                if(vc[i]%2==0){
                    fnres+=vc[i];
                }

            }
        }

        if(fnres>0){
            cout<<"Alice\n";
        }
        else if(fnres<0){
            cout<<"Bob\n";
        }
        else{
            cout<<"Tie\n";
        }
    }
    return 0;
}
