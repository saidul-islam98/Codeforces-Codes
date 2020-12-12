#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,t;
    cin>>n;
    t=n;
    long long int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){
        if(ar[i]%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            vector<long long int> num;
            for(int j=2;j<=ar[i];j++){
                if(j%2==0){
                    num.push_back(j);
                }
            }
            for(int j=1;j<ar[i];j++){
                if(j%2!=0){
                    num.push_back(j);
                }
            }
            long long int x=num.back();
            num.pop_back();
            num.push_back(x+ar[i]/2);
            cout<<"YES"<<endl;
            for(int i=0;i<num.size();i++){
                cout<<num[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
