// COMSC-210 | Lab 3A | Kyawt Thinzar Min
// IDE used: VScode, Terminal 

#include <iostream>
#include <string>
using namespace std;

//defining struct
struct Restaurant{
    int numPeople;
    string menu;
    string name;
    double ratings;
    int quantity;
};

//headers
Restaurant newRestaurant();
void showRestaurant(const Restaurant &);

//function definitions
Restaurant newRestaurant(){
    Restaurant temp;
    cout << "Enter the name for this order ";
    cin >> temp.name;

    cout << "Enter your cuisine ";
    cin >> temp.menu;

    cout << "Enter the quantity ";
    cin >> temp.quantity;

    cout << "How many people at your table? ";
    cin >> temp.numPeople;

    cout << "Rate the service out of 10: ";
    cin >> temp.ratings;
    return temp;
}

void showRestaurant(const Restaurant& a){
    cout << "------------Your order------------" << endl;
    cout << "Name for order: " << a.name << endl;
    cout << "Your cuisine: " << a.menu << endl;
    cout << "Number of dishes: " << a.quantity << endl;
    cout << "Number of Dine-In: "<< a.numPeople << endl;
    cout << "Thank you for your rating: " << a.ratings << endl;
}

int main(){
    Restaurant a1 = newRestaurant();
    showRestaurant(a1);
    Restaurant a3 = newRestaurant();
    showRestaurant(a3);
    Restaurant a4 = newRestaurant();
    showRestaurant(a4);
    return 0;
}
