#include <iostream>
#include <map>

using namespace std;

int main() {
    int number, option, mark;
    cin >> number;
    map<string, int> m;
    string name;
    while(number--){
        cin >> option >> name;
        if(option == 1){
            cin >> mark;
            m.find(name) != m.end() ? m[name] += mark : m[name] = mark;
        }
        if(option == 2)
            m.erase(name);
        if(option == 3)
            cout << m[name] << endl;
    }
    return 0;
}
