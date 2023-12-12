#include <iostream>
#include <string>
using namespace std;

int main() {
    string character;
    int x,y,z;

    cout << "Enter your age: ";
    cin >> x;
    if(x <= 25){
        cout << "Enter your height: ";
        cin >> y;
        if(y <= 99){
            character = "Chopper";
        }
        else if(y < 180){
            character = "Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> z;
            if(z >= 1100000001){
                character = "Zoro";
            }
            else{
                character = "Sanji";
            }
    }
    }
    else{
        if(x <= 60){
            cout << "Enter your bounty: ";
            cin >> z;
            if(z >= 500000001){
                character = "Jinbe";
            } 
            else{
                character = "Franky";
            }
    }
        else{
            character = "Brook";
        }
}
    cout << "Your character = " << character << endl;
}
