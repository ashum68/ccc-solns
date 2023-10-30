#include <iostream>
using namespace std;

int square = 1;
int main(void)
{ 
    while (true) {
        int move; 
        cin >> move;
        if (move == 0) {  
            cout << "You Quit!";
            break;
        }
        square = square + move;
        if (square == 54) { 
            square = 19;
        } else if (square == 90) { 
            square = 48;
        } else if (square == 99) { 
            square = 77;
        } else if (square == 9) { 
            square = 34;
        } else if (square == 40) {
            square = 64;
        } else if (square == 67) { 
            square = 86;
        } else if (square > 100) {
            square = square - move;
        } else if (square == 100) {
            cout << "You are now on square 100\n";
            cout << "You Win!";
            break;
        }
        
        cout << "You are now on square "; 
        cout << square;
        cout << "\n";
    }
} 
