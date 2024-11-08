#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string student_name;
    int student_age;
    string student_enroll_no;
    float student_marks;

public:
    Student(string sn, int sa, string se, float sm)
        : student_name(sn), student_age(sa), student_enroll_no(se), student_marks(sm) {}

    void display() const {
        cout << "Student Details:" << endl;
        cout << "Name: " << student_name << endl;
        cout << "Age: " << student_age << endl;
        cout << "Enrollment No: " << student_enroll_no << endl;
        cout << "Marks: " << student_marks << endl;
    }
};

class Faculty {
protected:
    string faculty_name;
    int faculty_age;
    string faculty_code;
    float faculty_salary;
    int faculty_experience;
    string faculty_gender;

public:
    Faculty(string fn, int fa, string fc, float fs, int fe, string fg)
        : faculty_name(fn), faculty_age(fa), faculty_code(fc), faculty_salary(fs), faculty_experience(fe), faculty_gender(fg) {}

    void display() const {
        cout << "Faculty Details:" << endl;
        cout << "Name: " << faculty_name << endl;
        cout << "Age: " << faculty_age << endl;
        cout << "Code: " << faculty_code << endl;
        cout << "Salary: " << faculty_salary << endl;
        cout << "Experience: " << faculty_experience << " years" << endl;
        cout << "Gender: " << faculty_gender << endl;
    }
};

class Person : public Student, public Faculty {
public:
    Person(string sn, int sa, string se, float sm, string fn, int fa, string fc, float fs, int fe, string fg)
        : Student(sn, sa, se, sm), Faculty(fn, fa, fc, fs, fe, fg) {}

    void display() {
        Student::display();
        cout << endl;
        Faculty::display();
    }
};

int main() {
    
    Person p("Akshat", 18, "S12345", 94, "Mr Piyush", 45, "F67890", 100000.0, 20, "Male");
 
    p.display();

    return 0;
}
