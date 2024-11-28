#include <iostream>
using namespace std;

int main() {
	float side_a;
	float side_b;
	float side_c;
	
	cout << "Konstuierbarkeit eines Dreiecks pruefen" << "\n";
	cout << "Seite a: ";
	cin >> side_a;
	
	cout << "Seite b: ";
	cin >> side_b;
	
	cout << "Seite c: ";
	cin >> side_c;
	
	if (side_a + side_b >= side_c 
		&& side_a + side_c >= side_b 
		&& side_b + side_c >= side_a) 
		{
			cout << "Das Dreieck ist Konstuierbar" << "\n";
		}
		else {
			cout << "Das Dreieck ist nicht Konstruierbar" << "\n";
		}
	
	return 0;
}
