#include <iostream>
#include "headers/fachada.h"
#include "headers/persona.h"
#include "headers/lista_enlazada.h"
#include "headers/nodo.h"
#include "headers/lista.h"

using namespace std;
using namespace Fachada;
using namespace Modelo;
using namespace Lista;
using namespace Collections;

int main()
{
	Lista_Enlazada<Persona> personas;

	// Persona persona;
	// persona.set_nombres("test");
	// persona.set_edad(16);
	// persona.MostrarInfo();
	// cin.ignore();
	
	// personas.add_inicio(persona);
	// personas.mostrar_lista();
	return 0;
}
