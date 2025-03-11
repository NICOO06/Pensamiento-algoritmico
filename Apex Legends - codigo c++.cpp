#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    double c, t, daño;
    cout <<"Ingrese el numero de zona en el que se encuentra: ";
    cin >>c ;
    cout << "Ingrese el tiempo en el que estuvo dentro de la zona: ";
    cin >>t ;
    if (c==1) {
        daño=t*2;
        cout << fixed << setprecision(2);
        cout << "El daño recibido por estar en la primer zona es: "<<daño<< endl;
    }else if (c==2){
        daño=t*5;
        cout << fixed << setprecision(2);
        cout<< "El daño recibido por estar en la segunda zona es: "<<daño<<endl;
    } else if (c==3){
        daño=t*10;
        cout << fixed << setprecision(2);
        cout<<"El daño recibido por estar en la tercera zona es: "<<daño<<endl;
    }else if (c>=4){
        daño=t*25;
        cout << fixed << setprecision(2);
        cout<<"El daño recibido por estar en la cuarta o mayor zona es: "<<daño<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    return 0;
}