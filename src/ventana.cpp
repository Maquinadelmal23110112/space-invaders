#include <iostream>
#include <string>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <Dibujo.hpp>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo Palabra1("Hola", 0,0);
    Dibujo Palabra2("Adios",5,5);

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while (true)
    {
        this_thread::sleep_for(0.1s);
        Palabra1.Dibujar(Pantalla);
        Palabra2.Dibujar(Pantalla);

        Pantalla.Print();
        Pantalla.Clear();
        cout << Pantalla.ResetPosition();

    }

    return 0;
}
