#include <iostream>

using namespace std;

struct Pojemnik{
    int pojemnosc = 0;
    int zawartosc = 0;
};

class SegregacjaSmieci : public Pojemnik{
    Pojemnik PojemnikNaPlastik;
    Pojemnik PojemnikNaSzklo;
    Pojemnik PojemnikNaPapier;

    SegregacjaSmieci();

};

int main(){


    return 0;
}