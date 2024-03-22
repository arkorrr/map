#include <iostream>
#include <map>

using namespace std;

class Student
{
public:
    string name;
    Student(const string& name) : name(name) {}

    bool operator<(const Student& other) const {
        return name < other.name;
    }
    bool operator==(const Student& other) const {
        return name == other.name;
    }
};

int main()
{
    Student name1("Bogdan");
    Student name2("Vika");
    Student name3("Dima");
    Student name4("Andrey");
    Student name5("Nikita");
    multimap<Student, int> mmap = 
    {
        {name1,5},
        {name2,3},
        {name3,4},
        {name4,1},
        {name5,2},
    };
    auto it = mmap.find(name1);
    if (it != mmap.end()) 
    {
        cout << "Student: " << it->first.name << ", Average mark: " << it->second << endl;
    }
    else {
        cout << "Student was not founded." << endl;
    }
}
