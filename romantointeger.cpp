#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int integer = 0;
    for (int i = 0; i<s.length(); i++) {
            switch (find) {
                case 'I': integer += 1;
                break;
                case 'V': integer += 5;
                break;
                case 'X': integer += 10;
                break;
                case 'L': integer += 50;
                break;
                case 'C': integer += 100;
                break;
                case 'D': integer += 500;
                break;
                case 'M': integer += 1000;
                break;
            }
            if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) integer -=2;
            if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) integer -=20;
            if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) integer -=200;
      }
    cout << integer << endl;
    return 0;
}

