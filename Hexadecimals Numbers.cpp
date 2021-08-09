#include<bits/stdc++.h>

using namespace std;

vector<long long int> vc;

long long int decToBinary(long long int n){

    int binaryNum[1024];
    long long int x=0;
    int i = 0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        //cout<<binaryNum[j]<<' '<<j<<'\n';
        x+=(binaryNum[j]*pow(10,j));
    }

    //cout<<x;
    return x;
}

int main(){
    long long int n;
    cin>>n;

    //decToBinary(n);
    for(int i=0;i<1024;i++)
        vc.push_back(decToBinary(i));

    for(int i=1;i<1024;i++){
        if(vc[i]>n){
            cout<<i-1;
            break;
        }
        //cout<<i<<':'<<' '<<vc[i]<<'\n';
    }
    return 0;
}
