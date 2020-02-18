#include <iostream>
using namespace std;

int c;
int sayac;
int boy() {
	int b;
	cin >> b;

	if (b > 2 && b <= 15 && b % 2 == 1)
		return  b;
	else cout<<"hatali giris tekrar giriniz: ";
		cin >> b;

	if (b > 2 && b <= 15 && b % 2 == 1)
		return  b;
	else cout << "hatali giris tekrar giriniz: "; 
	cin >> b;

	if (b > 2 && b <= 15 && b % 2 == 1)
		return  b;
	else return 0;
}

void duz_ucgen(int c) {
	int n;
	
	for (n = 1; n <= c;) {

		for (int i = 0; i < (c - n) / 2; i++)
			cout << " ";

		for (int i = 0; i < n; i++)
			cout << "*";

		for (int i = 0; i < (c - n) / 2; i++)
			cout << " ";
		cout << "\n";
		n += 2;
	}

}

int rec2(int m){
	if (m == 0)
		return 0;
	cout << " ";
	rec2(m - 1);
}

int rec3(int l) {
	if (l == 0)
		return 0;
	cout << "*";
	rec3(l - 1);
}

int rec1(int k) {

	rec2((c - k) / 2);
	rec3(k);

	cout << "\n";
	if (k >= c)
		return 0;
	else rec1(k + 2);
}

int rec4(int k) {
	rec2((c - k) / 2);
	rec3(k);

	cout << "\n";
	if (k <= 1)
		return 0;
	else rec4(k - 2);
}

void elmas(int c) {
	int k = 1;
	rec1(k);
	rec4(c);
}

void ters_ucgen(int c) {

	int n;
	for (n = c; n >= 1;) {
		int f = (c - n) / 2;
		for (int i = 0; i < f; i++)
			cout << " ";
		for (int i = 0; i < n; i++)
			cout << "*";
		cout<<"\n";
		n -= 2;
	}
}

int  secim(){
	cout << "Yapacaginiz islemi seciniz\n1:Duz Ucgen\n2:Ters Ucgen\n3:Elmas\n0:cikis\n";

	int x;
	cin >> x;
	if (x > 3 || x < 0)
		return 0;
	if (x == 0)
		return 1;

	cout << "cizilecek sekil icin 3-15 arasi tek sayi giriniz: ";
	c=boy();

	if (c == 0) {
		cout << "3 kere hatali girdiniz";
		return 1;
	}

	if (x == 1)
		duz_ucgen(c);
	if (x == 2)
		ters_ucgen(c);
	if (x == 3)
		elmas(c);

	return 1;
}

int main(int argc, char** argv)
{
	int k = 0;
	while (k == 0)
		k=secim();

	return 0;
}
