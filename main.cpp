#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <codecvt>
#include <locale.h>

void convertLineTypeJson( std::string inFileName, std::string outFileName, bool isLocale )
{
  // std::string doesn't cover Turkish characters
	if(!isLocale)
	{
		setlocale(LC_ALL, "Turkish");
	} 

	std::ifstream infile(inFileName);
	std::ofstream outfile(outFileName);

	for( std::string line; getline( infile, line ); )
	{
    std::cout << line << "\n";
		outfile << line << "," << "\n";
	}
  
}

int main()
{
  
	convertLineTypeJson(<<Your Line Style Json goes Here>>,<<Output File Name>>,true);

	return 0;
  
}
