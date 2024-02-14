/*
FILE           : m1.cpp
PROJECT        : Major Assignment - 1
PROGRAMMER     : Vekariya Jasmi Devjibhai  Student id : 8960251
FIRST VERSION  : 01-02-2024
DESCRIPTION    : This program delineates the code to display characters and their mean values.
*/
#include <stdio.h>
int main()
{
	//Declaring and initializing variable.
	// declaring the initial of my last name that is 'v'
	const char initial = 'j';
	int i = 'a'; 
	int addition = 0; 
	int count = 0; 
	int mean = 0;

	//Using loop to print alphabets and the ASCII in front of the letter 'v'.
	//the loop checks the letter is less than or equal to 'z' 
	while (i <= 'z')
	{
		addition += i;
		count++;

		if (i == initial)
			//If the letter is the initial the ASCII value will be displayed
		{
			printf("%c\t%d\n", i, mean);
		}
		else
			//mean of ASCII values other characters will be displayed.
		{
			mean = addition / count;
			printf("%c\t%c\n", i, mean);
		}
		i++;
	}
	return 0;
}