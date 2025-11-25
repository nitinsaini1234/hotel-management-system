#include <iostream>
#include <string>
using namespace std;
class Hotel{
private:
    string customerName;
    string customerAddress;
    int roomNo =0;
    int days ;
    int roomType; 
    float roomRent;
    float foodBill;

public:
    Hotel() {
        roomRent = 0;
        foodBill = 0;
    }

    void enterCustomerDetails() {
        cout << "\nEnter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Address: ";
        getline(cin, customerAddress);

        cout << "Enter Room Number: ";
        cin >> roomNo;

        cout << "Enter Room Type (1=Normal, 2=AC, 3=Luxury): ";
        cin >> roomType;

        cout << "Enter Number of Days Stay: ";
        cin >> days;
    }

    void calculateRoomRent() {
        switch(roomType) {
            case 1: roomRent = days * 1000; break;
            case 2: roomRent = days * 2000; break;
            case 3: roomRent = days * 3500; break;
            default: cout << "Invalid Room Type!"; roomRent = 0;
        }
        cout << "\nRoom Rent = Rs. " << roomRent << endl;
    }

    void foodMenu(){
        while (true){    
         int choice, qty;
         cout << "\n----- FOOD MENU -----\n";
         cout << "1. Tea        - Rs. 20\n";
         cout << "2. Coffee     - Rs. 30\n";
         cout << "3. Dinner     - Rs. 200 \n";
         cout << "4. Lunch      - Rs. 150\n";
         cout << "5. Breakfast  - Your choice\n";
         cout << "6. Exit Food Menu\n";
         cout << "\nEnter choice: ";
         cin >> choice;
            switch(choice){
                if (choice==6) break;
                case 1:
                cout << "Enter Quantity: ";
                cin >> qty;
                foodBill += qty * 20;
                cout<<" \n Food bili = Rs. "<< foodBill << endl;
                 break;
                case 2: cout << "Enter Quantity: ";
                cin >> qty; 
                foodBill += qty * 30; 
                cout<<" \n Food bili = Rs. "<< foodBill << endl;
                break;
              case 5:{ 
                while (true) {
                    int choic,qty;
                    int totlerep = 1;
                    cout<<"<---- Choice Recipes---->\n";
                    cout<<" 1.Wada Pav  - Rs. 20 \n";
                    cout<<" 2.Samosa    - Rs. 20\n";
                    cout<<" 3.Mix Bhaji - Rs. 50\n";
                    cout<<" 4.Allo Chap - Rs. 30\n";
                    cout<<" 5.Dahi Bada - Rs. 40\n";
                    cout<< "-PRESS 6--- EXIT MENU CARD:\n";
                    cout<<" Enter A Recipes:\n";
                    cin >> choic;
                        if ( choic ==6) break;
                    cout << "Enter Quantity:\n ";
                        cin >> qty;
                    switch(choic){
                        totlerep++;
                        case 1: foodBill += qty * 20; break;
                        case 2: foodBill += qty * 20; break;
                        case 3: foodBill += qty * 50; break;
                        case 4: foodBill += qty * 30; break;
                        case 5: foodBill += qty * 40; break;
                        default: cout << " Invalide recipe!";
                       }
                        cout<<" <..THANK YOU..>\n ";
                        cout<<" --YOUR TOTLE ITEMS--"<<totlerep << endl;
                        cout<<"  TOTLE FOOD BILL  = Rs. "<< foodBill + totlerep << endl;
                     } 
                 } break;
                case 4:
                cout << "Enter Quantity: ";
                cin >> qty;
                foodBill += qty * 150; 
                cout<<" \n Food bili = Rs. "<< foodBill << endl;
                break;
                case 3: 
                cout << "Enter Quantity: ";
                cin >> qty;
                foodBill += qty * 200; 
                cout<<" \n Food bili = Rs. "<< foodBill << endl;
                break;
               default: cout << "Invalid Choice!";
            }
        }
    }
    void showBill() {
        cout << "\n\n===== FINAL BILL =====\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Address      : " << customerAddress << endl;
        cout << "Room Number  : " << roomNo << endl;
        cout << "Room Rent    : Rs. " << roomRent << endl;
        cout << "Food Bill    : Rs. " << foodBill << endl;
        cout << "Total Amount : Rs. " << roomRent + foodBill << endl;
        cout << "======================\n";
    }
};

int main() {
    Hotel h;
    int choice;

    while(true) {
        cout << "\n===== HOTEL MANAGEMENT MENU =====\n";
        cout << "1. Enter Customer Details\n";
        cout << "2. Calculate Room Rent\n";
        cout << "3. Order Food\n";
        cout << "4. Show Total Bill\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: h.enterCustomerDetails(); break;
            case 2: h.calculateRoomRent(); break;
            case 3: h.foodMenu(); break;
            case 4: h.showBill(); break;
            case 5: return 0;
            default: cout << "Invalid Choice!";
        }
    }
    return 0;
}
