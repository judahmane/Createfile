#include <iostream>
#include <fstream>
void createfile()
{
	std::string location;
	std::ofstream file;
	file.open(location = "C:\\Users\\User\\ForFileProject\\Log.txt");
	file << "Test";
	std::cout << location;
	std::cin.get();
}
int main()
{
	//call here
	createfile();
}