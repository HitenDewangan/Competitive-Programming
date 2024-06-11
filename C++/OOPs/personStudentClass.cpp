#include <iostream>
using namespace std;

class person {
public:
    char name[20];
    int id;
    bool gender = false; // Initialize gender to false by default
};

class student {
public:
    string name;
    int age;
    bool gender;

    // default constructor
    student() {
        cout << "default constructor called" << endl;
    }

    // parameterised constructor
    student(string s, int age, bool gen) {
        name = s;
        this->age = age; // Use 'this' pointer to avoid confusion with local variable 'age'
        gender = gen;
    }

    // copy constructor
    student(const student &a) {
        cout << "copy constructor called" << endl;   
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void setName(string s) {     // setter
        name = s;
    }

    void getName() {             // getter
        cout << name << endl;
    }

    void printInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "gender : " << (gender ? "Male" : "Female") << endl; // Use conditional expression for readable output
    }
};

int main() {
    person p1; // p1 is an object

    student a;           // default constructor called
    // a.name = "Hiten";   // Error: name is private member
    a.setName("Hiten");
    a.age = 19;
    a.gender = true; // Assuming 1 represents male

    student aa = student("Hiten", 19, true); // parameterised constructor called
    aa.printInfo();

    student b;  // default constructor called

    student c = a;  // copy constructor called
    student cc(a);  // copy constructor called

    return 0;
}
