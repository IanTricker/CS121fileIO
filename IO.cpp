#include <iostream>
#include <fstream>
#include <sstream>

int main(){ 
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  std::stringstream ss;
  int counter;
  std::string sNum1;
  std::string sNum2;
  std::string text;
  int totalnum;
  int num1;
  int num2;


  inFile.open("data.csv");
  while(getline(inFile, currentLine)){

    converter.clear();
    converter.str(currentLine);

    getline(converter, sNum1, ',');
    getline(converter, sNum2, ',');
    getline(converter, text, ',');

    converter.clear();
    converter.str("");
    converter << sNum1 << " " << sNum2;
    converter >> num1 >> num2;
    

    totalnum = num1 + num2;
    for(int i=0; i<totalnum; i++){
      std::cout << text << " ";
    } // end for loop
    std::cout << std::endl;
  } // end while loop
  inFile.close();

  return 0;
} // end main
