#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    vector<int> vc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.push_back(x);
    }

    if(k>=n-1){
        cout<<*max_element(vc.begin(),vc.end());
    }
    else{
//        bool notFound=true;
//        int finval;
//        while(notFound){
//            int z=k;
//            int val = vc[0];
//            for(auto i=vc.begin()+1;i!=vc.end();i++){
//                if(val>*i){
//                    z--;
//                }
//                else{
//                    vc.push_back(val);
//                    vc.erase(vc.begin());
//                    break;
//                }
//                if(z==0){
//                    notFound=false;
//                    finval=val;
//                    break;
//                }
//            }
//        }
//        cout<<finval;


        int z=0,finval=vc[0],val;
        for(int i=1;i<n;i++){
            val=vc[i];
            if(z==k){
                break;
            }
            if(finval>val) z++;
            else{
                finval=val;
                z=1;
            }
        }
        cout<<finval;
    }
    return 0;
}
