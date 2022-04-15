#include<iostream>
#include <string>
using namespace std;

struct Klient{
    string imie, nazwisko, miejscowosc;
    int telefon;
};

class Klientk{
public:
    string imie, nazwisko, miejscowosc;
    int telefon;

    Klientk(string imie, string nazwisko, string miejscowosc, int telefon){
        imie = imie;
        nazwisko = nazwisko;
        miejscowosc = miejscowosc;
        telefon = telefon;
    }
    Klientk(){
        imie = "sample";
        nazwisko = "sample";
        miejscowosc = "sample";
        telefon = 000000000;
    }
};

void wypisz(Klient k){
    cout<<"Imie: "<<k.imie<<endl<<"Nazwisko: "<<k.nazwisko<<endl<<"Miejscowosc: "<<k.miejscowosc<<endl<<"Telefon: "<<k.telefon<<endl;
}

void wypisz(Klientk k){
    cout<<"Imie: "<<k.imie<<endl<<"Nazwisko: "<<k.nazwisko<<endl<<"Miejscowosc: "<<k.miejscowosc<<endl<<"Telefon: "<<k.telefon<<endl;
}

void wypisz(Klientk *k){
    cout<<"Imie: "<<k->imie<<endl<<"Nazwisko: "<<k->nazwisko<<endl<<"Miejscowosc: "<<k->miejscowosc<<endl<<"Telefon: "<<k->telefon<<endl;
}

void wczytaj(Klient *k,string *imie, string *nazwisko, string *miejscowosc, int *telefon){

    *k = {
        *imie,
        *nazwisko,
        *miejscowosc,
        *telefon
    };

}

void wczytaj(Klient &k, string &imie, string &nazwisko, string &miejscowosc){

    k = {
        k.imie = imie,
        k.nazwisko = nazwisko,
        k.miejscowosc = miejscowosc,
    };

}


void wczytaj_klienta(Klientk &k, string &imie, string &nazwisko, string &miejscowosc, int &telefon){
    k.imie = imie;
    k.nazwisko = nazwisko;
    k.miejscowosc = miejscowosc;
    k.telefon = telefon;
}

void wczytaj_klienta(Klientk *k, string *imie, string *nazwisko, string *miejscowosc, int *telefon){
    k->imie = *imie;
    k->nazwisko = *nazwisko;
    k->miejscowosc = *miejscowosc;
    k->telefon = *telefon;

}
    


int main(){
    string imie, nazwisko, miejscowosc;
    int telefon;
    //STRUKTURY
    cout<<"STRUKTURY"<<endl;
    Klient ks1;
    imie = "Adam";
    nazwisko = "Kowalski";
    miejscowosc = "Warszawa";
    telefon = 123456789;
    wczytaj(&ks1, &imie, &nazwisko, &miejscowosc, &telefon);
    wypisz(ks1);
    Klient ks2;
    wczytaj(ks2, imie, nazwisko, miejscowosc);
    wypisz(ks2);
    //KLASY
    cout<<"KLASY"<<endl;
    Klientk kk1;
    wypisz(kk1);
    wczytaj_klienta(kk1, imie, nazwisko, miejscowosc, telefon);
    wypisz(kk1);
    Klientk kk2;
    wypisz(kk2);
    wczytaj_klienta(&kk2, &imie, &nazwisko, &miejscowosc, &telefon);
    wypisz(kk2);
    Klientk * kk3 = new Klientk();
    wypisz(kk3);
    wczytaj_klienta(kk3, &imie, &nazwisko, &miejscowosc, &telefon);
    wypisz(kk3);
    delete kk3;
    wypisz(kk3);

    return 0;
}