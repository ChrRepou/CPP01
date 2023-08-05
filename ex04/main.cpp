#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc < 4 || argc > 4)
    {
        std::cout << "Error! Not the right amount of documents\n"
                  << "Correct format: ./main filename s1 s2" << std::endl;
        return 1;
    }

    std::fstream outputFile;
    outputFile.open(argv[1], std::ios::in | std::ios::out);

    if (!outputFile.is_open()) {
        std::cerr << "Could not open the file." << std::endl;
        return 1;
    }

    std::ofstream replacedFile;
    std::string extension = ".replace";
    replacedFile.open(argv[1] + extension);

    if (!replacedFile.is_open()) {
        std::cerr << "Could not open the file." << std::endl;
        return 1;
    }



    outputFile.close();
    return 0;
}
