#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long long int> v;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            long long int sq=pow(2*y,2);
            if(sq>=2*x*y){
                v.push_back(sq);
            }
            else{
                sq=x*x;
                v.push_back(sq);
            }

        }
        else{
            long long int sq=pow(2*x,2);
            if(sq>=2*x*y){
                v.push_back(sq);
            }
            else{
                sq=y*y;
                v.push_back(sq);
            }
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
