#include <iostream>
using namespace std;
// student class (class is a blueprint)
class Student
{
private:
    int cgpa;
    string name;

public:
    int age;
    char gender;

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    void setName(string s)
    {
        name = s;
    }
    string getName()
    {
        return name;
    }
    //* The constructors
    /**
     * * default constructor
     */
    Student()
    {
        cout << "Default Constructor\n";
    }
    /**
     * * parameterised constructor
     * @param s:name
     * @param a:age
     * @param g:gender
     */
    Student(string s, int a, char g)
    {
        cout << "Parameterised Constructor\n";
        name = s;
        age = a;
        gender = g;
    }
    /**
     * * Copy constructor
     * * here deep copy occurs
     * @param &a : source object location
     */
    Student(Student &a)
    {
        cout << "Copy Constructor\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    /**
     * * Destructor
     * ~ is used
     */
    ~Student()
    {
        cout << "Destructor called\n";
    }
    /**
     * Operator overloading
     * * return_type "operator" operator(type &parameter)
     */
    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
            return true;
        else
            return false;
    }
};
int main(int argc, char const *argv[])
{
    //* object of class student
    Student a;

    a.setName("Pritam");
    a.age = 19;
    a.gender = 'M';
    a.printInfo();

    //* array of objects
    // Student arr[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name: ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "age: ";
    //     cin >> arr[i].age;
    //     cout << "gender: ";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    //* objects using constructors
    Student b("billy", 45, 'M');
    b.printInfo();

    //* copy constructor
    Student c = a; // or Student c{a};
    c.printInfo();

    if (c == a)
        cout << "They are same\n";
    else
        cout << "They are not same\n";
    if (c == b)
        cout << "They are same\n";
    else
        cout << "They are not same\n";
    return 0;
}
