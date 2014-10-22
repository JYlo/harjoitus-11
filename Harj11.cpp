/***********************************************
*Harjoitus 11
*Jouni Ylönen
*Kuvaus:
*Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
*seuraavalta:
*
*VALIKKO
*0. Lopetus
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*6. Syota uudet luvut laskemista varten
*
*Versio: 1.0
*PVM: 8.10.2014
************************************************/
#include <iostream>
using namespace std;

void main(void)
{
	float a, b, c;

	cout << "Anna kaksi kokonaislukua" << endl;
	cin >> a >> b;
	cout << endl;

	while (1)
	{
		cout << "VALIKKO" << endl
			<< "0. Lopetus" << endl
			<< "1. Summa" << endl
			<< "2. Erotus" << endl
			<< "3. Tulo" << endl
			<< "4. Osamaara" << endl
			<< "5. Jakojaannos" << endl
			<< "6. Anna uudet luvut"
			<< endl;


		cin >> c;
		cout << endl;

		if (c == 0)
			break;
		if (c == 1)
			cout << (a + b) << endl;
		if (c == 2)
			cout << (a - b) << endl;
		if (c == 3)
			cout << (a * b) << endl;
		if (c == 4)
			cout << (a / b) << endl;
		if (c == 5)
		{
			while (a > b || a == b)
			{
				a = a - b;
			}
			cout << a << endl;
		}
		if (c == 6)
			cin >> a >> b;
	}
}
