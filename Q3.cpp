#include <iostream>
using namespace std;

struct Point {
    float x, y; 
};

int main() {
    Point p[7];
    cout << "Enter 7 points"<<endl;
    //take input of the pts
    for (int i = 0; i < 7; ++i){ 
        cout<<"x"<<(i+1)<<": ";
        cin >> p[i].x;
        cout<<"y"<<(i+1)<<": ";
        cin >> p[i].y;
    }
    int count = 0;
    //checking the points
    for (int i = 0; i < 7; ++i)
        if (p[i].x > 0 && p[i].y > 0){
            count++;
        }
    //printing the output
    cout << "No. of Points in first quadrant are: " << count << endl;
    return 0;
}
