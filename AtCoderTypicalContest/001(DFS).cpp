#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int H,W;

const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};

bool seen[510][510];
char field[510][510]={};

void dfs(int h, int w){
    seen[h][w]=true;

    int nh,nw;
    for(int i=0;i<4;i++){
        nw = w+dx[i];
        nh = h+dy[i];

        if(nw<0 || nw>=W || nh<0 || nh>=H)continue;
        if(field[nh][nw]='#')continue;

        if(seen[nh][nw])continue;

        dfs(nh,nw);
    }
}
int main() 
{
    cin >> H >> W;
    int sh,sw,gh,gw;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> field[i][j];
            if(field[i][j]=='s'){sh=i;sw=j;}
            if(field[i][j]=='g'){gh=i;gw=j;}
        }
    }
    memset(seen,0,sizeof(seen));

    dfs(sh,sw);

    if(seen[gh][gw]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}