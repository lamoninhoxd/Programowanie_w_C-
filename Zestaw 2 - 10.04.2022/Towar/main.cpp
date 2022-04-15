#include <iostream>
#include <string>

using namespace std;

class Towar{

    private:
        string nazwa;
        int cena;
        int waga;
    public:
        void Wypisz(){
            cout<<endl<<"Nazwa: "<<nazwa<<endl<<"Cena: "<<cena<<endl<<"Waga: "<<waga<<endl;
        }
        void Wczytaj(string nazwa, int cena, int waga){
            this->nazwa = nazwa;
            this->cena = cena;
            this->waga = waga;
        }
        string GetNazwa(){return nazwa;}
        int GetCena(){return cena;}
        int GetWaga(){return waga;}
        void SetNazwa(string nazwa){this->nazwa = nazwa;}
        void SetCena(int cena){this->cena = cena;}
        void SetWaga(int waga){this->waga = waga;}
        void UstawDaneTowaru(string nazwa, int cena, int waga){
            this->nazwa = nazwa;
            this->cena = cena;
            this->waga = waga;
        }
        void ZwiekszCene(int cena){this->cena = this->cena + cena;}

};

int main(){
    string nazwa;
    int cena;
    int waga;
    cin>>nazwa>>cena>>waga;
    Towar t1;
    Towar t2;
    Towar t3;
    t1.Wczytaj(nazwa, cena, waga);
    t2.UstawDaneTowaru(nazwa, cena, waga);
    t2.Wypisz();
    t3.SetCena(cena);
    t3.SetNazwa(nazwa);
    t3.SetWaga(waga);
    cout<<t3.GetCena()<<endl<<t3.GetNazwa()<<endl<<t3.GetWaga()<<endl;
    t3.ZwiekszCene(cena);
    cout<<t3.GetCena()<<endl;
    return 0;
}