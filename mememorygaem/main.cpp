
#include <iostream>
#include <unistd.h>// Has the sleep(x) func
#include <new>

int allocate();


int main()
{
		std::cout << "MEMEORY GAME" << std::endl;

std::cout << "...";
sleep(5);
std::cout << "..";
sleep(5);
std::cout << ".";
//loll
bool fail = false;
int choice;

	do
	{
		
	std::cout << "PICK FROM 3 DOORS->\n1] Door 1\n2]Door 2\n3] Door 3";
	std::cin >> choice;
	switch(choice)
	{
		case 1:
				{
			std::cout <<"You fucking die lol ur bad get gud retard ";
			fail = true;
			break;
				}	
		case 2:
				{
			std::cout <<"Terry davis gave you a high five. GGs :D";
			fail = true;
			break;
				}	
		case 3:
				{
			std::cout <<"You were given 64 bytes of ram. GGs.";
				allocate();
			fail = true;
			break;
				}
		default:
				{
			std::cout <<"Do it again.";
			break;
				}

	}

	}while(fail != true);


	return 0;
}

int allocate()
{
std::size_t CAP = 16;
int input;
		int* Array = new int[CAP];
	
	std::cout << "Now with the 64 bytes. Allocate them...\n";

	for (int i = 0; i < 16 ; i++) //Takes in user input for each slot
		{
			std::cin >> input;
			Array[i] = input;
		}
	std::cout << "Above are you inputed values]\n";
	for (int b = 0; b < 16 ; b++)
	{
		std::cout << b << ": " << Array[b] << "\n";
	}
	std::cout << "Above are your outputed values]\n";
delete[] Array;
	return 0;
}
