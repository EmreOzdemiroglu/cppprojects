#include <iostream>
#include <string>

using namespace std;

void cafeACM221(int MenuMoney[10]) {
    int MenuMoneyAmount = 0;
    int MenuNumber;
    while (true) {
    cout << " Select your menu:\n";
    cin >> MenuNumber;
    MenuMoneyAmount += MenuMoney[MenuNumber-1];
    cout << "Menu " << "[" << MenuNumber << "] " << "Ordered. " << "Your cost is: " << MenuMoneyAmount << " TL\n";
    cout << "Do you want another order? Y/N? \n";
    string orderCntrl;
    cin >> orderCntrl;
    if (orderCntrl=="Y" || orderCntrl=="y") {
        continue;
    } else if (orderCntrl=="N" || orderCntrl=="n") {
        cout << "Your total cost is " << MenuMoneyAmount << "TL please proceed to the cashier!\n";
        break;
    } else {
        cout << "Your total cost is " << MenuMoneyAmount;
        cout << "\nA problem occurred. Please try again.";
        break;
    }
    }    
}

int main() {

    cout << "Welcome to cafeACM221!\n\n";
    cout << "[1] Hamburger and cola ........35TL\n";
    cout << "[2] Hamburger and ayran........30TL\n";
    cout << "[3] Hamburger , fries and cola........55TL\n";
    cout << "[4] Hamburger , fries and ayran........50TL\n";
    cout << "[5] Pizza and cola........60TL\n";
    cout << "[6] Pizza and ayran........55TL\n";
    cout << "[7] Pizza , nuggets and cola........75TL\n";
    cout << "[8] Pizza , nuggets and ayran........70TL\n";
    cout << "[9] Vegan wrap and cola........30TL\n";
    cout << "[10] Vegan wrap and orange juice........25TL\n";
    int MenuMoney[10] = {35, 30,55,50,60,55,75,70,30,25};
    cafeACM221(MenuMoney);
    return 0;
}
