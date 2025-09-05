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

void showRestaurant(const Restaurant& r){
    cout << "------------Your order------------" << endl;
    cout << "Name for order: " << r.name << endl;
    cout << "Your cuisine: " << r.menu << endl;
    cout << "Number of dishes: " << r.quantity << endl;
    cout << "Number of Dine-In: "<< r.numPeople << endl;
    cout << "Thank you for your rating: " << r.ratings << endl;
}

int main(){

    Restaurant r1 = newRestaurant();
    showRestaurant(r1);

    return 0;
}
