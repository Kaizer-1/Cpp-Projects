#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long);
int main()
{
    cout << endl;
    int num{}; 
    cout << "Enter an integer to know its factorial: ";
    cin >> num;
    cout << "\n" << factorial(num) << endl;
    cout << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}