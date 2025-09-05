#include <iostream>
#include <string>
using namespace std;

struct Restaurant{
    int numPeople;
    string menu;
    string name;
    double ratings;
    int quantity;
};

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
    Restaurant a.1 = newRestaurant();
    showRestaurant(a.2);
    Restaurant a.3 = newRestaurant();
    showRestaurant(a.3);
    Restaurant a.4 = newRestaurant();
    showRestaurant(a.4);
    return 0;
}
