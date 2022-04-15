#include <iostream>

using namespace std;

class Prostokat{
    private:
        int a,b;
    public:
        Prostokat(int a, int b){
            this->a = a;
            this->b = b;
        }
        int Pole(){
            return a*b;
        }
        int Obwod(){
            return 2*a+2*b;
        }
};

int main(){
    int wybor;
    int a, b;
    cout<<endl<<"MENU"<<endl<<"1.ZWROC POLE"<<endl<<"2.ZWROC OBWOD"<<endl<<"3.ZAKONCZ PROGRAM"<<endl;
    cin>>wybor;
    switch(wybor){
        case 1:
        {
            cout<<"Podaj a ";
            cin>>a;
            cout<<endl<<"Podaj b ";
            cin>>b;
            Prostokat * p1 = new Prostokat(a, b);
            cout<<p1->Pole()<<endl;
            wybor = 0;
            break;
        }
        case 2:
        {
            cout<<"Podaj a ";
            cin>>a;
            cout<<endl<<"Podaj b ";
            cin>>b;
            Prostokat * p2 = new Prostokat(a, b);
            cout<<p2->Obwod()<<endl;
            wybor = 0;
            break;
        }
        default:
            break;
    }
    return 0;
}