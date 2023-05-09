#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,n,q,i;
    vector<int> y;
    
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>a;
        y.push_back(a);
    }
    
    cin>>q;
    
    for(i=0;i<q;i++){
        cin>>b;
        vector<int>::iterator iter;
        iter = lower_bound(y.begin(), y.end(), b);
        if(*(iter+1)==b || *iter==b)
            cout<<"Yes "<<iter-y.begin()+1<<endl;
        
        else
            cout<<"No "<<iter-y.begin()+1<<endl;
    }
    
    return 0;
}
