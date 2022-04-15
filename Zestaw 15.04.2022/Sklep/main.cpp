#include <iostream>
#include <string>

using namespace std;

class Sprzedawca{
    private:
        string imie;
        string nazwisko;
        int numerID;
    public:
        void Wczytaj(string imie, string nazwisko, int numerID ){
            this->imie = imie;
            this->nazwisko = nazwisko;
            this->numerID = numerID;
        }
        const void WypiszSprzedawce(){
            cout<<endl<<"Imie: "<<imie<<endl<<"Nazwisko: "<<nazwisko<<endl<<"Numer ID: "<<numerID<<endl;
        }
        Sprzedawca(string imie, string nazwisko, int NumerID){
            this->imie = imie;
            this->nazwisko = nazwisko;
            this->numerID = numerID;
        }
        Sprzedawca(){
            cout<<endl;
        }
        string ReturnImie(){return imie;}
        string ReturnNazwisko(){return nazwisko;}
        int ReturnID(){return numerID;}
        void SetImie(string imie){this->imie = imie;}
        void SetNazwisko(string nazwisko){this->nazwisko = nazwisko;}
        void SetID(int numerID){this->numerID = numerID;}
};

class Kasa : public Sprzedawca{
    private:
        double utarg;
        double kasetka;
        int id;
        Sprzedawca s1;
    public:
        Kasa(double utarg, double kasetka, int id, string imie, string nazwisko, int NumerID){
            this->utarg = utarg;
            this->kasetka = kasetka;
            this->id = id;
            s1.SetID(NumerID);
            s1.SetImie(imie);
            s1.SetNazwisko(nazwisko);
        }
        const void Wypisz(){
            cout<<"Utarg: "<<utarg<<endl<<"Kasetka: "<<kasetka<<endl<<"ID: "<<id<<endl<<"Sprzedawca: "<<endl<<s1.ReturnImie()<<endl<<s1.ReturnNazwisko()<<endl<<s1.ReturnID();
        }

};

int main(){
    string imie;
    string nazwisko;
    int numerID;
    cout<<endl<<"Imie: ";
    cin>>imie;
    cout<<endl<<"Nazwisko: ";
    cin>>nazwisko;
    cout<<endl<<"Numer ID sprzedawcy: ";
    cin>>numerID;
    double utarg;
    double kasetka;
    int id;
    cout<<endl<<"Utarg: ";
    cin>>utarg;
    cout<<endl<<"Kasetka: ";
    cin>>kasetka;
    cout<<endl<<"ID kasy:";
    cin>>id;
    Kasa k1(utarg, kasetka, id, imie, nazwisko, numerID);
    k1.Wypisz();

    return 0;
}