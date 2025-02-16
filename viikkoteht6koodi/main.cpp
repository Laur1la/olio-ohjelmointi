#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student {
public:
    Student(string name, int age) : name(name), age(age) {}
    string getName() const { return name; }
    int getAge() const { return age; }
    void printStudentInfo() const { cout << "Name: " << name << ", Age: " << age << endl; }

private:
    string name;
    int age;
};

int main ()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            string name;
            int age;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student age: ";
            cin >> age;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(name, age));
            break;
        }
        case 1:
        {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet ja iät
            for (const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 2:
        {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 3:
        {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getAge() < b.getAge();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (const auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            string name;
            cout << "Enter student name to find: ";
            cin >> name;
            // Etsi studentListan opiskelijoista algoritmikirjaston find_if funktion avulla löytyykö käyttäjän antamaa nimeä listalta.
            auto it = find_if(studentList.begin(), studentList.end(), [&name](const Student& student) {
                return student.getName() == name;
            });
            // Jos löytyy, niin tulosta opiskelijan tiedot.
            if (it != studentList.end()) {
                it->printStudentInfo();
            } else {
                cout << "Student not found." << endl;
            }
            break;
        }
        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
