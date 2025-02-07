#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
 string nombre;
 double ticketAdult = 10.0, ticketChild = 6.0;
 double adultAmount, childAmount;

 cout << "entre el nombre de la pelicula: ";
 cin >> nombre;

 cout << "entre tickets para adultos vendidos: ";
 cin >> adultAmount;

 cout << "entre tickets para children vendidos: ";
 cin >> childAmount;
 double gross = (ticketAdult * adultAmount) + (ticketChild * childAmount);

 double net = gross * 0.2;

 double distributor = gross - net;

 cout << setw(40) << left << "Movie Name:"
      << "\"" << nombre << "\"" << endl;
 cout << setw(43) << left << "Adult Tickets Sold:" << adultAmount << endl;
 cout << setw(43) << left << "Child Tickets Sold:" << childAmount << endl;
 cout << setw(40) << left << "Gross Box Office Profit:" << setprecision(2) << fixed << showpoint << setw(2) << left << '$' << gross << endl;
 cout << setw(40) << left << "Net Box Office Profit:" << setw(2) << left << '$' << net << endl;
 cout << setw(40) << left << "Amount Paid to Distributor:" << setw(2) << left << '$' << distributor << endl;

 return 0;
}
