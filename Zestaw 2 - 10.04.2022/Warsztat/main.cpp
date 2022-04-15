#include <iostream>
#include <string>


using namespace std;

class Warsztat{
    private:
        int czas_rozpoczecia;
        int czas_zakonczenia;
        string nazwa_warsztatu;
        string nazwisko_prowadzacego;
        int sala;
    public:
        const void Wyswietl(){
            cout<<endl<<"Czas rozpoczecia: "<<czas_rozpoczecia
            <<endl<<"Czas zakonczenia: "<<czas_zakonczenia
            <<endl<<"Nazwa Warsztatu: "<<nazwa_warsztatu
            <<endl<<"Nazwisko prowadzacego: "<<nazwisko_prowadzacego
            <<endl<<"Numer sali: "<<sala<<endl;
        }
        Warsztat(
            int czas_rozpoczecia,
            int czas_zakonczenia,
            string nazwa_warsztatu,
            string nazwisko_prowadzacego,
            int sala
        ){
            this->czas_rozpoczecia = czas_rozpoczecia;
            this->czas_zakonczenia = czas_zakonczenia;
            this->nazwa_warsztatu = nazwa_warsztatu;
            this->nazwisko_prowadzacego = nazwisko_prowadzacego;
            this->sala = sala;
        }

};

int main(){
    int czas_rozpoczecia;
    int czas_zakonczenia;
    string nazwa_warsztatu;
    string nazwisko_prowadzacego;
    int sala;
    
    cin>>czas_rozpoczecia>>czas_zakonczenia>>nazwa_warsztatu>>nazwisko_prowadzacego>>sala;
    Warsztat warsztat(czas_rozpoczecia, czas_zakonczenia, nazwa_warsztatu, nazwisko_prowadzacego, sala);
    warsztat.Wyswietl();
    return 0;
}