#include <iostream>
#include <algorithm>
#include <deque>
#include <cctype>
#include <string>

bool is_palindrome(const std::string &s)
{
    std::deque<char> d;
    for(char c: s)
    {
        if(std::isalpha(c))
            d.push_back(std::toupper(c));
    }

    char c1{};
    char c2{};
    while(d.size() > 1)
    {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if(c1 != c2)
            return false;
    }
    return true;
}

int main()
{
    std::cout << "\nWelcome to PALINDROME checker" << std::endl;
    std::string x;
    std::cout << "\nEnter a word or sentence to check: ";
    std::getline(std::cin, x);
    std::cout << std::endl;
    if(is_palindrome(x) == true)
    {
        std::cout << "The given word or sentence is a palindrome" << std::endl;
    }
    else
    {
        std::cout << "The given word or sentence is not a palindrome" << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
