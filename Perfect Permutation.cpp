#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int numba[101];
    int perm[101];
    cin>>n;
    if(n%2!=0){
        cout<<-1;
    }
    else{
        for(int i=1;i<=n;i++){
            numba[i]=i;
            //cout<<numba[i];
        }
        int temp;
        for(int i=1;i<=n;i++){
            temp=numba[i];
            numba[i]=numba[i+1];
            //cout<<numba[i];
            numba[i+1]=temp;
            //cout<<" "<<numba[i+1]<<endl;
            i++;
        }
        for(int i=1;i<=n;i++){
            cout<<numba[i]<<" ";
        }
    }

    return 0;
}
