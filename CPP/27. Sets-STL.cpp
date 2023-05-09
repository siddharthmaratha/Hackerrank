#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q,x,y,v;
    set<int>s;
    cin>>q;
    
    for(int i=0;i<q;i++){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            auto v= s.find(x);
            if(v!=s.end())
                cout<<"Yes"<<endl;
            
            else
                cout<<"No"<<endl;
        }
    }
      
    return 0;
}
