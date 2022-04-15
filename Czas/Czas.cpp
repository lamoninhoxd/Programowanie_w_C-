#include<iostream>

using namespace std;

class Czas{
    private:
        int godzina, minuta;
    public:
        Czas(int godzina, int minuta){
            this->godzina = godzina;
            this->minuta = minuta;
        }
        void wczytaj(int godzina, int minuta){
            this->godzina = godzina;
            this->minuta = minuta;
        }

        void prezentuj(){
            cout<<godzina<<":"<<minuta<<endl;
        }
};

int main(){

    Czas * time = new Czas(12, 35);
    time->prezentuj();
    time->wczytaj(15, 22);
    time->prezentuj();

    return 0;
}