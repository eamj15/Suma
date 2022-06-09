#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

float N1, N2, N3, P;

int main(){
cout << "\n" << endl;
cout << "INGRESE LA PRIMERA NOTA" << endl;
cin >> N1;
cout << "\n" << endl;
cout << "INGRESE LA SEGUNDA NOTA" << endl;
cin >> N2;
cout << "\n" << endl;
cout << "INGRESE LA TERCERA NOTA" << endl;
cin >> N3;


P = (N1 + N2 + N3) / 3;


cout << "PROMEDIO OBTENIDO ES:" << P << endl;


}
