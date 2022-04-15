#include <iostream>
#include <string>

using namespace std;

class Samochod{
    private:
        string marka;
        string model; 
        int przebieg;
    public:
        Samochod(){
            cout<<"Tworzymy Samochod!"<<endl;
        }
        Samochod(string marka, string model, int przebieg){
            this->marka = marka;
            this->model = model;
            this->przebieg = przebieg;
        }
        Samochod(string marka, string model){
            this->marka = marka;
            this->model = model;
            this->przebieg = 0;
        }
        const void Wypisz(){
            cout<<endl<<"Marka: "<<marka<<endl<<"Model: "<<model<<endl<<"Przebieg: "<<przebieg<<endl;
        }
        void Jedz(int dystans){
            this->przebieg += dystans;
        }

};

int main(){

    Samochod * s1 = new Samochod();
    Samochod * s2 = new Samochod("Opel", "Corsa");
    Samochod * s3 = new Samochod("Peugeot", "206", 124000);
    s2->Wypisz();
    s3->Wypisz();
    s3->Jedz(500);
    s3->Wypisz();
    return 0;
}