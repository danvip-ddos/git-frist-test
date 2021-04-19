#include<bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<long long,vector<long long>,greater<long long> > myQueue;
        for(int i(0);i<n;i++) {
            int x; cin>>x;
            myQueue.push(x);
        }
        
        long long ans(0);
        while(myQueue.size()>1){
            long long x=myQueue.top();
            myQueue.pop();
            long long y=myQueue.top();
            myQueue.pop();
            
            x+=y;
            ans+=x;
            myQueue.push(x);
        }
        cout<<ans<<'\n';
    }
}
