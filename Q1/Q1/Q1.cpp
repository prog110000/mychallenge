#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{

	if (std::strcmp(argv[1], "--file") == 0)
	{
		
	}
	else if(std::strcmp(argv[1], "-help") == 0)
	{
		std::cout << "\nto use the program first enter --file file_path" << std::endl;
		std::cout << " -f function_name     to search for specific function in PE file" << std::endl;
		std::cout << " -U     to search for all urls in the PE file\n" << std::endl;
	}
	else
	{
		std::cout << "\ninvalid input!\nEnter -help command for help\n" << std::endl;
	}
}