#include <iostream>
using namespace std;

int main ()
	{
		int v,t,S;
		
		cout <<"---Menghitung Jarak Tempuh Perjalanan---"<<endl;
		
		cout <<"/nMasukan Kecepatan M/Detik= ";
		cin >> v;
		
		cout <<"/nMasukan Waktu yang di Tempuh (Detik) = ";
		cin >> t;
		
		//Rumus
		S = v * t;
		cout <<"Jarak yang di Tempuh adalah = "<<S<<"Meter";
		
		return 0;
	}
