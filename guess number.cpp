#include <bits/stdc++.h>

using namespace std;

int main() {
    int low = 1, high = 100, guess;
    char response;

    cout << "Think of a number between 1 and 100, and I will try to guess it!" << endl;

    while (low <= high) {
        guess = (low + high) / 2;
        cout << "Is your number " << guess << "? (H = too high, L = too low, C = correct):";
        cin >> response;

        if (response == 'C' || response == 'c') {
            cout << "Yay! I guessed your number correctly" << endl;
            break;
        } else if (response == 'l' || response == 'l') {
            high = guess - 1;
        } else if (response == 'h' || response == 'h') {
            low = guess + 1;
        } else {
            cout << "Invalid input! Please enter H, L, or C." << endl;
        }
    }

    return 0;
}
