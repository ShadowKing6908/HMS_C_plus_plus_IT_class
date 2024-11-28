#include <iostream>
using namespace std;


int main()  {
	
	float m_wert;
	float m_paus = 5.50;
	float m_betrag;
	
	cout << "Berechnung des Rechnungsbetrages" << "\n";
	cout << "Bestellwert in Euro: ";
	
	cin >> m_wert;
	
	if (199.99 >= m_wert) {
		m_betrag = m_wert + m_paus;
	}
	else {
		m_betrag = m_wert;
	}
	
	cout << "Rechnungsbetrag: " << m_betrag << " Euro";
}
