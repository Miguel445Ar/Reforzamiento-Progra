#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;




class Carro {
   int puertas;
   int llantas;
   string modelo;
public:
   Carro(int puertas = 0, int llantas = 0, char* modelo = (char*)" "): puertas(puertas), llantas(llantas), modelo(modelo) {}
   ~Carro(){
       cout << "\nEjecutando el destructor >:D " << modelo;
   }
   void manejar(){
       cout << "\nYo manejo el carro " << modelo;
   }
};


// Relaciones entre clases
// Asociacion
// Agregacion
// Composicion
// Dependencia

int main(){
    Carro* c = new Carro(4,4,(char*)"nose");
    Carro arr[2] = {Carro(),Carro()};

    arr[0].manejar();
    delete c;
    return 0;
}