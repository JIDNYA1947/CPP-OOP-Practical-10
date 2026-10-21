#include <iostream>
using namespace std;

template <class T>
T calculateTotal(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    int m1, m2, m3;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    cout << "Total Marks: "
         << calculateTotal(m1, m2, m3) << endl;

    return 0;
}
