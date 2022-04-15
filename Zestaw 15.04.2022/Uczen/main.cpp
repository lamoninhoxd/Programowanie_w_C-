#include <iostream>

using namespace std;

class Uczen{
    private:
        string imie;
        string nazwisko;
        int liczba_pytan;
        int poprawne_odp;
    public:
        void Wczytaj(string imie, string nazwisko, int liczba_pytan, int poprawne_odp){
            this->imie = imie;
            this->nazwisko = nazwisko;
            this->liczba_pytan = liczba_pytan;
            this->poprawne_odp = poprawne_odp;
        }
        int Procent(){
            return poprawne_odp/liczba_pytan*100;
        }

};


int main(){
    string imie;
    string nazwisko;
    int liczba_pytan;
    int poprawne_odp;
    cin>>imie>>nazwisko>>liczba_pytan>>poprawne_odp;
    Uczen * u1 = new Uczen();
    u1->Wczytaj(imie, nazwisko, liczba_pytan, poprawne_odp);
    cout<<u1->Procent()<<endl;

    return 0;
}