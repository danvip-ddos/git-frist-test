#include <bits/stdc++.h>
using namespace std;

int n,ans;
int arr[31]; 


void Try(int k,int x,int &count){         
    for(int i(x);i<n;i++) 
        if(k-arr[i]>0){
            count++;
            Try(k-arr[i],i+1,count);
            count--;
        }
        else if(k-arr[i]==0) { ans=min(ans,count+1); }                        
}
main(){
int t; cin>>t;
while(t--){
        int k; cin>>n>>k; ans=39;
        for(int i(0);i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int count =0; 

        Try(k,0,count);
        if(ans==39) cout<<"-1\n";
         else cout<<ans<<'\n';
    }
}

/*
    k=50; 
    5 10 15 20 25 
        try(k,0){
            
            for(int i(x);i<n;i++) 
            if(s-arr[i]>0){
                Try(s-arr[i],i+1);
            }
            else if(s-arr[i]==0) count ++;
                            
        }
*/