#include <iostream>
using namespace std;

float a;
float b;
string op;

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
      cout<< "User input: " << a;
            cout << " " << endl;
            cout << " " << endl;
      cout<< "input the second number: " << endl;
      cin >> b;
      cout<< "User input: " << b;
            cout << " " << endl;
            cout << " " << endl;
      cout<< "choose an operator. Ex 'plus or 'minus' in lower case letters" << endl;
      cin >> op;
      cout<< "User input: " << op;
            cout << " " << endl;
            cout << " " << endl;
      string answer;
      if (op == "plus"){
        cout << "Did you mean to pick 'plus'? 'Y' / 'N' " << endl;
        cin >> answer; 
            if (answer == "Y"){
                float plus = a + b;
                cout << a << " + " << b << " = " << plus << endl;
               
            }
            else if (answer == "N"){
                cout << "Please restart. I have forgotten" << endl; //Maybe make it loop back to the start?
            }
            else
            {
                cout<< "BRUH. PLEASE USE THE RIGHT INPUT. I'M NEW AT THIS" << endl; // NGL They might need to restart after this
            }

   
        }
     else if (op == "minus"){
           cout << "Did you mean to pick 'minus'? 'Y' / 'N' " << endl; /* basically everything below is copy/paste */
            cin >> answer; 
                if (answer == "Y"){
                    float minus = a - b;
                    cout << a << " - " << b << " = " << minus << endl;
                
                }
                else if (answer == "N"){
                    cout << "Please restart. I have forgotten" << endl;
                }
                else
                {
                    cout<< "BRUH. PLEASE USE THE RIGHT INPUT. I'M NEW AT THIS" << endl;
                }
    }
    else{
        cout << "ERROR: Please try again. Check spelling or capitalization" << endl;
    }
            cout << " " << endl;
            cout << " " << endl;
    cout << "Thank you, user! I hope you found the answer you werse looking for!"<< endl;
    return (0);
}