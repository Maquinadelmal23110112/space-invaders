#include <iostream>
#include <string.h>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxiu/screen/screen.hpp>
#include <ftxiu/screen/string.hpp>
#include <ftxiu/screen/terminal.hpp>
#include <fstream>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    fstream archivo;
    archivo.open("./assets/images/canon.txt");
    string canon;
    archivo>>canon;
    archivo.close();

   archivo.open("./assets/images/alien.txt")
    string alien;
    archivo>>alien;
    archivo.close();
    
    int fotograma=0;
    while(true) 
    {
    fotograma++;
    Element personaje = spinner(21,fotograma) | bold|color(Color::Blue1|bgcolor(Color::Aquiamarine);
    Element tanque = text(canon) | bold | color(color::Green) | bgcolor(Color::Blue); 
    Element lienzo = hbox({personaje , tanque });
    
    Screen pantalla = screen :: Create(
        Dimension::Full(),
        Dimension::Full()

        Render(pantalla,lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();
    )
    }
}

