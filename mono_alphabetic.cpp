#include<bits/stdc++.h>
using namespace std;

string plaintext = "abcdefghijklmnopqrstuvwxyz", ciphertext = "AGDYSHJKLQWERTFUIOMZXCVBNP";

void decrypt_msg(string msg) {
    string decoded = "";

    for(int i = 0; i < msg.size(); i++) {
        if(msg[i] < 'A' || msg[i] > 'Z') {
            decoded += msg[i];
            continue;
        }
        for(int j = 0; j < 26; j++) {
            if(msg[i] == ciphertext[j]) {
                decoded += plaintext[j];
                break;
            }
        }
    }
    cout << "Decrypted message: ";
    cout << decoded << "\n";
}
void encrypt_msg(string msg) {
    string encoded = "";

    for(int i = 0; i < msg.size(); i++) {
        if(msg[i] < 'a' || msg[i] > 'z') {
            encoded += msg[i];
            continue;
        }
        for(int j = 0; j < 26; j++) {
            if(msg[i] == plaintext[j]) {
                encoded += ciphertext[j];
                break;
            }
        }
    }

    cout << "Encrypted message: ";
    cout << encoded << "\n";
    decrypt_msg(encoded);
}


int main() {
    string msg;
    cout << "Enter your messgae: ";
    getline(cin, msg);
    transform(msg.begin(), msg.end(), msg.begin(), ::tolower);
    encrypt_msg(msg);
}