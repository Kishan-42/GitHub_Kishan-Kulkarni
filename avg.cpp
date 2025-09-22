#include <iostream>
using namespace std;
int main() {
    int marks[5];   // array to store 5 marks
    int sum = 0;
    float average, percentage;

    cout << "Enter 5 subject marks (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
// calculate average and percentage
    average = sum / 5.0;
    percentage = (sum / 500.0) * 100;

    cout << "\n--- Student Marks ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
cout << "Total Marks   : " << sum << "/500" << endl;
    cout << "Average Marks : " << average << endl;
    cout << "Percentage    : " << percentage << "%" << endl;
return 0;
}
