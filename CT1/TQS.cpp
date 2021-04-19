#include <bits/stdc++.h>
using namespace std;


main(){
int t; cin>>t;
while(t--){
        int c(0);
        int n,k; cin>>n>>k;
        int arr[k];int tem[k];
        for(int i(0);i<k;i++) {cin>>arr[i]; tem[i]=arr[i];}
        for(int i(k-1);i>-1;i--){
        
            if(tem[i]<n-(k-1-i)) {
                tem[i]++;
                for(int j(i+1);j<n;j++) tem[j]=tem[j-1]+1;
            }
        }
        for(int i(0);i<k;i++) {
            for(int j(0);j<k;j++) if(tem[i]==arr[j]) {c++;break;}
        }
        int t(0);
        for(int i(k-1);i>-1;i--) if(tem[i]==n-(k-1-i)) t++;
        if(t==k) cout<<k<<'\n';
        else cout<<k-c<<'\n';
    }
}