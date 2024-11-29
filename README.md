# PLP-4

There are 2 boolean values in C++. They are true (1) and false (0). <br>
C++ has many conditional statements available for you to use. Below they are shown: 
- If statement
- If - else statement
- If , else if , else statements

The way C++ delimtes the code under each condition is based off the curly brackets. Examples will be shown below. 
# If statement 
An if statement will allow you to look at something to see if it is true. If it is true, it will follow through the statement and if it is false, it will not return anything. An example is attached below.

```
//Syntax for an If statement:
if (condition){
//put in what you want to execute if the statement is true
}
//the program will not return anything if it is false
```
That is the syntax above. An example below will ask if x is greater than y and if it is true, then it will print out that it is bigger, if it is not it will not print out anything. 

```
#include <iostream>
using namespace std;
int main(){
int x = 10
int y = 29
if (x > y){
cout << "X is greater than Y" << endl;
}
```

# If-else statements
An if-else statement will allow you to look to give responses if the statement is true or false. Below is the syntax for an if-else statement. 

```
if (condition){
// put it what you want if statement is true.
}
else{
// put what you want if statement is false
}
```
Below is an example using if-else statement in C++. 
```
#include <iostream>
using namespace std;
int main(){
int x = 10
int y = 29
if (x > y){
cout << "X is greater than Y" << endl;
}
else{
cout << "X is less than Y"" <<endl;
}
```

# If-Else If- Else:
The last conditional for C++ is if-else if- else. This will allow you to give responses to the user if the first condition is true, and if it is not, it will look at the second condition (else if),  and finally if none are true, it will print out a statement. Below is the syntax:
You can put in as many else if as you would like. 
```
if (condition){
// put it what you want if statement is true.
}
else if(condition 2){
// put it what you want if statement is true.
}
else if{
// put it what you want if statement is true.
}
else{
// put what you want if statement is false
}
```

Below is an example of this: (adapted from W3Schools)
```
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
```
C++ also allows you to use short circuiting. Below is ane example:
```
#include <iostream>

int main() {
    int x = 5;
    int y = 0;

    // Short-circuit evaluation with &&
    if (x > 0 && (10 / y) > 2) {
        std::cout << "This will not be printed." << std::endl;
    }

    // Short-circuit evaluation with ||
    if (x < 0 || y == 0) {
        std::cout << "This will be printed." << std::endl;
    }

    return 0;
}
```
C++ also supports using switch. Below is the syntax: 
```
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  case :
    // code block
}
```
In order to get out of the case once it is found you use break to exit the program and return what was given in the case. 
Sources: 
https://www.w3schools.com/cpp/cpp_switch.asp
https://www.w3schools.com/cpp/cpp_conditions.asp
