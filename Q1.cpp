// Online C++ compiler to run C++ program online
#include <iostream>

struct Item{ 
    int id; 
    float cost; 
};

int main() {
    Item items[6];

    items[0] = {101, 45.5};
    items[1] = {102, 120.0};
    items[2] = {103, 75.25};
    items[3] = {104, 50.01};
    items[4] = {105, 51.0};
    items[5] = {106, 35.0};

    std::cout << "Items with cost > 50.00"<<std::endl;
    for (int i = 0; i < 6; ++i) {
        if (items[i].cost > 50.00) {
            std::cout << "ID:" << items[i].id << " Cost:" << items[i].cost << std::endl;
        }
    }
    return 0;
}
