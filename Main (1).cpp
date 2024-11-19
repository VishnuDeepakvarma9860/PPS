#include <iostream>
using namespace std;
int globalVar = 10;
int main() {
    int localVar = 20;
    static int staticVar = 0;
    cout<<"Global Variable:"<<globalVar<<endl;
    cout<<"Local Variable:"<<localVar<<endl;
    staticVar++;
    cout<<"Static Variable:"<<staticVar<<endl;
     return 0;
}