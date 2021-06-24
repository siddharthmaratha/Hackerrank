#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    string str[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine "
               }; 

    int k,s;
    cin>>k>>s;
    for(int i=k;i<=s;i++){
        if(i<=9){
            cout<<str[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }
    }
    
return 0;
}
