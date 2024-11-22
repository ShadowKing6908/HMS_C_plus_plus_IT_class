#include <iostream>
using namespace std;

int main() {
float m_r1 = 0;
float m_r2 = 0;
float m_math1 = 0;
float m_math2 = 0;
float m_math3 = 0;

cout << "Widerstands-Parallelschaltung" << "\n";
cout << "R1 in Ohm: ";
cin >> m_r1;
cout << "R2 in Ohm: ";
cin >> m_r2;

m_math1 = m_r1 * m_r2;
m_math2 = m_r1 + m_r2;
m_math3 = m_math1 / m_math2;

cout << "Der Widestand der Gesamtschaltung ist " << m_math3 << " Ohm";

return 0;
}
