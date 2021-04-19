#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int beg[n],end[n];
        for(int i(0);i<n;i++) {
            cin>>beg[i]>>end[i];
        }
        int count(0);
        for(int i(0);i<n-1;i++)
            for(int j(i+1);j<n;j++) if(end[i]>end[j]) { swap(end[i],end[j]); swap(beg[i],beg[j]); } 
        // co the cho vao struct -> giam DPT
        
        int cur = 0;
        for(int i(0);i<n;i++){
            if(beg[i]>cur) {
                count++;
                cur=end[i];
            }
        }
        cout<<count<<'\n';
    }
}
