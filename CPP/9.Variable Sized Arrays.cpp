#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{ 
    int w;
    int x;
    cin >> w >> x;
    vector<int> a[w];
    for(int i = 0; i < w; i++){
        int y;
        cin >> y;
        int o;
        for(int j = 0; j < y; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    
    int u, v;
    for(int k = 1; k <= x; k++){
        cin >> u >> v;
        cout << a[u][v] << endl;
    }
    return 0;
}
