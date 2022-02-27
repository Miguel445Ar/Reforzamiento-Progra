#ifndef __PROVEEDOR_HPP__
#define __PROVEEDOR_HPP__

#include <iostream>
#include <string>


class Proveedor {
    size_t RUC;
    std::string razonSocial;
    std::string categoria;
    std::string direccion;
    size_t telefono;
public:
    Proveedor(size_t RUC,std::string razonSocial,std::string categoria,std::string direccion,size_t telefono):
        RUC(RUC),razonSocial(razonSocial), categoria(categoria), direccion(direccion), telefono(telefono) {}
    size_t getRUC(){
        return this->RUC;
    }
};

#endif