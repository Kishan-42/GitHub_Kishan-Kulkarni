
#include <iostream>
using namespace std;

class Bus_Ticket {
private:
    string Passenger_Name;
    int Seat_No;
    float price;

public:
    Bus_Ticket(string name, int seat, float price) {
        Passenger_Name = name;
        Seat_No = seat;
        this->price = price;
    }

    friend void displayTicketInfo(Bus_Ticket bt);
};

void displayTicketInfo(Bus_Ticket bt) {
    cout << "Passenger Name: " << bt.Passenger_Name << endl;
    cout << "Seat Number: " << bt.Seat_No << endl;
    cout << "Fare: " << bt.price << " Rs." << endl;
}

int main() {
    Bus_Ticket ticket1("ABC", 2, 1200);
    displayTicketInfo(ticket1);
    return 0;
}


