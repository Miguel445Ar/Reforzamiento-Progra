#ifndef __INVENTARIO_HPP__
#define __INVENTARIO_HPP__

#include "Producto.hpp"

class Inventario {
    Producto** productos;
    Proveedor** proveedores;
    size_t cantidadProductos, cantidadProveedores;
public:
    Inventario(){
        productos = nullptr;
        proveedores = nullptr;
    }
    void InsertarProducto(size_t idProducto, std::string nombre, std::string tipo, size_t cantidad, char categoria, size_t anio, size_t precio, Proveedor* proveedor){
        if(existeProveedor(proveedor) == false){
            std::cout << "\nEl proveedor asociado no existe\n";
            return;
        }
        Producto** aux = new Producto*[cantidadProductos + 1];
        for(size_t i = 0; i<cantidadProductos;++i)
            aux[i] = productos[i];
        aux[cantidadProductos] = new Producto(idProducto,nombre,tipo,cantidad,categoria,anio,precio,proveedor);
        if(productos) delete[] productos;
        productos = aux;
        ++cantidadProductos;
    }
    bool existeProveedor(Proveedor* proveedor){
        for(size_t i = 0; i<cantidadProveedores; ++i){
            if(proveedores[i]->getRUC() == proveedor->getRUC())
                return true;
        }
        return false;
    }
};
#endif