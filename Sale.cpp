#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int val,sum=0;
    vector<int> mn;

    while(n--){
        cin>>val;
        if(val<0){
            mn.push_back(val);
        }
    }

    sort(mn.begin(), mn.end());

    if(mn.size()<m){
        for(auto i=mn.begin();i!=mn.end();i++){
            sum=sum+abs((int)*i);
        }
    }
    else{
        int j=0;
        for(auto i=mn.begin();i!=mn.end();i++){
            sum=sum+abs((int)*i);
            j++;
            if(j==m){
                break;
            }
        }
    }

    cout<<sum;
    return 0;
}
