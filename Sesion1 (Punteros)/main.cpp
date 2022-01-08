#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::srand;
using std::rand;


// Ejercicio

typedef unsigned short us;

struct Operacion {
    char tipo;
    us monto;
    Operacion(char tipo = ' ', us monto = 0) : tipo(tipo), monto(monto) {}
};

void genera_arreglo(Operacion*& arreglo, us n){
    for(us i = 0; i < n;++i){
        us num = 1 + rand()% 2;
        char tipo = (num == 1)?'R':'D';
        us monto = 50 + rand()% (1500-50+1);
        arreglo[i] = Operacion(tipo,monto);
    }
}

void imprime_arreglo(Operacion*& arreglo, int n){
    for(us i = 0; i < n;++i){
        cout << arreglo[i].tipo << " " << arreglo[i].monto << "\n";
    }
    cout << "\n";
}

void tipo_operacion_mayor(Operacion*& arreglo, int n){
    us cantR = 0;
    us cantD = 0;
    for(us i = 0; i < n;++i){
        if (arreglo[i].tipo == 'R')
            ++cantR;
        else
            ++cantD;
    }
    char res = (cantR > cantD)?'R':'D';
    cout << "\nEl tipo de operacion con mayor cantidad de registros es " << res << "\n";
}

void promedio_de_retiros(Operacion*& arreglo, int n){
    double promedio = 0;
    for(us i = 0; i < n;++i){
        if(arreglo[i].tipo = 'R')
            promedio += arreglo[i].monto;
    }
    promedio = (double)(promedio / n);

    cout << "\nEl promedio de montos es: " << promedio << "\n";
}

void ordena_arreglo(Operacion*& arreglo, int n){
    for(us i = 0; i < n - 1; ++i){
        if(arreglo[i].monto < arreglo[i+1].monto){
            us monto = arreglo[i].monto;
            arreglo[i].monto = arreglo[i+1].monto;
            arreglo[i+1].monto = monto;
            (i == 0)?i-=1:i-=2;
        }
    }
}

int main() {
    /*int arr[] = {1,5,6,7,8,9};
    //int* newArr = arr;    
    int global = 5;
    int* newArr = new int[global];
    for(size_t i = 0; i<5;++i)
        newArr[i] = i + 1;
    for(size_t i = 0; i<5;++i)
        cout << newArr[i]  << " ";
    */
    srand(time(NULL));
    us tamanio = 15 + rand()% (50-15+1);
    Operacion* arreglo = new Operacion[tamanio];
    genera_arreglo(arreglo,tamanio);
    imprime_arreglo(arreglo,tamanio);
    tipo_operacion_mayor(arreglo,tamanio);
    promedio_de_retiros(arreglo,tamanio);
    ordena_arreglo(arreglo,tamanio);
    imprime_arreglo(arreglo,tamanio);
    return 0;
}