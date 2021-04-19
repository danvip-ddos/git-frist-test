#include<bits/stdc++.h>
using namespace std;


main(){
        int t;cin>>t;
        while(t--){
            int n;cin>>n;
            int temp[n],arr[n];
            for(int i(0);i<n;i++) {
                cin>>arr[i];
                temp[i]=arr[i];
            }
            int ok(1);
            sort(temp,temp+n);
            for(int i(0);i<n/2;i++){
                vector<int> myVec;
                myVec.push_back(arr[i]);
                myVec.push_back(arr[n-1-i]);
                sort(myVec.begin(),myVec.end());
                if(myVec[0]==temp[i] and myVec[1]==temp[n-1-i]) ;
                else {
                    ok=0;
                    break;
                }
            }
            if(ok) cout<<"Yes\n";
            else cout<<"No\n";
        }
}
