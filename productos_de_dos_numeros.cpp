// productos_de_dos_numeros.cpp : 
// miau
//

#include <iostream>

int producto(int uno, int doh)
{
    if (uno == 0 or doh == 0)
        return 0;
    else
    {
        return uno + producto(uno, doh - 1);
    }
}
int main()
{
    int uno, doh, respuesta;

    std::cout << "pon el primer numero: ";
    std::cin >> uno;
    std::cout << "ahora el segundo numero ";
    std::cin >> doh;
    respuesta = producto(uno, doh);
    std::cout << "El resultado de los 2 numeros es: " << respuesta << std::endl;

}
