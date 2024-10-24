#include <iostream>
using namespace std;

int main(){
    int age; 
    cout << "Input your age: " << endl;
    cin >> age;
    bool hasLicense = true;
    if (age < 18){
        cout << "You are too young to have a licnense" << endl;
    }
    else if (age > 18 && hasLicense){
        cout << "You can drive, congrats!" << endl;
    }
    else{
        cout << "You need a licence!";
    }
    }
