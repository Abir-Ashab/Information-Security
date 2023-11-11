#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include "aes.h"
#include "rsa.h"
#include "sha512.h"
using namespace std;


int main() {
    while(true) {
        printf("Type the name of algorithm : ");
        string name; cin >> name;
        if(name == "aes") aes();
        else if(name == "rsa") rsa();
        else if(name == "sha512") sha512();
        else {
            printf("This algorithm doesn't exist here\n");
            break;
        }
    }
    return 0;
}
