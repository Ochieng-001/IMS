#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Structure to represent an item
struct Item {
    string name;
    int quantity;
    double price;

    Item(const string& n, int q, double p) : name(n), quantity(q), price(p) {}
};

// Function to add an item
void addItem(vector<Item>& inventory, const string& name, int quantity, double price) {
    inventory.push_back(Item(name, quantity, price));
}

// Function to remove an item
void removeItem(vector<Item>& inventory, const string& name) {
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->name == name) {
            inventory.erase(it);
            return;
        }
    }
    cout << "Item not found.\n";
}

// Function to search for an item
void searchItem(const vector<Item>& inventory, const string& name) {
    for (const auto& item : inventory) {
        if (item.name == name) {
            cout << "Item found: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << "\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

// Function to display the inventory
void displayInventory(const vector<Item>& inventory) {
    for (const auto& item : inventory) {
        cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << "\n";
    }
}

// Function to save inventory to a file
void saveInventory(const vector<Item>& inventory, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& item : inventory) {
            outFile << item.name << " " << item.quantity << " " << item.price << "\n";
        }
        outFile.close();
    } else {
        cerr << "Unable to open file for writing.\n";
    }
}

// Function to load inventory from a file
void loadInventory(vector<Item>& inventory, const string& filename) {
    ifstream inFile(filename);
    if (inFile.is_open()) {
        inventory.clear();
        string name;
        int quantity;
        double price;
        while (inFile >> name >> quantity >> price) {
            inventory.push_back(Item(name, quantity, price));
        }
        inFile.close();
    } else {
        cerr << "Unable to open file for reading.\n";
    }
}

int main() {
    vector<Item> inventory;
    string filename = "inventory.txt";

    // Load inventory from file
    loadInventory(inventory, filename);

    int choice;
    string name;
    int quantity;
    double price;

    do {
        cout << "Inventory Management System\n";
        cout << "1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Search Item\n";
        cout << "4. Display Inventory\n";
        cout << "5. Save and Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter quantity: ";
                cin >> quantity;
                cout << "Enter price: ";
                cin >> price;
                addItem(inventory, name, quantity, price);
                break;
            case 2:
                displayInventory(inventory);
                cout << "Enter item name to remove: ";
                cin >> name;
                removeItem(inventory, name);
                break;
            case 3:
                cout << "Enter item name to search: ";
                cin >> name;
                searchItem(inventory, name);
                break;
            case 4:
                displayInventory(inventory);
                break;
            case 5:
                saveInventory(inventory, filename);
                cout << "Inventory saved. Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
    
