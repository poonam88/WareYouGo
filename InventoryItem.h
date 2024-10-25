// InventoryItem.h
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

class InventoryItem {
public:
    std::string name;
    std::string barcode;
    int quantity;
    std::string category;

    // Default constructor
    InventoryItem();

    // Parameterized constructor
    InventoryItem(std::string n, std::string b, int q, std::string c);
};

#endif // INVENTORYITEM_H
