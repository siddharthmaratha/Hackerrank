#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int age;
        virtual void getdata(){
            cin>>this->name>>this->age;
        }
        virtual void putdata(){
            cout<<this->name<<" "<<this->age<<endl;
        }
};

class Professor : public Person{
    public:
        int publications, cur_id;  
        static int id;    
        
        Professor(){
            this->cur_id = ++id;
        }
         
        virtual void getdata(){
            cin>>this->name>>this->age>>this->publications;
        }
        virtual void putdata(){
            cout<<this->name<<" "<<this->age<<" "<<this->publications
            <<" "<<this->cur_id<<endl;
        }
};

int Professor::id=0;

class Student : public Person{
    public:
        int marks[6], cur_id,sum=0;
        static int id;
        
        Student(){
            this->cur_id = ++id;
        }
        
        virtual void getdata(){
            cin>>this->name>>this->age;
            for(int i=0; i<6; i++){
                cin>>marks[i];
                sum += marks[i];
            }
        }
        
        virtual void putdata(){
            cout<<this->name<<" "<<this->age<<" "<<this->sum
            <<" "<<this->cur_id<<endl;
        }
};

int Student::id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
