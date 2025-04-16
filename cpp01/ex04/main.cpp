#include <fstream>
#include <iostream>

std::string ft_replace(std::string value, int s1len, int pos, std::string s2) {


  std::string newString = value.substr(0, pos) + s2;

  return newString;
}

int main(int argc, char **argv) {
  if (argc != 4) {
    return 1;
  }

  std::string infile = argv[1];

  std::ifstream file(argv[1]);

  if (!file.is_open()) {
    std::cout << "cant open file" << std::endl;
    return 1;
  }


  std::string fileStr;
  std::string line;
  while (std::getline(file, line)) {
    fileStr = fileStr.append(line + '\n');
  }

  int s1len = std::string(argv[2]).length();
  int s2len = std::string(argv[3]).length();


  int pos = fileStr.find(argv[2]);


  std::cout <<   ft_replace(fileStr, s1len, pos, argv[3]) << std::endl;

  std::cout << pos << std::endl;

  std::string outfileName = infile + ".replace";

  std::ofstream outfile(outfileName.c_str());

  file.close();

  return 0;
}

