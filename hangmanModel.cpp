//hangmanModel.h
#include <iostream>

using namespace std;

void printHangman(const int& triesUsed)
{
    switch(triesUsed)
    {
        case 0:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   \n";
            cout << "                  \n";
            cout << "                  \n";
            cout << "                   \n";
            cout << "                     \n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            cout << "                     \n";
            cout << "                     \n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            break;
        case 1:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     \n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            cout << "                     \n";
            cout << "                     \n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            break;
        case 2:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                     | \n";
            cout << "                     |  \n";
            cout << "                     |   \n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            break;
        case 3:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\n";
            cout << "                   / | \n";
            cout << "                  /  |  \n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            break;
        case 4:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\\\n";
            cout << "                   / | \\\n";
            cout << "                  /  |  \\\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    \n";
            cout << "                   \n";
            cout << "                  \n";
            break;
        case 5:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\\\n";
            cout << "                   / | \\\n";
            cout << "                  /  |  \\\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    /\n";
            cout << "                   /  \n";
            cout << "                  /    \n";
            break;
        case 6:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O T T O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\\\n";
            cout << "                   / | \\\n";
            cout << "                  /  |  \\\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    /\\\n";
            cout << "                   /  \\\n";
            cout << "                  /    \\\n";
            break;
        case 7:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                   OOOOO\n";
            cout << "                  O X X O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\\\n";
            cout << "                   / | \\\n";
            cout << "                  /  |  \\\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    /\\\n";
            cout << "                   /  \\\n";
            cout << "                  /    \\\n";
            break;
        case 8:
            cout << "_____________________\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    /\\\n";
            cout << "                   _____\n";
            cout << "                  O X X O\n";
            cout << "                  O     O\n";
            cout << "                   OOOOO\n";
            cout << "                     |\n";
            cout << "                    /|\\\n";
            cout << "                   / | \\\n";
            cout << "                  /  |  \\\n";
            cout << "                     |\n";
            cout << "                     |\n";
            cout << "                    /\\\n";
            cout << "                   /  \\\n";
            cout << "                  /    \\\n";
            break;
        default: cout << "Error!"; break;
    }
        
}