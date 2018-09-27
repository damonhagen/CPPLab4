#include <iostream>
#include <string>
// Include the library that will allow you to convert from string to integer
#include <sstream>

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  int a;
  int b;
  int c;
  int d;
  std::cout << "Please enter 3 numbers" << std::endl;
  std::cin >> a >> b >> c;






  // Multiply the three integers
  d=a*b*c;




  // Output the result of the multiplication
std::cout << "The result of the multiplication is:" << d << std::endl;



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  

  std::string line1;
  std::string line2;
  std::string line3;

  std::cout << "Please enter a 5 syllable phrase!" << std::endl;

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  getline (std::cin, line1) ;

  std::cout << "Please enter a 7 syllable phrase!" << std::endl;

  getline (std::cin, line2) ;

  std::cout << "Please enter a final 5 syllable phrase!" << std::endl;

  getline (std::cin, line3) ;

  std::cout << "Here is your haiku!" << std::endl;

  std::cout << line1 << std::endl;
  std::cout << line2 << std::endl;
  std::cout << line3 << std::endl;


  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  
  std::stringstream num1(myNumber);

  int x = 0;
  num1 >> x;

  
  std::cout << x << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}