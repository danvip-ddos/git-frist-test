#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
    int n,count(0); cin>>n;

    int begin[n],end[n];

    for(int i(0);i<n;i++) cin>>begin[i];
    for(int i(0);i<n;i++) cin>>end[i];

    for(int i(0);i<n-1;i++)
        for(int j(i+1);j<n;j++) 
            if(end[i]>end[j]) {swap(end[i],end[j]); swap(begin[i],begin[j]);}

    int time(0);
    for(int i(0);i<n;i++)
        if(time<= begin[i]){
            time=end[i];
            count++;
        }
    cout<<count<<'\n';
    for(int i(0);i<n;i++) cout<<begin[i]<<' ';
    cout<<'\n';
    for(int i(0);i<n;i++) cout<<end[i]<<' '; 
    cout<<'\n';   
    }

}
/*
2 6
1 3 3 5 5 7
2 6 4 9 6 8 
*/