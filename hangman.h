//hangman.h
#include <iostream>
#include "init.h"
#include "hangmanModel.h"

using std::vector;

/// @brief Game initialization
void init(vector <word> dictionary[]);

/// @brief Play game
void game(vector <word> dictionary[]);

/// @brief Display starting page
void startPage(vector <word> dictionary[]);

/// @brief Display difficulty choosing page
void chooseDifficulty(vector <word> dictionary[]);

/// @brief Play game in specified difficulty
/// @param difficulty DIFFICULTY_EASY, DIFFICULTY_NORMAL, DIFFICULTY_DIFFICULT, DIFFICULTY_CHINA
void playGame(const int& difficulty, vector <word> dictionary[]);

/// @brief Print a word with spaces between letters
/// @param __word The hidden word printed in "_ _ _" form
void printSpace(const string& __word);

/// @brief Scroll down 30 lines.
void nextPage();