#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double c) {
	if (c >= 70)
		return "saitama lulus";
	else
		return "saitama gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "saitama lulus";
	else
		return "saitama gagal";
}

int main() {
double niM, nilB
cout << "Masukan nilai Matematika = ";
cin >> nilM;
cout << "Masukan nilai Bahasa Inggris = ";
cin >> nilB;
cout << "staus kelulusan = " << status(rerata(nilM, nilB));
cout << "status kelulusan  ke 2 = " << status(rerata(nimlM, nilB), nilM);
return 

