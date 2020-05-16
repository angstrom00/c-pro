#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int h, w, cnt=0;
    cin >> h >> w;

    char A[h+10][w+10];
    char B[h+10][w+10];

    rep(i,h+1){
        rep(j,w+1){
            A[i][j]=0;
            B[i][j]=0;
        }
    }

    REP(i,h){
        REP(j,w){
            cin >> A[i][j];
        }
    }

    REP(i,h){
        REP(j,w){
            if(A[i][j] == '#'){
                B[i][j] = '#';
            }
            else
            {
                for(int k=i-1;k<=i+1;k++){
                    for(int l=j-1;l<=j+1;l++){
                        if(A[k][l]=='#')
                        	cnt++;
                    }
                }
                B[i][j]= 48+cnt;
                cnt=0;
            }
            

        }
    }
    REP(i,h){
        REP(j,w){
            cout << B[i][j];
        }
      cout << endl;
    }
  	cout << endl;
  


}