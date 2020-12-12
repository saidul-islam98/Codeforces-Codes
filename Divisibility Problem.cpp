#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> numba;

    while(n--){
        int divs,divd,num;
        cin>>divd>>divs;
        if(divd>divs){
            if(divd%divs==0){
                num=0;
                numba.push_back(num);
            }
            else{
                num=divd%divs;
                num=divs-num;
                numba.push_back(num);
            }


        }
        else{
            num=divs-divd;
            numba.push_back(num);
        }

    }

    for(auto i=numba.begin();i!=numba.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
