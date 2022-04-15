#include <iostream>

using namespace std;

class Czas{
    private:
        int godzina;
        int minuta;
    public:
        Czas(int godzina, int minuta){
            this->godzina = godzina;
            this->minuta = minuta;
        }
        Czas(){
            this->godzina = 0;
            this->minuta = 0;
        }
        void ustawCzas(int godzina, int minuta){
            this->godzina = godzina;
            this->minuta = minuta;
        }
        void JakiCzas(){
            cout<<endl<<this->godzina<<":"<<this->minuta<<endl;
        }
        int returnMinuta(){
            return minuta;
        }
        int returnGodzina(){
            return godzina;
        }
};

class Rezerwacja : public Czas{
    private:
        string imie;
        string nazwisko;
        Czas godzina;
    public:
        Rezerwacja(string imie, string nazwisko, int godz, int minuta){
            this->imie = imie;
            this->nazwisko = nazwisko;
            this->godzina.ustawCzas(godz, minuta);
        }
        void JakiCzas(){
            cout<<endl<<godzina.returnGodzina()<<" : "<<godzina.returnMinuta()<<endl;
        }

};

int main(){
    string imie = "Default";
    string nazwisko = "Deafult";
    int godzina = 12;
    int minuta = 30;
    Czas * cz1 = new Czas(godzina, minuta);

    Rezerwacja * r1 = new Rezerwacja(imie, nazwisko, cz1->returnGodzina(), cz1->returnMinuta());
    
    r1->JakiCzas();

    return 0;
}