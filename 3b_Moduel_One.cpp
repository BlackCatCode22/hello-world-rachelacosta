//3b) Get an int from the user and double it

#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int number{ };
	std::cin >> number;

	std::cout << "Double integar is: " <<  number * 2 << '\n'; 

    std::cout << "Correct!";

	return 0;


}