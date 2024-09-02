#include <iostream>
using namespace std;

int main() 
{
  int a = 2 , b = 4
  //Binary AND operator
  cout << "a&b is" << (a&b) << endl;
  
  //Binary OR operator
  cout << "a|b is" << (a^b) << endl;
  
  //Binary XOR operator
  cout << "a^b is" << (a^b) << endl;
  
  //Left sift operator
  cout << "a<<L is" << (a<<) << endl;
  
  // Right sift operator
  cout << "a>>L is" << (a>>) << endl;
  
  //one complement operator
  cout << "-(a) is" << - (a) << endl;
  return 0;
}
