/************************************************************************************************
	Name: 		CoachLDEW
	Date: 		06.13.2024
	Purpose: 	In this program I will create a Random Number Generator.  Being that this is a
			 	computer program, it will never be truly random, but it will be a simulation of 
				one
*************************************************************************************************/

#include <iostream>			//This library contains standard input and output processes
#include <random>			//This library allows the program to produce random numbers using combinations of generators and distributions


using namespace std;

int main()
{
	random_device rd;								//This is the Random Engine
	uniform_int_distribution<int> dist(1, 10);		//This is the random distribution between 1 and 10



	for (int i = 0; i < 10; i++)
	{
		int x = dist(rd);							//The distribution with the random engine for X-Coordinate
		int y = dist(rd);							//The distribution with the random engine for Y-Coordinate

		cout << "These are the random coordinates: (" << x << ", " << y << ")" << endl;
	}

	return 0;
}