#include <iostream>
#include <string>



using namespace std;



class Ksiazka{
    private:
        string tytul;
        string autor;
        int rok_wydania;
        int cena;
        bool CzyJestRabat;
    public:
        Ksiazka(string tytul, string autor, int rok_wydania, double cena, bool CzyJestRabat){
            this->tytul = tytul;
            this->autor = autor;
            this->rok_wydania = rok_wydania;
            this->cena = cena;
            this->CzyJestRabat = CzyJestRabat;
        }
        Ksiazka(){
            cout<<"Tworzymy Ksiazke!"<<endl;
        }
        string GetTytul(){return tytul;}
        string GetAutor(){return autor;}
        int GetRokWydania(){return rok_wydania;}
        double GetCena(){return cena;}
        bool GetRabat(){return CzyJestRabat;}
        void SetTytul(string tytul){this->tytul = tytul;}
        void SetAutor(string autor){this->autor = autor;}
        void SetRokWydania(int rok_wydania){this->rok_wydania = rok_wydania;}
        void SetCena(double cena){this->cena = cena;}
        void SetRabat(bool CzyJestRabat){this->CzyJestRabat = CzyJestRabat;}
        void Wypisz(){
            cout<<endl<<"Tytul: "<<tytul<<endl<<"Autor: "<<autor<<endl<<"Rok Wydania: "<<rok_wydania<<endl<<"Cena: "<<cena<<endl<<"Jest rabat? : ";
            this->JestRabat();
        }
        void JestRabat(){
            double Rabat;
            if(CzyJestRabat){
                cout<<"Jaki rabat w %: ";
                cin>>Rabat;
                cout<<"Cena po rabacie: "<<cena*(Rabat/100)<<endl;
            }
            else{
                cout<<"Brak rabatu"<<endl;
            }
        }


};



int main(){

    Ksiazka * k1 = new Ksiazka("Sample", "Author", 1997, 50, true);
    Ksiazka k2;
    Ksiazka * k3 = new Ksiazka("Zmierzch", "Slowacki", 1945, 64, false);
    Ksiazka k4;
    Ksiazka k5;

    k2.SetAutor("Sample Author");
    k2.SetTytul("Sample Title");
    k2.SetCena(50);
    k2.SetRokWydania(2015);
    k2.SetRabat(false);
    k2.Wypisz();

    k1->Wypisz();
    k3->Wypisz();

    return 0;
}