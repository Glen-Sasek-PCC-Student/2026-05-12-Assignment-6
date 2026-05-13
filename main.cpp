// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <limits>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
    cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;

    bool next_main_loop = true;
    double balance_USD = 0.0;
    while(next_main_loop) {
        // Get Coins
        bool next_coin = true;
        while(next_coin) {
            bool invalid_input = false;
            int coin = -1;
            cout << "Enter coins - 5, 10, or 25 only [0 to end input]: ";
            cin >> coin;
            if(cin) {
                switch(coin) {
                    case 0: 
                        next_coin = false;
                        break;
                    case 5: // Fallthrough
                    case 10: // Fallthrough
                    case 25: // OK
                        balance_USD += coin / 100.0;
                        break;
                    default:
                        invalid_input = true;
                }
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                invalid_input = true;
            }
            if(invalid_input) {
                cout << "Bad input ;(" << endl;
            }
        }

        // Get choice and count
        bool next_option = true;
        bool next_how_many = false;
        char option = '\0';
        while(next_option) {
            cout << "Please pick an option ($0.25 each):" << endl;
            cout << "    C/c: Coffee" << endl;
            cout << "    T/t: Tea" << endl;
            cout << "    Q/q: Quit" << endl;
            
            
            cin >> option;
            // Validate
            next_option = false;
            switch(option) {
                case 'c':
                    cout << "TODO: COFFEE!!" << endl;
                    next_how_many = true;
                    break;
                case 't':
                    cout << "TODO: TEA!!" << endl;
                    next_how_many = true;
                    break;
                case 'q':
                    next_main_loop = false;
                    break;
                default:
                    cout << "Invalid Option! Please choose a valid option!" << endl;
                    next_option = true;
            }
        }

        int how_many = 0;
        while(next_how_many) {
            cout << "How many would you like?" << endl;
            cin >> how_many;
            if(cin) {
                // process sale, check balance, etc...
                cout << "TODO: Check cost and balance" << endl;
                cout << "TODO: Make sale or get more coins" << endl;
                next_main_loop = false;
                next_how_many = false;
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    cout << "Thank you for using my Vending Machine Program!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS

Welcome to my Coffee/Tea Vending Machine!
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.80
Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> k
Invalid Option! Please choose a valid option!
>> 9
Invalid Option! Please choose a valid option!
>> c
How many would you like?
>> f
Invalid Option!
How many would you like?
>> 2
Your total: $0.50
Your balance: $0.30
Thank you for using my Vending Machine Program!
Welcome to my Coffee/Tea Vending Machine!
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.30
Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c
How many would you like?
>> 2
Your total is $0.50
Your balance is $0.30
Not enough change!! Please add more coins.
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance: $0.60
Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> T
How many would you like?
>> 1
Your total is $0.25
Your balance is $0.35
Thank you for using my Vending Machine Program!



Welcome to my Coffee/Tea Vending Machine!
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.30
Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> q
Your total is $0
Your balance is $0.30
Thank you for using my Vending Machine Program!



*/
