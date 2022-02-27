#ifndef __PRODUCTO_HPP__
#define __PRODUCTO_HPP__

#include "Proveedor.hpp"

class Producto {
    size_t idProducto;
    std::string nombre;
    std::string tipo;
    size_t cantidad;
    char categoria;
    size_t anio;
    size_t precio;
    Proveedor* proveedor;
public:
    Producto(size_t idProducto, std::string nombre, std::string tipo, size_t cantidad, char categoria, size_t anio, size_t precio, Proveedor* proveedor):
        idProducto(idProducto), nombre(nombre), tipo(tipo), cantidad(cantidad), categoria(categoria),anio(anio), precio(precio), proveedor(proveedor){}
};

#endif