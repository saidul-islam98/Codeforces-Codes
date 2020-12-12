#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){
    int t,cnt=0;
    cin>>t;

    int n[t];
    for(int i=0;i<t;i++){
        cin>>n[i];
    }
    for(int i=0;i<t;i++){
        if(n[i]<10){
        cout<<1<<endl<<n[i]<<endl;
        }
        else{
            cnt=0;
            int y=n[i];
            vector<int> x;
            int zcnt=0;
            while(y>0){
                int val=y%10;
                val=val*pow(10,cnt);
                cnt++;
                if(val!=0){
                    x.push_back(val);
                }
                else{
                    zcnt++;
                }
                y=y/10;
            }
            cout<<cnt-zcnt<<endl;
            for(int i=0;i<x.size();i++){
                cout<<x[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
