#include <iostream>
#include <string>

using namespace std;



int main()
{
	int testy;
	
	cin >> testy;
	string *odpowiedzi = new string[testy];


	for (int z = 0; z < testy; z++) 
	{
		int liczba, dzielnik = 1, cyfry, lewa = 0, prawa = 0;
		bool znacznik = false;
		cin >> cyfry;
		cin >> liczba;
		int *tab = new int[cyfry];
		for (int i = cyfry - 1; i >= 0; i--)
		{

			tab[i] = (liczba / dzielnik) % 10;

			dzielnik *= 10;
		}
		/*for (int i = 0; i < cyfry; i++)
		{
			cout << tab[i];
		}
		cout << endl;*/

		for (int i = 1; i < cyfry - 1; i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				lewa += tab[j];
			}

			for (int j = i + 1; j < cyfry; j++)
			{
				prawa += tab[j];
			}
			if (prawa == lewa)
			{
				odpowiedzi[z] = "Yes";
				znacznik = true;
				break;
			}
			//cout << prawa;
			prawa = 0;
			lewa = 0;
			//cout << endl;
		}
		if (!znacznik)
		{
			odpowiedzi[z] = "No";
		}
		delete[] tab;
	}
	for (int z = 0; z < testy; z++)
	{
		cout << odpowiedzi[z] << endl;
	}
	delete[] odpowiedzi;
	


    return 0;
}

