#include <iostream>
#include <fstream>
void createfile()
{
	std::string location;
	std::ofstream file;
	std::cout << "Enter File Path\n";
	std::cout << "Reference File Path: C:\\Users\\User\\ForFileProject\\Log.txt\n";
	std::cin >> location;
	file.open(location);
	file << "Log File Created";
	std::cout << std::endl;
	std::cout << "Log File Created\n";
	std::cout << ">>>";
	std::cin.get();
	std::cin.get();
}
int main()
{
	//call here
	createfile();
}
