// Write a program to calculate tuition fees. Read N students and fee of each. If fee > 45000 mark as “High Tuition”. Print total and “High Tuition” count. 

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of Students: ";
    cin >> N;

    if (N <= 0){
        cout << "Invalid Number";
        return 0;
    }

    double fee;
    long long total = 0;
    int highTuitionCount = 0;

    for (int i = 1; i <= N; i++) {
        cout << "Enter fee of student " << i << ": ";    
        cin >> fee;

        if (fee > 45000 ) {
            cout << "High Tuition" << endl;
            highTuitionCount++;
        }
        total += fee;
    }
    cout << "----------------------" << endl;
    cout << "Total Bill: " << total << endl;
    cout << "Students with \"High Tution\" count are: " << highTuitionCount << endl;
    cout << "----------------------" << endl;

    return 0;
}
