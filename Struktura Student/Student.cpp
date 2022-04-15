#include <iostream>

using namespace std;

struct Student{
    string imie, nazwisko;
    int NumerIndeksu;
    int oceny[5];
};

void DodajDaneStudenta(Student &s){
    string imie, nazwisko;
    int NumerIndeksu;
    int ocena;

    cout<<endl<<"Podaj imie: ";
    cin>>imie;
    cout<<endl<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<endl<<"Podaj numer indeksu: ";
    cin>>NumerIndeksu;
    cout<<endl<<"Podaj oceny: ";
    
    for(int i=0;i<5;i++){
        cin>>ocena;
        s.oceny[i] = ocena;
    }
    
    s.imie = imie;
    s.nazwisko = nazwisko;
    s.NumerIndeksu = NumerIndeksu;
    
}

void DodajDaneStudenta(Student *s){
    string imie, nazwisko;
    int NumerIndeksu;
    int ocena;

    cout<<endl<<"Podaj imie: ";
    cin>>imie;
    cout<<endl<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<endl<<"Podaj numer indeksu: ";
    cin>>NumerIndeksu;
    cout<<endl<<"Podaj oceny: ";
    
    for(int i=0;i<5;i++){
        cin>>ocena;
        s->oceny[i] = ocena;
    }
    
    s->imie = imie;
    s->nazwisko = nazwisko;
    s->NumerIndeksu = NumerIndeksu;
    
}


void WypiszDaneStudenta(Student &s){
    cout<<"Imie: "<<s.imie<<endl;
    cout<<"Nazwisko: "<<s.nazwisko<<endl;
    cout<<"Numer Indeksu: "<<s.NumerIndeksu<<endl;
    for(int i=0;i<5;i++){
    cout<<"Ocena "<<i+1<<" : "<<s.oceny[i]<<endl;
    }
}

void WypiszDaneStudenta(Student *s){
    cout<<"Imie: "<<s->imie<<endl;
    cout<<"Nazwisko: "<<s->nazwisko<<endl;
    cout<<"Numer Indeksu: "<<s->NumerIndeksu<<endl;
    for(int i=0;i<5;i++){
    cout<<"Ocena "<<i+1<<" : "<<s->oceny[i]<<endl;
    }
}

void SredniaOcen(Student &s){
    int srednia=0;
    for(int i=0;i<5;i++){
        srednia=srednia+s.oceny[i];
        if(i==4){
            srednia=srednia/5;
        }
    }
    cout<<"Srednia ocen studenta "<<s.imie<<" "<<s.nazwisko<<" wynosi: "<<srednia<<endl;
}

void SredniaOcen(Student *s){
    int srednia=0;
    for(int i=0;i<5;i++){
        srednia=srednia+s->oceny[i];
        if(i==4){
            srednia=srednia/5;
        }
    }
    cout<<"Srednia ocen studenta "<<s->imie<<" "<<s->nazwisko<<" wynosi: "<<srednia<<endl;
}

int main(){
    Student s1;
    DodajDaneStudenta(s1);
    WypiszDaneStudenta(s1);
    SredniaOcen(s1);
    Student * s2 = new Student();
    DodajDaneStudenta(*s2);
    WypiszDaneStudenta(*s2);
    SredniaOcen(*s2);
    delete s2;
    WypiszDaneStudenta(s2);
    return 0;
}