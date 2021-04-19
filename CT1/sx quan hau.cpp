#include <bits/stdc++.h>
using namespace std;

int n,c; 
int row[21],cc[21],cp[21];
void  Try(int k){
        for(int i(0);i<n;i++) 
        if(row[i]==0&&cc[k+(n-1)-i]==0&&cp[i+k]==0) { 
            if(k==n-1) {c=c +1; return;}
            row[i]=1; 
            cc[k+(n-1)-i]=1; 
            cp[i+k]=1; 

            Try(k+1); 

            row[i]=0; 
            cc[k+(n-1)-i]=0; 
            cp[i+k]=0; 
        }
}

main(){
    int t; cin>>t;
    while(t--){
        for(int i(0);i<21;i++) row[i]=cc[i]=cp[i]=0; //row[i]=0; cc[i]=0; cp[i]=0;{}
        cin>>n;
        c = 0;
        Try(0);
        cout<<c<<'\n';
    }
}
/*
    int n;
    arr[n][n]; row[n]; cheo
    1 0 0 0
    0 0 1 0      // cheo chinh cc[] =y+((n-1)-x)
    0 1 0 0        // cheo phu cp[n*2] = x+y
    0 0 0 1
    try(int k){
        for(int i(0);i<n;i++) 
        if(row[i]==0&&cc[y+(n-1)-x]==0&&cp[x+y]==0) { 
            if(k==n-1) count++;
            row[i]=1; 
            cc[y+(n-1)-x]=1; 
            cp[x+y]=1; 

            Try(k+1); 

            row[i]=0; 
            cc[y+(n-1)-x]=0; 
            cp[x+y]=0; 
        }
    }
*/