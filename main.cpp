/*
 * Calculator.cpp
 *
 *  Date: [Enter date]
 *  Author: Dylan Ruby
 */

#include <iostream>
// including string allows us to use the getline() function
#include <string>
using namespace std;

// change from void to int
int main()
{
    char statement[100];
    double op1, op2; // changed from int to double
    char operation;

    // add ; to end and changed from "Y" to 'Y' as "" means it is a string literal not a character
    char answer = 'Y';

    // in while loop argument I added tolower(answer). This allows the user to enter 'y' or 'Y' if they want to continue
    while (tolower(answer)=='y')
    {
        cout << "Enter expression" <<endl;

        // changed the positions of op1 and op2 as it was asking for op2 before operation and op1 after
        cin >> op1 >> operation >> op2;

        // changed "+" to '+' as operation type is char and not string
        if (operation == '+') { // changed if (operation == '+'); to if (operation == '+'){
            // changed op2 >> " = " to op2 << " = "
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
            // added closing { for this if statement
        }

        // changed from if statement to else if statement
        else if (operation == '-') { // changed if (operation == '-'); to if (operation == '-'){
            // changed cout >> op1 to cout << opt1
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        } // added closing } for this statement

        // changed from if statement to else if statement
        else if (operation == '*') { // added { to the end of if (operation == '*')
            // added ; to the end of the cout statement and changed " / " with " * "
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        } // added closing } for this statement

        // changed from if statement to else if statement
        else if (operation == '/') { // added { to the end of if (operation == '/')
            // replaced " * " in cout with " / "
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        } // added closing } for this statement
        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;

        if (tolower(answer) == 'y'){
            // continue is not needed but helps us identify when we are going back to the top of the loop
            continue;
        }

        else if (tolower(answer) == 'n'){
            // break is not required here but helps us identify where we are stepping out of the loop
            break;
        }
        
        else{
            while(tolower(answer) != 'y' && tolower(answer) != 'n'){
                cout << "Do you wish to evaluate another expression? " << endl;
                cin >> answer;
            }
        }
    }

    // added exit message
    cout << "Program Finished.\n";

    // added return 0;
    return 0;
}


/*##########################################################################
 *#                                                                        #
 *#                             ORIGINAL CODE                              #
 *#                                                                        #
 *##########################################################################
 */


/*
 * Calculator.cpp
 *
 *  Date: [Enter date]
 *  Author: [Your Name]
 */

/*
#include <iostream>

using namespace std;

void main()
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer="Y"
    while (answer=='y')
    {
        cout << "Enter expression" <<endl;
        cin >> op2 >> operation >> op1;
        if (operation == "+");
        cout << op1 << " + " << op2 >> " = " << op1 + op2 << endl;
        if (operation == '-');
        cout >> op1 << " - " << op2 << " = " << op1 - op2 << endl;
        if (operation == '*')
            cout << op1 << " / " << op2 << " = " << op1 * op2 << endl
        if (operation == '/')
            cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
}
*/





