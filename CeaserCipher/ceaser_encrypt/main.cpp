#include <iostream>
#include <string>
std::string caesar_encrypt(const std::string &text, int key) {
    std::string result;
    for (char ch : text) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base + key) % 26 + base;
        }
        result += ch;
    }
    return result;
}

int main() {
    std::string plaintext;
    int key;

    std::cout << "Enter the plaintext: ";
    std::getline(std::cin, plaintext);

    std::cout << "Enter the key (shift amount): ";
    std::cin >> key;

    std::string ciphertext = caesar_encrypt(plaintext, key);

    std::cout << "Ciphertext: " << ciphertext << std::endl;

    return 0;
}
