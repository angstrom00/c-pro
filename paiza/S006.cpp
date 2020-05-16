#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int a, b, x, y, r, c, l, n, m;
    cin >> a >> b >> x >> y >> r >> c >> l;

    int i=0;
    if(cos(c*PI/180.0)>0){
    while(1){
        if(i*(a-2*r)+a-r-x<=l*(double)(cos(c*PI/180.0)))
        i++;
        else
        {
            break;
        }
    }
    }
    else
    {
        while(1){
            if(x-r+i*(a-2*r)<=-1*l*cos(c*PI/180.0))
                i++;
                else
                {
                    break;
                }
                
        }
    }
    


    int j=0;
    if(sin(c*PI/180.0)>0){
    while(1){
        if(j*(b-2*r)+b-r-y<=l*(double)(sin(c*PI/180.0)))
            j++;
        else
            break;
    }
    }
    else
    {
    
        while(1){
          if(y-r+j*(b-2*r)<=abs(l*(double)(sin(c*PI/180.0))))
               j++;
              else
              {
                  break;
              }
               
           }
    
    }
    

    double res_x; 
    double res_y;

    cout << n << " " << m << " ";
    if(cos(c*PI/180.0)>0){
    if(i%2 == 1){
        res_x = a-(l*(double)(cos(c*PI/180.0))-((i-1)*(a-2*r)+a-r-x)+r);
    }
    if(i%2 == 0)
    {
        res_x = l*(double)(cos(c*PI/180.0))-((i-1)*(a-2*r)+a-r-x)+r;
        
    }
    }
    else
    {
        if(i%2 == 1)
            res_x = l*(double)(cos(c*PI/180.0))-((i-1)*(a-2*r)+x-r)+r;
            else
            {
                a-(l*(double)(cos(c*PI/180.0))-((i-1)*(a-2*r)+x-r)+r);
            }
            
    }
    

    cout << i << " ";
    if(sin(c*PI/180.0)>0){
        if(j%2 == 1){
            res_y = b-(l*(double)(sin(c*PI/180.0))-((j-1)*(b-2*r)+b-r-y)+r);
        }
        if(j%2 == 0){
            res_y = l*(double)(sin(c*PI/180.0))-((j-1)*(b-2*r)+b-r-x)+r;
        }
    }
    else
    {
        if(j%2 == 1){
            res_y = l*(double)(sin(c*PI/180.0))-((j-1)*(b-2*r)+y-r)+r;
        }
        else
        {
            res_y= a-(l*(double)(sin(c*PI/180.0))-((j-1)*(b-2*r)+y-r)+r);
        }
        
    }
    
    
    cout << std::setprecision(10) << res_x <<" "<< std::setprecision(10) << res_y << endl;


}