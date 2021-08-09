#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    int tot=0;

    if(n/k==n){
        cout<<*max_element(a,a+n)<<'\n'<<n;
    }
    else{
        sort(b,b+n,greater<int>());
        vector<int> mxx;
        for(int i=0;i<k;i++){
            tot+=b[i];
            mxx.push_back(b[i]);
        }
        cout<<tot<<'\n';

        vector<int> vc;
        int val=-1;
        for(int i=0;i<n;i++){
            if(find(mxx.begin(), mxx.end(), a[i])!=mxx.end()){
                vc.push_back(i - val);
                auto el=find(mxx.begin(), mxx.end(), a[i]);
                mxx.erase(el);
                val=i;
                k--;
            }
        }

        int sum=0;
        for(int i=0;i<vc.size()-1;i++){
            cout<<vc[i]<<' ';
            sum+=vc[i];
        }
        cout<<n-sum<<' ';
    }
    return 0;
}
