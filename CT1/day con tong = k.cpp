#include <bits/stdc++.h>
using namespace std;

int n;
int arr[11]; 
vector<int> vec;
void in(){
    cout<<'['<<vec[0];
    for(int i(1);i<vec.size();i++) cout<<' '<<vec[i];
    cout<<"] ";
}
void Try(int k,int x){
    for(int i(x);i<n;i++) 
        if(arr[i]<=k) {
                vec.push_back(arr[i]); 
                Try(k-arr[i],i+1); 
                if(k-arr[i]==0) in(); 
                vec.pop_back();
            }
}
main(){
int t; cin>>t;
while(t--){
        int k; cin>>n>>k;
        for(int i(0);i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        Try(k,0);
        cout<<'\n';
    }
}

/*
    k=50; 
    5 10 15 20 25 
        try(k,0){
            if(k==0) in();
            for(0 -> n) if(arr[i]<=k) {vec.push(arr[i]); Try(k-arr[i],i+1); vec.pop();}
                            
        }
*/