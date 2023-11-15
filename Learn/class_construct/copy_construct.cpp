#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

class Student{
private:
    int SID = -1;
    string name = string("NULL");

public:
    Student(int id, string str) :
        SID(id),
        name(str){}

    Student(const Student&){
        name = "COPY";
    }

    void showInfo(){
        cout << "SID: " << SID << endl;
        cout << "Name: " << name << endl;
    }

};

int main(){
    Student s1(12012727, "Duolei Wang");
    Student s2 = s1;
    s1.showInfo();
    s2.showInfo();
    return 0;
}