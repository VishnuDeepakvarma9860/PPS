#include <iostream>
using namespace std;

int main() 
{
  int a = 3, b = 4;
  
  //Conditional operator
  int result = ( a < b) ? b : a;
  cout << "The gretest number is" << result << endl;
  
  return 0;
}
