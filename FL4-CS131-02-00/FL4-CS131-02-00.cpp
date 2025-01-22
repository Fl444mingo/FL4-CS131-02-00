#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1, total = 1, target = 12;
    cout << "Your target number is " << target;
    do {
        cout << "\nEnter number 2-5 (enter 0 to end): ";
        cin >> num1;
        if ((num1 < 2 || num1 > 5) && num1 != 0) {
            cout << "\nInput must be 2-5";
            continue;
        }
        total *= num1;
        cout << "\nCurrent total: " << total;
        if (total > target) {
            cout << "\nTotal too high, game over.\n";
            break;
        }
    } while (total != target && num1 != 0);

    string pass = "test";
    string input;
    // for loop version
    cout << "For loop\n";
    for (int tries = 2; tries >= 0; tries--) {
        cout << "Input password: ";
        cin >> input;
        if (pass == input) {
            cout << "Access granted\n";
            break; // or continue;
        }
        cout << "Invalid entry\n";
        cout << "You have " << tries << " tries left.\n\n";
        if (tries == 0) {
            cout << "You failed, goodbye forever.\n";
        }
    }

    // do while version
    cout << "Do while\n";
    int tries = 3;
    do {
        cout << tries;
        cout << "Input password: ";
        cin >> input;
        if (pass == input) {
            cout << "Access granted\n\n";
            break; // or continue;
        }
        tries--;
        cout << "Invalid entry\n";
        cout << "You have " << tries << " tries left.\n\n";
        if (tries == 0) {
            cout << "You failed, goodbye forever.\n";
        }
    } while (tries > 0);

    system("pause");
    return 0;
}