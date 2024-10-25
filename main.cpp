// main.cpp
#include <iostream>
#include "Warehouse.h"

int main() {
    Warehouse warehouse;

    // Load inventory from a file if needed
    // warehouse.loadInventoryFromFile("inventory.txt");

    int choice;
    std::string query;
    while (true) {
        std::cout << "Choose an option:\n";
        std::cout << "1. Add Item\n2. Search Item\n3. Filter Low Stock\n4. List Inventory\n5. Exit\n";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, barcode, category;
                int quantity;
                std::cout << "Enter item name: ";
                std::cin >> name;
                std::cout << "Enter barcode: ";
                std::cin >> barcode;
                std::cout << "Enter quantity: ";
                std::cin >> quantity;
                std::cout << "Enter category: ";
                std::cin >> category;
                warehouse.addItem(name, barcode, quantity, category);
                break;
            }
            case 2:
                std::cout << "Enter name, barcode, or category to search: ";
                std::cin >> query;
                warehouse.searchItem(query);
                break;
            case 3:
                std::cout << "Enter stock threshold: ";
                int threshold;
                std::cin >> threshold;
                warehouse.filterByStock(threshold);
                break;
            case 4:
                warehouse.listInventory();
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
