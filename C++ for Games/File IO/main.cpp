#include <fstream>
#include <iostream>

int main()
{
	// Write ascii files
	{
		std::ofstream highscores("highscores.txt");
		if (!highscores)
		{
			std::cerr << "ERROR: Could not open file for writing." << std::endl;
			return 1;
		}

		highscores << "DAN " << 2014 << std::endl;
		highscores << "TOM " << 2012 << std::endl;
		highscores << "LUC " << 2009 << std::endl;
		highscores << "SUZ " << 1978 << std::endl;

		if (highscores.bad())
		{
			std::cerr << "ERROR: An error occured while writing to the file." << std::endl;
			return 1;
		}

		highscores.close();
		//file will close when it goes out of scope.
	}

	{
		std::ofstream highscores("highscores.txt", std::ios::app);
		if (!highscores)
		{
			std::cerr << "ERROR: The file failed to open." << std::endl;
			return 1;
		}

		highscores << "JEF " << 1977 << std::endl;

		if (highscores.bad())
		{
			std::cerr << "ERROR: Failed to write to file." << std::endl;
			return 1;
		}

		highscores.close();
	}
	return 0;
}