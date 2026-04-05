#include <iostream>
#define DEFAULT_SIZE 10
using namespace std;

int main() {
	
	int allay[DEFAULT_SIZE];

	for (int i = 0; i < DEFAULT_SIZE; i++)
	{
		allay[i] = srand() % 100 ;

	}

	for (int i = 0; i < DEFAULT_SIZE; i++)
	{
		cout << allay[i] << " ";
	}

	return 0;
}