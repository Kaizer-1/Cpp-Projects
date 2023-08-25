#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "\n" << endl;

    string secret_msg{};
    cout << "Enter your secret message: ";
    getline(cin, secret_msg);
    cout << "\nEncrypting Message..." << endl;

    string encrypted_msg{};
    for(char c: secret_msg)
    {
        size_t position = alphabet.find(c);
        if(position != string::npos)
        {
            char new_char{key.at(position)};
            encrypted_msg += new_char; 
        }
        else
        {
            encrypted_msg += c;
        }
    }
    cout << "\nEncrypted Message: " << encrypted_msg << endl; 
    cout << "\nDecrypting Message..." << endl;

    string decrypted_msg{};
    for(char c: encrypted_msg)
    {
        size_t position = key.find(c);
        if(position != string::npos)
        {
            char prev_char{alphabet.at(position)};
            decrypted_msg += prev_char;
        }
        else
        {
            decrypted_msg += c;
        }
    }
    cout << "\nDecrypted Message: " << decrypted_msg << endl;

    cout << endl;
    return 0;
} 