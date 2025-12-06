// Write a program for a mechanic shop to calculate spare-parts bill. Read integer N for number of parts replaced. For each read price. If price > 1500 tag as Premium Part. Sum and print total. Use IO, variables, loops, if/else. 

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of spare parts replaced: ";
    cin >> N;

    if (N <= 0){
        cout << "Invalid Number";
        return 0;
    }
    double price, total = 0;

    for (int i = 1; i <= N; i++) {
        cout << "Enter price of part " << i << ": ";    
        cin >> price;

        if (price > 1500) {
            cout << "Premium Part" << endl;
        }
        total += price;
        
    }
    cout << "----------------------" << endl;
    cout << "Total Bill: " << total << endl;
    cout << "----------------------" << endl;

    return 0;
}
