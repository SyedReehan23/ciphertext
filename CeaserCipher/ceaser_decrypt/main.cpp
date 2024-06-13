#include <iostream>
#include <string>
std::string caesar_decrypt(const std::string &text, int key) {
    std::string result;
    for (char ch : text) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base - key + 26) % 26 + base;
        }
        result += ch;
    }
    return result;
}

int main() {
    std::string ciphertext;
    int key;

    std::cout << "Enter the ciphertext: ";
    std::getline(std::cin, ciphertext);

    std::cout << "Enter the key (shift amount): ";
    std::cin >> key;

    std::string plaintext = caesar_decrypt(ciphertext, key);

    std::cout << "Plaintext: " << plaintext << std::endl;

    return 0;
}