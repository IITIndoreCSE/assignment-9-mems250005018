#include <bits/stdc++.h>
using namespace std;

struct Sales { 
    string month; 
    float amount; 
};

int main() {
    Sales s[12];
    cout << "Enter 12 records: ";
    for (int i = 0; i < 12; i++){
        cout<<"Enter The Month: ";
        cin >> s[i].month;
        cout<<"Enter the amount: ";
        cin>> s[i].amount;
        cout<<endl;
    }

    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < 12; i++) {
        if (s[i].amount > s[max_index].amount){ 
            max_index = i;
        }
        if (s[i].amount < s[min_index].amount){
            min_index = i;
        }
    }

    cout << "Max Sales: " << s[max_index].month << " " << s[max_index].amount << endl;
    cout << "Min Sales: " << s[min_index].month << " " << s[min_index].amount << endl;
    return 0;
}
