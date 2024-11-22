#include <iostream>
using namespace std;

int main() {
	
float v_kraftstf = 0;
float g_strecke = 0;
float d_verbrauch = 0;

cout << "Berechnung des Durchschnittsverbrauchs" << "\n";
cout << "verbrauchter Kraftstoff in L:" << "\n";
cin >> v_kraftstf;
cout << "gefahrene Strecke in km:" << "\n";
cin >> g_strecke;
d_verbrauch = v_kraftstf * 100 / g_strecke;
cout << "Der Durchschnittsverbrauch ist " << d_verbrauch << " 1/100km" << "\n";

return 0;
}
