#include <iostream>
#include <sstream>
using namespace std;

struct Student{
    private:
        int age, standard;
        string first_name, last_name;
    
    public:
        void set_age(int a){
            age = a;
        }  
        void set_standard(int stnd){
            standard = stnd;
        }
        void set_first_name(string fname){
            first_name = fname;
        }
        void set_last_name(string lname){
            last_name = lname;
        }
        
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
            stringstream out;
            out<<age<<","<<first_name<<","<<last_name<<","<<standard;
            return out.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
