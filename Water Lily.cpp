#include<bits/stdc++.h>

using namespace std;

int main(){
    float l,h;
    cin>>h>>l;

    float ad=(l*l-h*h)/(2*h);
    printf("%.13f",ad);

    return 0;
}
