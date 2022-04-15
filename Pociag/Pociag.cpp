#include<iostream>

using namespace std;

class Pociag{
    private:
        int ileWagonow, ileMiejscwWagonie;
        int aktualne;
    public:
        Pociag(int ileWagonow, int ileMiejscwWagonie){
            this->ileWagonow = ileWagonow;
            this->ileMiejscwWagonie = ileMiejscwWagonie;
            this->aktualne = 0;
        }
        void Wsiadanie(){
            if(aktualne == ileWagonow*ileMiejscwWagonie) cout<<"Nie ma juz wolnych miejsc"<<endl;
            else aktualne++;
        }
        void Wysiadanie(){
            aktualne--;
        }
        void DolaczWagon(){
            ileWagonow++;
        }
        void OdlaczWagon(){
            ileWagonow--;
        }
        void AktualnyStan(){
            cout<<"Ilosc wagonow: "<<ileWagonow<<endl<<"Laczna ilosc dostepnych miejsc: "<<ileWagonow*ileMiejscwWagonie<<endl<<"Zajete miejsca: "<<aktualne<<endl;
        }
};

int main(){

    Pociag * pociung = new Pociag(1, 2);
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    pociung->DolaczWagon();
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    pociung->Wsiadanie();
    pociung->AktualnyStan();
    return 0;
}