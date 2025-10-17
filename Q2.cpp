#include <iostream>
using namespace std;

struct Color { 
    int r, g, b; 
};

int main() {
    Color c[5] = { 
    {10,20,30}, 
    {200,150,100},
    {50,60,70}, 
    {255,255,0}, 
    {128,64,255} 
    };
    //This will invert the first 3
    for (int i = 0; i < 3; ++i) {
        c[i].r = 255 - c[i].r;
        c[i].g = 255 - c[i].g;
        c[i].b = 255 - c[i].b;
    }
    //this will print the color structures
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i+1 << ": " << c[i].r << "," << c[i].g << "," << c[i].b<<endl;
    }
    return 0;
}
