#include <iostream>
#include <string>
using namespace std;

class BusTicket {
private:
    string passengerName;
    int age;
    string from, to;
    int seatNo;
    float fare;

public:
    // Default constructor
    BusTicket() {
        passengerName = "";
        age = 0;
        from = "";
        to = "";
        seatNo = 0;
        fare = 0;
    }

    // Function to book ticket
    void bookTicket() {
        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, passengerName);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter From Location: ";
        cin >> from;
        cout << "Enter To Location: ";
        cin >> to;
        cout << "Enter Seat Number: ";
        cin >> seatNo;
        cout << "Enter Fare: ";
        cin >> fare;

        cout << "\n✅ Ticket booked successfully!\n";
    }

    // Function to display ticket
    void displayTicket() {
        if (passengerName == "") {
            cout << "\n❌ No ticket booked yet.\n";
            return;
        }
        cout << "\n--- Ticket Details ---\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Age            : " << age << endl;
        cout << "From           : " << from << endl;
        cout << "To             : " << to << endl;
        cout << "Seat Number    : " << seatNo << endl;
        cout << "Fare           : Rs. " << fare << endl;
    }
};

int main() {
    BusTicket ticket; // object created
    int choice;

    do {
        cout << "\n===== BUS TICKET DBMS =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Ticket\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: ticket.bookTicket(); break;
        case 2: ticket.displayTicket(); break;
        case 3: cout << "Exiting program...\n"; break;
        default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
