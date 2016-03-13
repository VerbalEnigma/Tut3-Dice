#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include "Dice.h"
using namespace std;
int Dice::roll()
{
	int result = (rand() % 6) + 1;//genearing a rabdom number
	return result;
}
float average(Dice, int)
{
	int avg;//the variable to store the avaergae roll 
	return avg;
}
float average(int size, int Array[])
{
	int avg;//the variable to store the avaergae roll 
	return avg;
}
int main()
{
	Dice dice1;
	int rollTimes;
	int size;
	int ArrayofIntegers[];
	char roll;//variable to initate rolling of dice 
	cout << "Dice roll" << endl;
	cout << "If you wish to roll the dice enter lower case y for yes or enter n for no " << endl;
	cin >> roll;
	int i = 0;//counter variable to keep track of the number of times dice rolled 
	while (1)
	{
		rollTimes = 0;
		if (roll == 'y')
			rollTimes


	}


	average(dice1, rollTimes);
	average(size, Array[]);

	return 0;
}