#include <iostream>
using namespace std;

template <class T>
class Student
{
    int rollNo;
    T m1, m2, m3;

public:
    Student(int r, T a, T b, T c)
    {
        rollNo = r;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << m1 << ", " << m2
             << ", " << m3 << endl;
        cout << "Total Marks: " << m1 + m2 + m3 << endl;
    }
};

int main()
{
    Student<int> s1(1, 80, 75, 90);
    Student<float> s2(2, 85.5, 70.5, 90.0);

    cout << "Student 1 Result" << endl;
    s1.display();

    cout << "\nStudent 2 Result" << endl;
    s2.display();

    return 0;
}
