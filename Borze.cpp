#include<bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string borze;
    vector<char> output;
    cin>>borze;
    for(int i=0;i<borze.length();i++){
        if(borze[i]=='-' && borze[i+1]=='.'){
            output.push_back('1');
            i++;
        }
        else if(borze[i]=='-' && borze[i+1]=='-'){
            output.push_back('2');
            i++;
        }
        else{
            output.push_back('0');
        }
    }
    //cout<<output;
    for (auto i = output.begin(); i != output.end(); ++i)
        cout <<*i;
    return 0;
}
