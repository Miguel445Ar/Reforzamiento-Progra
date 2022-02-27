#include "utils.hpp"
#include <string>

using std::cout;
using std::cin;
using cursor::gotoxy;
using cursor::ocultar_cursor;
using std::string;

typedef unsigned int ui;


class Fecha {
    ui dia;
    ui mes;
    ui anio;
public:
    Fecha(ui dia = 0, ui mes = 0, ui anio = 0): dia(dia), mes(mes), anio(anio) {}
    ui getDia(){
        return this->dia;
    }
    ui getMes() {
        return this->mes;
    }
    ui getAnio() {
        return this->anio;
    }
    void setDia(ui dia) {
        this->dia = dia;
    }
    bool operator==(Fecha f){
        return dia == f.dia && mes == f.mes && anio == f.anio;
    }
};


class Venta {
    ui monto;
    ui codigoVenta;
    Fecha fechaVenta;
public:
    Venta(ui monto, ui codigoVenta, Fecha fechaVenta): monto(monto), codigoVenta(codigoVenta), fechaVenta(fechaVenta){}
    ui getMonto(){
        return this->monto;
    }
    Fecha getFechaVenta(){
        return this->fechaVenta;
    }
};


class Boleta {
    ui codigo;
    string nombreCliente;
    Fecha fechaEmision;
public:
    Boleta(ui codigo,string nombreCliente,Fecha fechaEmision): codigo(codigo),nombreCliente(nombreCliente), fechaEmision(fechaEmision) {}
    bool igualAFechaVenta(Venta v){
        return fechaEmision == v.getFechaVenta();
    }
};


int main(){
    /*int b = 8;
    void* p = &b;
    cout << *((int*)p) << "\n";*/
    Venta v(100,342545,Fecha(5,11,2022));
    Boleta b(45565768,"Gilma",Fecha(5,11,2022));
    (b.igualAFechaVenta(v) == true)?cout << "\nCorresponde :D":cout << "\nNo corresponde :(, estoy endudado :,v";
    return 0;
}