#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    for(i=n; i>0 ; i--)
    {
        cout<<arr[i-1]<<" ";
    }  
    return 0;
}
