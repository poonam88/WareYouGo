// Warehouse.h
#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <unordered_map>
#include <iostream>
#include <string>
#include "InventoryItem.h"

class Warehouse {
private:
    std::unordered_map<std::string, InventoryItem> inventory;

public:
    void addItem(const std::string& name, const std::string& barcode, int quantity, const std::string& category);
    void searchItem(const std::string& query);
    void filterByStock(int threshold);
    void listInventory();
    void loadInventoryFromFile(const std::string& filename);
};

#endif // WAREHOUSE_H
