#include <string.h>
#include <iostream>
using namespace std;

main()
{
    const string eng[37] = {" ", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    const string mor[37] = {" ", "._", "_...", "_._.", "_..", ".", ".._.", "__.", "....", "..", ".___", "_._", "._..", "__", "_.", "___", ".__.", "__._", "._.", "...", "_", ".._", "..._", ".__", "_.._", "_.__", "__..", ".____", "..___", "...__", "...._", ".....", "_....", "__...", "___..", "____.", "_____"};
    string temp[50];
    string get = "";
    string base = "";
    string op = "";

    cout << "enter string :";
    getline(cin, get);

    for (int i = 0; i < get.length(); i++)
    {
        if (get[i] != ' ')
        {
            cout << base << endl;

            for (int j = 0; j < get[i]; j++)
            {
                temp[j] = base;
            }
            base.erase();
        }
        else
        {
            for (unsigned int k = 0; k < get.length(); k++)
            {
                for (unsigned int l = 0; l < 37; l++)
                {
                    if (temp[k] == mor[l])
                    {
                        op += eng[l];
                        op += "   ";

                        break;
                    }
                }
            }
        }
    }
    for (int n = 0; n < op.length(); n++)
    {
        cout << op[n];
    }
}
