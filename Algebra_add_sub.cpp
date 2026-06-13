#include <iostream>
using namespace std;

float a;
float b;

int main()
{
    cout<< "Input the first number. ex: 1.00332" << endl; 
    //cout << "user input: " , I want to maybe make this appear right next to where the input goes in the terminal
    /*
    example:

    Input first number. ex: 1.00332
    User input: (Terminal waits for a number here)

    */
    cin >> a;
      cout<< "Input entered: " << a;

      cout<< "input the second number: " << endl;
      cin >> b;
      cout<< "Input entered: " << b;

      cout<< "choose an operator: + or - " << endl;
      //cin >> operator;
        // Do a logic thingy where if the user put in a plus or minus it outputs the equation and the answer.


    return (0);
}