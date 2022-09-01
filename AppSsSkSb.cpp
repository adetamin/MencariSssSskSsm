#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "=========================================================================" << endl;
	cout << "PROGRAM MEMERIKSA APAKAH SEGITIGA SAMA SISI ATAU SAMA KAKI ATAU SEMBARANG" << endl;
	cout << "=========================================================================" << endl;

	cout << "Masukan panjang 3 sisi = ";
	cin >> a; cin >> b; cin >> c;
    cout << "=========================================================================" << endl;
	if (a == b && b == c)
	{
		cout << "Hasilnya adalah = " << " Segitiga sama sisi " << endl;
	}
	else
		if (a == b || b == c || c == a)
		{
			cout << "Hasilnya adalah = " << " Segitiga sama kaki " << endl;
		}
		else

			cout << "Hasilnya adalah = " << " Segitiga sembarang " << endl;
    cout << "=========================================================================" << endl;
	return 0;

}