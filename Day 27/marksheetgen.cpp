#include <iostream>
using namespace std;

int main() {

    string name;
    int m1, m2, m3,m4,m5, total;
    float percent;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;

    percent = total / 5.0;

    cout << "\n----- MARKSHEET -----";
    cout << "\nName: " << name;

    cout << "\nTotal: " << total;

    cout << "\nPercentage: " << percent << "%";

    if (percent >= 90)
        cout << "\nGrade A";

    else if (percent >= 75)
        cout << "\nGrade B";

    else if (percent >= 50)
        cout << "\nGrade C";

    else
        cout << "\nFail";

    return 0;
}