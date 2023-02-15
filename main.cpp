//main.cpp
#include "hangman.h"
#include <iostream>

using namespace std;

int main()
{
    vector <word> dictionary[DIFFICULTY_COUNT];

    init(dictionary);
    game(dictionary);
}