// StoreTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int ans = 0;
	bool gameOn = true;

	while (gameOn)
	{

		//i need to make a begginng screen for the user to interact with 
		std::cout << "Hello there and welcome to my store what would you like to do. \n\n 1) Buy \n 2) Sell \n 3) View Inventory \n 0) Exit" << std::endl;


		if (std::cin >> ans) {
			switch (ans)
			{
			case 0:
					gameOn = false;
					break;
			case 1:
				std::cout << "working " << ans << std::endl;
				system("pause");
				break;
			case 2:
				std::cout << "working " << ans << std::endl;
				system("pause");
				break;
			case 3:
				std::cout << "working " << ans << std::endl;
				system("pause");
				break;
			default:
				std::cout << "Please enter a number between 0-3"<< std::endl;
				system("pause");
				break;
			}
		}
		system("CLS");
   
	}
}
