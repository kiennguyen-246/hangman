//hangman.cpp
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "hangman.h"

using namespace std;

void init(vector <word> dictionary[])
{
   initRand();
   initWords(dictionary);
}

void game(vector <word> dictionary[])
{
    startPage(dictionary);
}

void startPage(vector <word> dictionary[])
{
    nextPage();
    printHangman(6);
    cout << "HANGMAN ver " << VERSION << "\n";
    system("pause");
    chooseDifficulty(dictionary);
}

void chooseDifficulty(vector <word> dictionary[])
{
    nextPage();
    cout << "Choose Difficulty\n";
    cout << "1: Easy\n";
    cout << "2: Normal\n";
    cout << "3: Difficult\n";
    cout << "4: China\n";
    cout << "0: Return\n";
    cout << "x: Exit\n";
    cout << "Your Option: ";

    char opt;
    cin >> opt;
    switch(opt)
    {
        case '1': 
        case '2':
        case '3':
        case '4':
            playGame(opt - '0', dictionary);
            break;
        case '0': 
            game(dictionary);
            break;
        case 'x':
            cout << "Exit Y/N";
            char yn;
            cin >> yn;
            if (yn == 'Y' || yn == 'y') exit(0);
            else chooseDifficulty(dictionary);
        default: 
            chooseDifficulty(dictionary);
            break;
    }
}

void playGame(const int& difficulty, vector <word> dictionary[])
{
    nextPage();
    int triesLeft = (difficulty == DIFFICLUTY_CHINA ? TRIES_COUNT_CHINA: TRIES_COUNT_DEFAULT);
    int triesUsed = 0;
    string remainLetters = UPPERCASE_LETTERS;
    string wrongLetters = "";
    auto key = dictionary[difficulty][randInt(0, dictionary[difficulty].size() - 1)];
    string curWord = "";
    for (int i = 0; i < key.getLength(); i ++) curWord.push_back('_'); 
    int blankLeft = key.getLength();

    while (1)
    {
        nextPage();
        printHangman(triesUsed);
        cout << "You have " << triesLeft << " tries left\n";
        cout << "Remaining Letters: "; printSpace(remainLetters);
        cout << "Wrong Letters: "; printSpace(wrongLetters);

        if (triesUsed >= 2) cout << "Hint 1: " << key.getHint1() << "\n";
        if (triesUsed >= 4) cout << "Hint 2: " << key.getHint2() << "\n";
        if (triesUsed >= 6) cout << "Hint 3: " << key.getHint3() << "\n";
        
        cout << "Word: "; printSpace(curWord);
        char opt;
        while(1)
        {
            cout << "Pick a letter: ";
            cin >> opt;
            if (opt >= 'a' && opt <= 'z') opt -= ('a' - 'A');
            if (remainLetters.find(opt) == string::npos) cout << "Invalid option. ";
            else break;
        }
        remainLetters.erase(remainLetters.find(opt), 1);
        bool in = 0;
        for (int i = 0; i < key.getLength(); i ++)
            if (key.getWord()[i] == opt)
            {
                curWord[i] = opt;
                blankLeft--;
                in = 1;
            } 
        if (in) 
        {
            cout << "Good choice.\n";
            cout << "Word: "; printSpace(curWord);
        }
        else
        {
            cout << opt << " does not exist in this word.\n";
            triesLeft--;
            triesUsed++;
            wrongLetters.push_back(opt);
        }
        if (blankLeft == 0) 
        {
            cout << "You made it!\n";
            cout << "The word is: " << key.getWord() << "\n";
            cout << "All hints: \n";
            cout << "Hint 1: " << key.getHint1() << "\nHint 2: " << key.getHint2() << "\nHint3: " << key.getHint3() << "\n";
            break;
        }
        if (triesLeft == 0)
        {
            cout << "Game over!\n";
            printHangman(triesUsed);
            cout << "The word is: " << key.getWord() << "\n";
            break;
        }
    }

    cout << "Play again? Y/N";
    char yn;
    cin >> yn;
    if (yn == 'Y' || yn == 'y') startPage(dictionary);
}

void printSpace(const string& __word)
{
    for (auto i : __word) cout << i << " ";
    cout << "\n";
}

void nextPage()
{
    for (int i = 0; i < PAGE_SIZE; i ++) cout << "\n";
}