//
// Created by Oscar on 06/11/2023.
//

#include <iostream>
#include <string>

void var() {

    /*
     * Suffixes
     * u, U (non signé)
     * f, F (flottant)
     * l, L (long int)
     * ll, LL (long long int)
     * */

    /*
     * Préfixes
     * 0b (binaire)
     * 0 (octal)
     * 0x (hexadécimal)
     * */

    using namespace std::literals;

    bool is_bool{};
    int number{23};
    float nombre{14.5f};

    int nombre_octal = 0750;
    int nombre_binaire = 0b1101;
    int nombre_hexa = 0x987;

    long long big_nombre = 14'678'876;

    std::string hello_world{"Hello World"};

    const int int_const{123};

    std::cout << is_bool << number << nombre << std::endl;
    std::cout << nombre_octal << nombre_binaire << nombre_hexa << std::endl;
    std::cout << big_nombre << std::endl;
    std::cout << hello_world << std::endl;
    std::cout << int_const << std::endl;

}