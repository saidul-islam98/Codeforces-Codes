#include<bits/stdc++.h>

using namespace std;

int decToBinary(int n){
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main(){
    long long int n;
    cin>>n;

    decToBinary(n);
    return 0;
}
