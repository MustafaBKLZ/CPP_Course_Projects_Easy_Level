
// Kod Egzersizi 1
// String bo� ise yani hi� karakter yok ise true var ise false d�nen metot.
#include <iostream>
bool isEmpty(std::string str) {
	//if (str.length() == 0) 		return true;	else		return false;
	//return (str.length() == 0) ? true : false;
	//return (str.length() == 0);
	return str.size() == 0;
}



// Kod Egzersizi 2
// Parametre olarak ald��� dizideki ilk karakteri d�nd�ren metotu yaz�n.
#include <vector>
#include <iostream>
int getFirstValue(std::vector<int> arr) {

	return arr[0];
}



// Kod Egzersizi 3
// parametre olarak ald��� isim ve soyismi, soyisim, isim �eklinde yaz�dran metodu yaz�n.
#include <iostream>
std::string concatName(std::string firstName, std::string lastName) {
	return lastName + ", " + firstName;

}



// Kod Egzersizi 4
// prob * prize > pay kar��la�t�rmas� do�ru ise true, de�il ise false g�nderecek metodu yaz�n.
bool profitableGamble(float prob, int prize, float pay) {
	return prob * prize > pay;
}



// Kod Egzersizi 5
// d��ar�dan girilen de�erlerin karakter say�lar� ayn� ise  true, de�il ise false d�nen metodu yaz�n.
#include <iostream>
bool comp(std::string str1, std::string str2) {

	return  str1.length() == str2.length();
	//return	str1.size() == str2.size();
}



// Kod Egzersizi 6
// bir pasta olsun,  metota verilen parametreler pastadaki dilim, ki�i say�s�, ki�i ba�� dilim say�s�d�r. 
// ki�ilerin yedi�i dilimler, pastadaki dilim say�s�n� ge�erse false, de�ilse true d�nen metodu yaz�n
bool equalSlices(int total, int people, int each) {
	if (people == 0)
		return false;
	else if (people * each <= total)
		return true;
	else
		return false;

	//return people*each<=total;
}



// Kod Egzersizi 7
// parametre olarak girilen karakterin asc�� tablosundaki kodunu veren metodu yaz�n.
unsigned short ctoa(char c) {
	return (int)c;
}



// Kod Egzersizi 8
// verilen parametreyi 2 nin �zeri olarak hesaplayan metodu yaz�n.
#include <cmath>
int posCom(int n) {
	return pow(2, n);
}



// Kod Egzersizi 9
// verilen parametrelerden  ��genin kay�p a��s�n� bulan metodu yaz�n.
// kay�p a�� 90 dereceden az ise "acute"
// kay�p a�� 90 derece ise "right" 
// kay�p a�� 90 dereceden b�y�k 180 dereceden az ilse "obtuse"
// d�nene metodu yaz�n
#include <iostream>
std::string missingAngle(int angle1, int angle2) {
	if (angle1 + angle2 > 90)
		return "acute";
	else if (angle1 + angle2 < 90)
		return "obtuse";
	else
		return "right";

	//return(angle1 + angle2) > 90 ? "acute" : (angle1 + angle2) < 90 ? "obtuse" : "right";
}


// Kod Egzersizi 10
// int parametreler aras�nda, op parametresi alan�nda verilen i�lemi yapan basit hesap makinesi metodunu yaz�n. 
int calculator(int num1, char op, int num2) {
	/*int num = 0;
	if (op == '/' && num2 == 0) num = 0;
	if (op == '/') num = num1 / num2;
	if (op == '*') num = num1 * num2;
	if (op == '+') num = num1 + num2;
	if (op == '-') num = num1 - num2;
	return num;*/

	//return (op == '+') ? num1 + num2 : (op == '*') ? num1 * num2 : (op == '-') ? num1 - num2 : (op == '/' && num2 == 0) ? 0 : (op == '/') ? num1 / num2 : 0;


	switch (op)
	{
	case '/':
		if (num2 != 0) return num1 / num2;
		else return 0;
	case '*':
		return num1 * num2;
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	}

}


// Kod Egzersizi 11
// dizi ve boyut parametrelerini kullanarak, verilen dizideki son sa�y� g�steren metodu yaz�n
int getLastItem(int arr[], int length) {
	return arr[length - 1];
}





// NOT:  main hepsi k���k harflerle olmak zorundad�r. Aksi halde program hata veriyor.
void main()
{
	std::cout << calculator(5, '*', 5) << std::endl;
	std::cout << calculator(5, '/', 5) << std::endl;
	std::cout << calculator(5, '-', 5) << std::endl;
	std::cout << calculator(5, '+', 5) << std::endl;
	std::cout << calculator(5, '/', 0) << std::endl;

}