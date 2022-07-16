#include <iostream>
#include <string.h>
#include <algorithm>
#include <conio.h>

using namespace std;

int main()
{
    const char eng[37] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    const string mor[37] = {"   ", ". _", "_ . . .", "_ . _ .", "_ . .", ".", ". . _ .", "_ _ .", ". . . .", ". .", ". _ _ _", "_ . _", ". _ . .", "_ _", "_ .", "_ _ _", ". _ _ .", "_ _ . _", ". _ .", ". . .", "_", ". . _", ". . . _", "._ _", "_ . . _", "_ . _ _", "_ _ . .", ". _ _ _ _", ". . _ _ _", ". . . _ _", ". . . . _", ". . . . .", "_ . . . .", "_ _ . . .", "_ _ _ . .", "_ _ _ _ .", "_ _ _ _ _"};

    string get = "";
    string base = "";

    cout << "Enter sentance to convert : ";
    getline(cin, get);

    transform(get.begin(), get.end(), get.begin(), ::tolower);

    for (unsigned int i = 0; i < get.size(); i++)
    {
        for (unsigned int j = 0; j < 37; j++)
        {
            if (get[i] == eng[j])
            {
                base += mor[j];
                base += "   ";
                break;
            }
        }
    }
    cout << endl
         << endl
         << "Morse code of "
         << "'" << get << "'"
         << " is as showm" << endl
         << endl;
    cout << "  " << base;
    getch();
}
