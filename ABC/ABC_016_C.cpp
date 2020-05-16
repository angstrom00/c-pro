#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,m;
    cin >> n >> m;

    int a[n+10][n+10];
    REP(i,n){
        REP(j,n){
            a[i][j]=0;
        }
    }

    REP(i,m){
        int x,y;
        cin >> x >> y;
        a[x][y]++;
        a[y][x]++;
    }

    int fre[n+10][n+10];
    REP(i,n){
        REP(j,n){
            fre[i][j]=0;
        }
    }


    REP(i,n){
        REP(j,n){
            if(a[i][j]){
                for(int k=1;k<=n;k++){
                    if((a[k][j]==1&&a[i][k]==0)&&k!=i){
                        fre[i][k]=1;    
                    }
                }
            }
        }
    }

	// REP(i,n){
    //   REP(j,n){
    //     cout << a[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    REP(i,n){
    int ans=0;
        REP(j,n){
            if(fre[i][j])ans++;
        }
        cout << ans << endl;
    }

}