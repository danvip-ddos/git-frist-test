#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
        string x,y; cin>>x>>y;
        int lenX(x.length()),lenY(y.length());
        int arr[lenX+1][lenY+1];
        memset(arr,0,sizeof(arr));
        for(int i(1);i<=lenX;i++){
            int ok=0;
            for(int j(1);j<=lenY;j++){
                if(ok==0&&x[i-1]==y[j-1]) {arr[i][j]=arr[i][j-1]+1; ok=1;}
                else arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }             
        }

        cout<<arr[lenX][lenY]<<'\n';
    }
}
