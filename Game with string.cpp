#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    bool first=false,found=true;

    vector<char> v(s.length());

    for(int i=0;i<s.length();i++){
        v[i]=s[i];
    }

//    for(int i=0;i<v.size();i++){
//        cout<<v[i];
//    }
//    cout<<'\n';

    int k;

    while(found){
        if(v.size()==0)
            break;
        k=0;
        for(auto i=v.begin();i!=v.end();i++,k++){
            //cout<<"iteration: "<<k<<'\n';
            if(i+1!=v.end() && *i==*(i+1)){
                //cout<<*i<<' '<<*(i+1)<<'\n';
                v.erase(i);
                v.erase(i);
                //cout<<"erased\n";
                if(first){
                    first=false;
                }
                else{
                    first=true;
                }
                found=true;
                break;
            }
            else{
                found=false;
            }
        }

//        for(int i=0;i<v.size();i++){
//            cout<<v[i]<<' ';
//        }
//        cout<<'\n';
    }

    if(first){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
