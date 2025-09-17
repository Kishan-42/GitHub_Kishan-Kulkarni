#include <iostream>
#include <string>
using namespace std;

class Bus_Details {
    public:
        int Bus_No;
        long long Phone_no;    // Use long long for large numbers like phone numbers
        string Bus_Name;
        float price;
        string Pass_Name;

    // Default constructor
    Bus_Details() {
        Bus_No = 0;
        Phone_no = 0000000000;
        Bus_Name = "xxx";
        price = 0.0;
        Pass_Name = "yyy";
    }

    // Function to display the ticket details
    void showTicket() {
        cout << "Bus Number: " << Bus_No << endl;
        cout << "Phone Number: " << Phone_no << endl;
        cout << "Bus Name: " << Bus_Name << endl;
        cout << "Price: " << price << endl;
        cout << "Passenger Name: " << Pass_Name << endl;
    }
};

int main() {
    // Creating object of Bus_Details using default constructor
    Bus_Details t1;

    // Showing ticket information
    t1.showTicket();

    return 0;
}






