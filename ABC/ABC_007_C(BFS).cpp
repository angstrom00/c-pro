#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

int R,C;
int sy,sx,gy,gx;
const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};

int dist[60][60];
char field[60][60];
queue<int> Q;

void bfs(){
    rep(i,50)rep(j,50)dist[i][j]=INF;
    dist[sx][sy]=0;
    Q.push(sx*1000+sy);
    while(!Q.empty()){
        int x=Q.front()/1000,y=Q.front()%1000;
        cout << x << " " << y << endl;
        Q.pop();
            for(int i=0;i<4;i++){   
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<1||nx>C||ny<1||ny>R)continue;
                if(field[nx][ny]=='#')continue;
                if(dist[nx][ny]<=dist[x][y]+1)continue;
                dist[nx][ny]=dist[x][y]+1;
                Q.push(nx*1000+ny);
            }
    }
}




int main() 
{
    cin >> R >> C;
    cin >> sy >> sx >> gy >> gx;
    
    REP(i,R){
        REP(j,C){
            cin >> field[j][i];
        }
    }

    bfs();

    cout << dist[gx][gy] << endl;
}