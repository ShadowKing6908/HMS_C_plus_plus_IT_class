#include <iostream>
using namespace std;

int main() {

int m_dividend = 0;
int m_divisor = 0;
int m_ergebnis = 0;
int m_rest = 0;

cout << "Ganzzahlige Division mit Rest" << "\n";
cout << "Dividend: ";
cin >> m_dividend;
cout << "Divisor: ";
cin >> m_divisor;
m_ergebnis = m_dividend / m_divisor;
m_rest = m_dividend%m_divisor;
cout << "Das Ergebnis der Division " << m_dividend << ":" << m_divisor << " ist " << m_ergebnis << " rest " << m_rest;
return 0;
}
