#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  if (!argc) {
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

  std::string s2 = std::string(argv[3]);

  int pos = fileStr.find(argv[2]);

  for (int i = 0; i < s1len; i++) {
    if (i < s2len) {
      fileStr[pos + i] = s2[i];
    } else {
      fileStr[pos + i] = '';
    }
  }

  std::cout << pos << std::endl;

  std::string outfileName = infile + ".replace";

  std::ofstream outfile(outfileName.c_str());

  file.close();

  return 0;
}
