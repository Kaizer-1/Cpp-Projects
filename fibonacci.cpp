#include <iostream>
using namespace std;
unsigned long long fibonacci(unsigned long long n);
int main()
{
    int num;
    cout << "\nEnter an integer for fibonacci sequence: ";
    cin >> num;
    cout << "\n" << fibonacci(num) << endl;
    cout << endl;
} 

unsigned long long fibonacci(unsigned long long n)
{
    if(n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}