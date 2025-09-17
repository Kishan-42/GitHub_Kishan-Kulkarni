#include <iostream>
using namespace std;

// Structure for Bus Ticket
struct Bus_Ticket {
    string Passenger_Name;
    int Seat_Number;
    float price;
};

// Function to display ticket details using a pointer
void displayTicket(Bus_Ticket *ticket) {
    cout << "Passenger Name: " << ticket->Passenger_Name << endl;
    cout << "Seat Number: " << ticket->Seat_Number << endl;
    cout << "Price: " << ticket->price << " Rs." << endl;
}

// Function to update fare using a pointer
void updateFare(Bus_Ticket *ticket, float newPrice) {
    ticket->price = newPrice;
}

int main() {
    // Create a Bus_Ticket object
    Bus_Ticket ticket1 = {"Kishan Kulkarni", 2, 1500.00};

    // Pointer to Bus_Ticket
    Bus_Ticket *ptr = &ticket1;

    cout << "Original Ticket Details:\n";
    displayTicket(ptr); // Accessing using pointer

    // Update price using pointer
    updateFare(ptr, 2000.00);

    cout << "\nUpdated Ticket Details:\n";
    displayTicket(ptr);

    return 0;
}

