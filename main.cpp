/*
Lab 1 - Box office
Nombre: Desteny Hernandez De Juan
Núm. Est: 401-23-3159
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

     string nombre;                                                        // Declaramos nombre de la película.
     double adultPrice = 10.0, childPrice = 6.0, adultAmount, childAmount; // Inicializamos precios de los tickets y declaramos la cantidad de tickets que se van a vender.
     char space;                                                           // Declaramos variable para crear espacios en el terminal.

     cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater."; // Proposito del programa.

     cin.ignore();
     cin.get(space); //  Crea una linea de espacio.

     cout << "Enter the name of the movie: ";
     getline(cin, nombre); // Usuario entra nombre de la película.

     cout << "Enter the amount of adult tickets sold: ";
     cin >> adultAmount; // Usuario entra cantidad de tickets para adultos.

     cout << "Enter the amount of child tickets sold: ";
     cin >> childAmount; // Usuario entra cantidad de tickets para niños.

     cin.ignore();
     cin.get(space); //  Crea una linea de espacio.

     // Gross sales de tickets para adultos y niños
     double gross = (adultPrice * adultAmount) + (childPrice * childAmount);

     // Net sales de tickets, toma el 20% de gross sales
     double net = gross * 0.2;

     // Cantidad pagada al distribuidor
     double distributor = gross - net;

     cout << setw(28) << left << "Movie Name:" << '\"' << nombre << '\"' << endl;
     cout << setw(30) << left << "Adult Tickets Sold:" << adultAmount << endl;
     cout << setw(30) << left << "Child Tickets Sold:" << childAmount << endl;
     cout << setw(28) << left << "Gross Box Office Profit:" << '$' << setprecision(2) << fixed << showpoint << setw(8) << right << gross << endl;
     cout << setw(28) << left << "Net Box Office Profit:" << '$' << setw(8) << right << net << endl;
     cout << setw(28) << left << "Amount Paid to Distributor:" << '$' << setw(8) << right << distributor << endl;

     return 0;
}
