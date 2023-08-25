#include <iostream>
#include <string>
using namespace std;
int main()
{
    string letters{};
    cout << "Enter a string of letters: ";
    getline(cin, letters);

    size_t num_of_letters{letters.length()};
    int position{};

    for(char c: letters)
    {
        size_t space = num_of_letters - position;
        while(space > 0)
        {
            cout << " ";
            space--;
        }

        for(size_t i = 0; i < position; i++)
            cout << letters.at(i);
        
        cout << c;

        for(int i = position - 1; i >= 0; i--)
        {
            auto k = static_cast<size_t>(i);
            cout << letters.at(k);
        }

        cout << endl;
        position++;
    }

    return 0;
} 