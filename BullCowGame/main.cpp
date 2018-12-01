// BullCowGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool PlayAgain();

int main()
{
	bool playAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		playAgain = PlayAgain();
	} while (playAgain);
	return 0;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I,m thinking of?\n";
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		std::cout << "Enter your guess:";
		std::string guess = GetGuess();
		std::cout << "Your guess is: " << guess << std::endl;
	}
}

std::string GetGuess() 
{
	std::string guess;
	std::getline(std::cin, guess);
	return guess;
}

bool PlayAgain()
{
	std::cout << "Do you want to play again (y/n) ?";
	std::string response = "";
	std::getline(std::cin, response);
	return (response[0] == 'y' || response[0] == 'Y');
}

