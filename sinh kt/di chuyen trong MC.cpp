#include <bits/stdc++.h>
using namespace std;

int n,check;
int arr[9][9];
int tem[9][9]; 
vector<char> vec;

void in(){
    for(int i(0);i<vec.size();i++) cout<<vec[i];
    cout<<' ';
}
void Try(int x,int y){
    
    if(x==n-1&&y==n-1) {
        in();
        check=1;
    }
    tem[x][y]=1;
    if(x<n-1&&arr[x+1][y]==1&&tem[x+1][y]==0) { vec.push_back('D'); Try(x+1,y); vec.pop_back(); }
    if(y<n-1&&arr[x][y+1]==1&&tem[x][y+1]==0) { vec.push_back('R'); Try(x,y+1); vec.pop_back(); }
    if(y>0&&arr[x][y-1]==1&&tem[x][y-1]==0)  { vec.push_back('L'); Try(x,y-1); vec.pop_back(); }
    if(x>0&&arr[x-1][y]==1&&tem[x-1][y]==0)  { vec.push_back('U'); Try(x-1,y); vec.pop_back(); }
    tem[x][y]=0;

}
main(){
int t; cin>>t;
while(t--){

        cin>>n;
        for(int i(0);i<n;i++)
        for(int j(0);j<n;j++) {cin>>arr[i][j]; tem[i][j]=0;}

        check=0;
        Try(0,0);
        if(!check) cout<<"-1";
        cout<<'\n';
    }
}