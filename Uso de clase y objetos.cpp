#include <iostream>
#include <string>

using namespace std;

class libro
{
private:
	string titulo;
	string autor;
	int aniopublicacion;
	string edicion;
	int cantidadPaginas;

public:

	void ingresarDatos()
	{
		cin.ignore();

		cout << "Ingrese el titulo del libro: ";
		getline(cin, titulo);

		cout << "Ingrese el autor del libro: ";
		getline(cin, autor);

		cout << "Ingrese el año de publicación del libro: ";
		cin >> aniopublicacion;

		cin.ignore();

		cout << "Ediccion: ";
		getline(cin, edicion);

		cout << "Ingrese la cantidad de páginas del libro: ";
		cin >> cantidadPaginas;

	}

	void mostrarDatos()
	{
		cout << "Titulo: " << titulo << endl;
		cout << "Autor: " << autor << endl;
		cout << "Año de publicación: " << aniopublicacion << endl;
		cout << "Edición: " << edicion << endl;
		cout << "Cantidad de páginas: " << cantidadPaginas << endl;
	}

};

int main()
{
	const int cantidadLibros = 5;

	libro libros[cantidadLibros];

	cout << "REGISTRO DE LIBROS\n";

	for (int i = 0; i < cantidadLibros; i++)
	{
		cout << "\nLibro " << i + 1 << endl;
		libros[i].ingresarDatos();
	}

	cout << "\nLISTA DE LIBROS REGISTRADOS\n";

	for (int i = 0; i < cantidadLibros; i++)
	{
		libros[i].mostrarDatos();
	}

}
