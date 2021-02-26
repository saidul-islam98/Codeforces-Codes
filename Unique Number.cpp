#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        if(x<10){
            cout<<x<<'\n';
        }
        else{
            vector<int> v;
            bool flag[10],finalflag=true;
            memset(flag,false,sizeof(flag));
            while(1){
                if(x-9>=0 && flag[9]==false){
                    v.push_back(9);
                    x-=9;
                    if(x==0)
                        break;
                    flag[9]=true;
                }
                else if(x-8>=0 && flag[8]==false){
                    v.push_back(8);
                    x-=8;
                    if(x==0)
                        break;
                    flag[8]=true;
                }
                else if(x-7>=0 && flag[7]==false){
                    v.push_back(7);
                    x-=7;
                    if(x==0)
                        break;
                    flag[7]=true;
                }
                else if(x-6>=0 && flag[6]==false){
                    v.push_back(6);
                    x-=6;
                    if(x==0)
                        break;
                    flag[6]=true;
                }
                else if(x-5>=0 && flag[5]==false){
                    v.push_back(5);
                    x-=5;
                    if(x==0)
                        break;
                    flag[5]=true;
                }
                else if(x-4>=0 && flag[4]==false){
                    v.push_back(4);
                    x-=4;
                    if(x==0)
                        break;
                    flag[4]=true;
                }
                else if(x-3>=0 && flag[3]==false){
                    v.push_back(3);
                    x-=3;
                    if(x==0)
                        break;
                    flag[3]=true;
                }
                else if(x-2>=0 && flag[2]==false){
                    v.push_back(2);
                    x-=2;
                    if(x==0)
                        break;
                    flag[2]=true;
                }
                else if(x-1>=0 && flag[1]==false){
                    v.push_back(1);
                    x-=1;
                    if(x==0)
                        break;
                    flag[1]=true;
                }

                if(flag[1]==true && x>0){
                    finalflag=false;
                    break;
                }
            }
            if(finalflag==true){
                for(int i=v.size()-1;i>=0;i--){
                    cout<<v[i];
                }
                cout<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
    }
    return 0;
}
