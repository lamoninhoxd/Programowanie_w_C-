#include<iostream>

using namespace std;

class Data{
    private:
        int dzien, miesiac, rok;
    
    public:
        Data(int dzien, int miesiac, int rok){
            this->dzien = dzien;
            this->miesiac = miesiac;
            this->rok = rok;
        }
        void wpisz(int dzien, int miesiac, int rok){
            this->dzien = dzien;
            this->miesiac = miesiac;
            this->rok = rok;
        }
        void prezentuj(){
            cout<<dzien<<"."<<miesiac<<"."<<rok<<endl;
        }
};

int main(){

    Data * d1 = new Data(26,03,2022);
    d1->prezentuj();
    d1->wpisz(14,06,2012);
    d1->prezentuj();
    return 0;
}