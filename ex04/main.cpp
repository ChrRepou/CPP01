#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc < 4 || argc > 4)
    {
        std::cout << "Error! Not the right amount of documents\n"
                  << "Correct format: ./main filename s1 s2" << std::endl;
        return 1;
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile;
    inputFile.open(argv[1]);

    if (!inputFile.is_open()) {
        std::cerr << "Could not open the file." << std::endl;
        return 1;
    }

    std::ofstream outputFile;
    std::string extension = ".replace";
    outputFile.open(argv[1] + extension);

    if (!outputFile.is_open()) {
        std::cerr << "Could not open the file." << std::endl;
        return 1;
    }

    //indexes to check if a s1 exist in file
    long unsigned int start = 0;
    long unsigned int end = 0;
    long unsigned int string_exists_in_line = 1;
    long unsigned int keep_going = 0;

    std::string line;
    while (std::getline(inputFile, line)) {
        long unsigned int i;
        long unsigned int j;
        string_exists_in_line = 1;
        for (i = 0; i < line.length(); i++)
        {
            if (line[i] == s1[0])
            {
                start = i;
                keep_going = 1;
                for (j = 0; (j < s1.length() && i < line.length()); j++, i++)
                {
                    if (s1[j] != line[i])
                    {
                        string_exists_in_line = 0;
                        break;
                    }
                    if ((i + 1) == line.length() && (j + 1) != s1.length())
                        string_exists_in_line = 0;
                    if ((j + 1) == s1.length())
                    {
                        end = i + 1;
                        string_exists_in_line = 2;
                    }
                }
            }
            if (string_exists_in_line == 2)
                break;
            if (keep_going)
            {
                i = start;
                keep_going = 0;
            }
        }
        if (string_exists_in_line == 2)
            std::cout << "the string: " << s1 << " exists in the line: " << line << " start index: " << start << " end index: " << end << std::endl;
        if (string_exists_in_line != 2)
            outputFile << line << std::endl;
        else
        {
            for (i = 0; i < start; i++)
                outputFile << line[i];
            outputFile << s2;
            for (i = end; i < line.length(); i++)
                outputFile << line[i];
            outputFile << std::endl;
        }
    }



    inputFile.close();
    outputFile.close();
    return 0;
}
