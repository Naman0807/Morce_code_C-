#include <bits/stdc++.h>
using namespace std;

string moreseWordToEnglish(string morseWord);
vector<string> morseWordSeperator(string morseString);

const char eng[37] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

const string mor[37] = {"  ", ".-", "-...", "-.-.", "-..", ".", "..- .", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

int main()
{
    string get;
    getline(cin, get);
    vector<string> seperatedWords = morseWordSeperator(get);
    vector<string> finalOutput;
    for (int i = 0; i < seperatedWords.size(); i++)
    {
        finalOutput.push_back(moreseWordToEnglish(seperatedWords[i]));
    }
    for (int i = 0; i < finalOutput.size(); i++)
    {
        cout << finalOutput[i] << " ";
    }
}

vector<string> morseWordSeperator(string morseString)
{
    vector<string> morseWords;
    string str = "";
    for (int x = 0; x < morseString.size(); x++)
    {
        if (x < (morseString.size() - 1))
        {

            if (morseString[x] == ' ' && morseString[x + 1] == ' ')
            {
                morseWords.push_back(str);
                str.erase();
            }
            else
            {
                str = str + morseString[x];
            }
        }
        else
        {
            str = str + morseString[x];
            morseWords.push_back(str);
        }
    }

    return morseWords;
}

string moreseWordToEnglish(string morseWord)
{
    string str = "";
    string base = "";
    vector<string> words;

    for (int x = 0; x < morseWord.size(); x++)
    {
        if (x < (morseWord.size() - 1))
        {

            if (morseWord[x] == ' ')
            {
                words.push_back(str);
                str.erase();
            }
            else
            {
                str = str + morseWord[x];
            }
        }
        else
        {
            str = str + morseWord[x];
            words.push_back(str);
        }
    }
    // for (int i = 0; i < words.size(); i++)
    // {
    //     cout << words[i] << endl;
    // }
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < 37; j++)
        {
            if (words[i] == mor[j])
            {
                base += eng[j];
            }
        }
    }
    return base;
}