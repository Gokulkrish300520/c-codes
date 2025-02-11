#include <iostream>
using namespace std;

int main() {
    int Physics, Chemistry, Maths;
    string input;

    do {
        cout << "Engineering Cut-off Calculator" << endl;
        cout << "Enter your marks for Physics: ";
        cin >> Physics;
        cout << "Enter your marks for Chemistry: ";
        cin >> Chemistry;
        cout << "Enter your marks for Maths: ";
        cin >> Maths;

        cout << "Verify whether you entered correct marks for each subject." << endl;
        cout << "Press 'YES' to proceed (or) 'NO' to re-enter the details: ";
        cin >> input;
    } while (input != "YES");

    int result = (Physics + Chemistry) / 2 + Maths;
    cout << "Your Cut-off is: " << result << endl;

    return 0;
}
