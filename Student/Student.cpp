#include <iostream>

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

        Data(){
            dzien = 0;
            miesiac = 0;
            rok = 0;
        }

        void wpisz(int dzien, int miesiac, int rok){
            this->dzien = dzien;
            this->miesiac = miesiac;
            this->rok = rok;
        }

        void wpisz(Data data){
            this->dzien = data.dzien;
            this->miesiac = data.miesiac;
            this->rok = data.rok;
        }

        const void prezentuj(Data data){
            cout<<data.dzien<<"."<<data.miesiac<<"."<<data.rok<<endl;
        }
};

class Student{
    private:
        string imie, nazwisko;
        int indeks;
        Data data;
    public:
        Student(string imie, string nazwisko, int indeks, int dzien, int miesiac, int rok){
            this->imie = imie;
            this->nazwisko = nazwisko;
            this->indeks = indeks;
            this->data.wpisz(dzien, miesiac, rok);
        }
        const void Wyswietl(Student s){
            cout<<"Imie: "<<s.imie<<endl
            <<"Nazwisko: "<<s.nazwisko<<endl<<
            "Indeks: "<<s.indeks<<endl<<"Data: ";
            data.prezentuj(s.data);
        }

};

int main(){

    Student * s1 = new Student("sample", "sample", 123, 10, 23, 2922);
    s1->Wyswietl(*s1);
    
    return 0;
}