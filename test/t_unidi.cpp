#include "unidi.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

int main (int argc, char * argv[]) {

    cout << "Testando concat.." << endl;
 
    vector<int> vtr1 = {10,20,30,40,50};  
    vector<int> vtr2 = {60,70,80,90,100};
    vector<int> vtr3;
    vector<int> vtr4 = {10,20,30,40,50,60,70,80,90,100};

    concat(vtr1,vtr2,vtr3);

    assert(vtr3 == vtr4);

    cout << "Testando split.." << endl;

    unsigned int ind = 5;
    vector<int> vtr5;
    vector<int> vtr6;

    assert(split(vtr4,vtr5,vtr6,ind) == true);

    cout << "Testando merge.." << endl;
    vector<int> vtr7 = {1,2,3,4,5};
    vector<int> vtr8 = {6,7,8,9,10};
    vector<int> vtr9;
    vector<int> vtr10 = {1,2,3,4,5,6,7,8,9,10};

    merge(vtr7,vtr8,vtr9);

    assert(vtr9 == vtr10);

    cout << "Testando partition.." << endl;

    vector<int> vtr11 = {5,9,7,2,1,11,36,59,62};
    vector<int> vtr12 = {5,9,7,2,1};
    vector<int> vtr13 = {11,36,59,62};
    vector<int> vtr14;
    vector<int> vtr15;
    int chave1 = 10;

    assert(partition(vtr11,vtr14,vtr15,chave1) == true);
    assert(vtr12 == vtr14);
    assert(vtr13 == vtr15);

    /*assert(celsius2Fahrenheit(0) == 32);
    assert(celsius2Fahrenheit(3) == 37.4);
    assert(celsius2Fahrenheit(8) == 46.4);
    assert(celsius2Fahrenheit(15) == 59);
    assert(celsius2Fahrenheit(23) == 73.4);*/
 
    //cout << "Testando conversao de Fahrenheit para Celsius.." << endl;
    //assert(fahrenheit2Celsius(32) == 0);
    // Escreva outros casos de teste
    return 0;

}
