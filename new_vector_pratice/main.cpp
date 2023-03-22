#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Item{
    int id;
    string name;
    int quantity;
    int price;
};

int main() {
    int item_count=0;
    int totalPrice=0;
    vector<Item*> cart;
    while (true) {
        cout << "1. Add item" << endl;
        cout << "2. Delete item" << endl;
        cout << "3. View item details" << endl;
        cout << "4. View total cost" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        int selectCmd;
        cin >> selectCmd;
        string Name;
        int Quantity, Price;
        switch (selectCmd) {
            case 1:
                cout << "Enter item name, " << "Enter item quantity, " << "Enter item price" << endl;
                cin >> Name >> Quantity >> Price;
                if (cart.empty()) {
                    Item *newItem = new Item{0, Name, Quantity, Price};
                    cart.push_back(newItem);
                    item_count += 1;
                    totalPrice += Price * Quantity;
                    cout << "Item " << newItem->id << " added successfully";
                } else {
                    int siz = cart.size();
                    Item *newItem = new Item{siz, Name, Quantity, Price};
                    cart.push_back(newItem);
                    item_count += 1;
                    totalPrice += Price * Quantity;
                    cout << "Item " << newItem->id << " added successfully";
                }
                break;
            case 2:
                if (cart.empty()) {
                    cout << "cart is empty" << endl;
                    break;
                } else {
                    int idx;
                    cin >> idx;
                    item_count -= 1;
                    totalPrice -= cart[idx]->price * cart[idx]->quantity;
                    Item *eraseCart = cart[idx];
                    cart.erase(cart.begin() + idx);
                    delete eraseCart;
                    cout << idx << "번째 값이 삭제되었습니다." << endl;
                }
                break;
            case 3:
                if (cart.empty()) {
                    cout << "cart is empty" << endl;
                    break;
                } else {
                    int idx;
                    cin >> idx;
                    if (item_count > idx) {
                        cout << "Name: " << cart[idx]->name << " Quantity: " << cart[idx]->quantity << " Price: "
                             << cart[idx]->price << endl;

                    } else {
                        cout << "noting here" << endl;
                    }
                }
                break;
            case 4:
                if (cart.empty()) {
                    cout << "cart is empty" << endl;
                    break;
                } else {
                    cout << "Total cost= " << totalPrice << endl;
                }
                break;
            case 5:
                cout << "see you!" << endl;
                return 0;
            default:
                cout << "wrong input" << endl;
                return 0;
        }
    }
}
