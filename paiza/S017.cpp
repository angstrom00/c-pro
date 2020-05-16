#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int n,m,s,ptr=0,l,d,u,r;
    cin >> n >> m >> s;

    int A[s+10][s+10];

    rep(i,n){
        rep(j,n){
            cin >> A[i][j];
        } 
    }

    rep(i,n){
        rep(j,n){
            while(ptr<n){
                int cc=A[i][ptr], f=0;
                if(A[i][ptr] == '.'){
                    ptr++;
                    continue;
                    } 
                while(ptr<n  && A[i][ptr] == cc){
                    f++,ptr++;
                    if(f == m){
                        int g=0;
                        for(int k=i;k<n;k++){
                            if(A[k][ptr] != '.' && A[k][ptr] == cc){
                                g++;
                                if(g == m){
                                    d = k;
                                    u = k-m+1;
                                    l = ptr-m+1;
                                    r = ptr;
                                }
                            }
                            else
                                {
                                    break;
                                }
                                
                            
                        }
                    }
            


                }
            
            }
        }
    }


    int C[s+10];
    rep(i,s){
        C[s]=0;
    }

    if(u > 0){
        for(int i=l ; i<=r;i++){
            C[A[u-1][i]]++;
        }
    }
    
    if(d < n-1){
        for(int i=l ; i<=r;i++){
            C[A[d+1][i]]++;
        }
    }
    if(l > 0){
        for(int i=u ; i<=d;i++){
            C[A[i][l-1]]++;
        }
    }
    if(r < n-1){
        for(int i=u ; i<=d;i++){
            C[A[i][r+1]]++;
        }
    }

    
}