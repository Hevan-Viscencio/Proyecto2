#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{

    std::cout << "Juego de Mascotas" << std::endl;
    
    //se crean 3 instancias
    Mascota m1,m2,m3;
    m1.EstablecerNombre("Axel");
    m2.EstablecerNombre("Rocky");
    m3.EstablecerNombre("Solovino");        


    //Hay de salida, Entrada, Ambas


    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();



    return 0;
}