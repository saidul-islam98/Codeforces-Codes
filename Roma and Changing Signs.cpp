#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long int sum=0;
    vector<int> pos,neg;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=0){
            pos.push_back(x);
        }
        else{
            neg.push_back(x);
        }
    }

    if(neg.size()==0){
        if(k%2==0){
            for(int i=0;i<pos.size();i++){
                sum+=pos[i];
            }
            cout<<sum;
        }
        else{
            for(int i=1;i<pos.size();i++){
                sum+=pos[i];
            }
            sum=sum-pos[0];
            cout<<sum;
        }
    }
    else if(pos.size()==0){

        if(neg.size()>k){
            int z=neg.size()-k;
            for(int i=0;i<k;i++){
                sum+=abs(neg[i]);
            }
            for(int i=k;i<k+z;i++){
                sum+=neg[i];
            }

            cout<<sum;
        }
        else if(neg.size()==k){
            for(int i=0;i<neg.size();i++){
                sum+=abs(neg[i]);
            }
            cout<<sum;
        }
        else{
            int z=k-neg.size();
            for(int i=0;i<neg.size()-1;i++){
                sum+=abs(neg[i]);
            }
            if(z%2==0){
                sum=sum-neg[neg.size()-1];
                cout<<sum;
            }
            else{
                sum=sum+neg[neg.size()-1];
                cout<<sum;
            }
        }
    }
    else{
        int c=pos[0],d=abs(neg[neg.size()-1]);
        if(pos.size()>1){
            for(int i=1;i<pos.size();i++){
                sum+=pos[i];
            }
        }
        if(neg.size()>k){
            int z=neg.size()-k;
            for(int i=0;i<k;i++){
                sum+=abs(neg[i]);
            }
            for(int i=k;i<k+z;i++){
                sum+=neg[i];
            }

            cout<<sum+pos[0];
        }
        else if(neg.size()==k){
            for(int i=0;i<neg.size();i++){
                sum+=abs(neg[i]);
            }
            cout<<sum+c;
        }
        else{
            int z=k-neg.size();
            for(int i=0;i<neg.size()-1;i++){
                sum+=abs(neg[i]);
            }
            if(z%2==0){
                if(c>=d){
                    sum=sum+d;
                    cout<<sum+c;
                }
                else{
                    sum=sum+d-c;
                    cout<<sum;
                }
            }
            else{
                if(c>=d){
                    sum=sum-d+c;
                    cout<<sum;
                }
                else{
                    sum=sum+d-c;
                    cout<<sum;
                }

            }
        }
    }

    return 0;
}
