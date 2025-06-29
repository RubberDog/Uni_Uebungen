// Pruefungsfragengenerator_semester2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const string Dateiname = "fragen.csv";

typedef struct {
	string Frage;
	string Antwort;
}FrageAntwort;

void einlesen(vector<FrageAntwort> &);
void ausgeben(vector<FrageAntwort>);


int main()
{
	unsigned int AnzahlFragen = 0;
	unsigned int ZeitMinuten = 0;
	vector<FrageAntwort>Listealle;
	vector<FrageAntwort>Liste;
	vector<int>Ausgesucht;

	cout << "Geben Sie die Anzahl der gewünschten Prüfungsfragen ein!: ";
	cin >> AnzahlFragen;
	cout << "Benötigte Zeit in Minuten angeben!: ";
	cin >> ZeitMinuten;
	einlesen(Listealle);

	ausgeben(Liste);

	return 0;
}

void einlesen(vector<FrageAntwort> &L) {
	//std::ifstream inputfile("/datei.txt");
	ifstream DATEI;
	DATEI.open(Dateiname, ios::in);
	string temp;
	FrageAntwort zwischenspeicher;

	while (getline(DATEI,temp))
		{
		zwischenspeicher.Frage = temp.substr(0, temp.find(';'));
		zwischenspeicher.Antwort = temp.substr(temp.find(';'),temp.find('\n'));
		L.push_back(zwischenspeicher);
		}
	DATEI.close();
}

void ausgeben(vector<FrageAntwort> L) {
	for (int i = 0; i< L.size(); i++)
	{
		cout << "Frage: " << L[i].Frage << endl;
		cout << "Antwort: " << L[i].Antwort << endl;
	}
}
