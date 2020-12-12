#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cnt=0;
    cin>>n;
    bool up=false,down=false,left=false,right=false;
    int cord[n][2];
    int cordc[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>cord[i][j];
            cordc[i][j]=cord[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                if(cordc[j][0]>cord[i][0] && cordc[j][1]==cord[i][1]){
                    right=true;
                }
                else if(cordc[j][0]<cord[i][0] && cordc[j][1]==cord[i][1]){
                    left=true;
                }
                else if(cordc[j][0]==cord[i][0] && cordc[j][1]<cord[i][1]){
                    down=true;
                }
                else if(cordc[j][0]==cord[i][0] && cordc[j][1]>cord[i][1]){
                    up=true;
                }
            }

        }

        if(up==true && down==true && left==true && right==true){
            cnt++;
            up=false;
            down=false;
            left=false;
            right=false;
        }
        else{
            up=false;
            down=false;
            left=false;
            right=false;
        }
    }

    cout<<cnt;
    return 0;
}



