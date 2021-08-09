#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,r;
    cin>>n>>r;

    double R;
    double pi = 2 * acos(0.0);
    double cosine = cos((2*pi)/n);
    R=(r*sqrt((1-cosine)/2))/(1-sqrt((1-cosine)/2));
    printf("%.7f",R);
    return 0;
}
