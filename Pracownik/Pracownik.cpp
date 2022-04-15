#include<iostream>



using namespace std;

struct Pracownik{
    string imie, nazwisko;
    int placa;
};

void wypisz(Pracownik p){
    cout<<"Imie: "<<p.imie<<endl<<"Nazwisko: "<<p.nazwisko<<endl<<"Placa: "<<p.placa<<endl;
}

void wypisz(Pracownik *p){
    cout<<"Imie: "<<p->imie<<endl<<"Nazwisko: "<<p->nazwisko<<endl<<"Placa: "<<p->placa<<endl;
}

void wczytaj(Pracownik &p, string &imie, string &nazwisko, int &placa){

    p = {
        imie,
        nazwisko,
        placa,
    };

    wypisz(p);
    
}

void wczytaj(Pracownik *p, string *imie, string *nazwisko, int *placa){
    *p = {
        *imie,
        *nazwisko,
        *placa,
    };
    wypisz(p);
}

int main(){

    string imie, nazwisko;
    int placa;

    imie="Sample";
    nazwisko="Sample";
    placa=999;

    Pracownik p1;
    wczytaj(&p1, &imie, &nazwisko, &placa);

    Pracownik p2;
    wczytaj(p2, imie, nazwisko, placa);

    return 0;
}