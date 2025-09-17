#include <iostream>
#include <string>
using namespace std;
// Base class
class Person {
protected:
    string name;
    long long phoneNo;

public:
    Person(string pname, long long pphone) {
        name = pname;
        phoneNo = pphone;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phoneNo << endl;
    }
};

// Derived class 1
class Passenger : public Person {
protected:
    int seatNo;

public:
    Passenger(string pname, long long pphone, int pseat)
        : Person(pname, pphone) {
        seatNo = pseat;
    }

    void showPassenger() {
        cout << "Seat No: " << seatNo << endl;
    }
};

// Derived class 2
class Booking : public Passenger {
private:
    int busNo;
    string status;

public:
    Booking(string pname, long long pphone, int pseat, int pbusNo, string pstatus)
        : Passenger(pname, pphone, pseat) {
        busNo = pbusNo;
        status = pstatus;
    }

    void showBooking() {
        showPerson();
        showPassenger();
        cout << "Bus No: " << busNo << endl;
        cout << "Booking Status: " << status << endl;
    }
};

int main() {
    // Create a booking
    Booking b1("Kishan", 6648912030, 12, 101, "Confirmed");

    // Display all details using the final derived class
    b1.showBooking();

    return 0;
}
