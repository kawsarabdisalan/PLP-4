#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y;
    cout << "Input a number: " << endl;
    cin >> y;
    if (x >20){
        cout << "Good Morning";
    }
    else if(x > 25){
        cout << "Good Evening";
    }
    else{
        cout << "Good Afternoon!";
    }
}