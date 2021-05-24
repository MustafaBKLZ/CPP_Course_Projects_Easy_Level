
// Kod Egzersizi 1
// String boþ ise yani hiç karakter yok ise true var ise false dönen metot.
#include <iostream>
bool isEmpty(std::string str) {
	//if (str.length() == 0) 		return true;	else		return false;
	//return (str.length() == 0) ? true : false;
	//return (str.length() == 0);
	return str.size() == 0;
}



// Kod Egzersizi 2
// Parametre olarak aldýðý dizideki ilk karakteri döndðren metotu yazýn.
#include <vector>
#include <iostream>
int getFirstValue(std::vector<int> arr) {

	return arr[0];
}



// Kod Egzersizi 3
// parametre olarak aldýðý isim ve soyismi, soyisim, isim þeklinde yazýdran metodu yazýn.
#include <iostream>
std::string concatName(std::string firstName, std::string lastName) {
	return lastName + ", " + firstName;

}



// Kod Egzersizi 4
// prob * prize > pay karþýlaþtýrmasý doðru ise true, deðil ise false gönderecek metodu yazýn.
bool profitableGamble(float prob, int prize, float pay) {
	return prob * prize > pay;
}



// Kod Egzersizi 5
// dýþarýdan girilen deðerlerin karakter sayýlarý ayný ise  true, deðil ise false dönen metodu yazýn.
#include <iostream>
bool comp(std::string str1, std::string str2) {

	return  str1.length() == str2.length();
	//return	str1.size() == str2.size();
}



// Kod Egzersizi 6
// bir pasta olsun,  metota verilen parametreler pastadaki dilim, kiþi sayýsý, kiþi baþý dilim sayýsýdýr. 
// kiþilerin yediði dilimler, pastadaki dilim sayýsýný geçerse false, deðilse true dönen metodu yazýn
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
// parametre olarak girilen karakterin ascýý tablosundaki kodunu veren metodu yazýn.
unsigned short ctoa(char c) {
	return (int)c;
}



// Kod Egzersizi 8
// verilen parametreyi 2 nin üzeri olarak hesaplayan metodu yazýn.
#include <cmath>
int posCom(int n) {
	return pow(2, n);
}



// Kod Egzersizi 9
// verilen parametrelerden  üçgenin kayýp açýsýný bulan metodu yazýn.
// kayýp açý 90 dereceden az ise "acute"
// kayýp açý 90 derece ise "right" 
// kayýp açý 90 dereceden büyük 180 dereceden az ilse "obtuse"
// dönene metodu yazýn
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
// int parametreler arasýnda, op parametresi alanýnda verilen iþlemi yapan basit hesap makinesi metodunu yazýn. 
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
// dizi ve boyut parametrelerini kullanarak, verilen dizideki son saýyý gösteren metodu yazýn
int getLastItem(int arr[], int length) {
	return arr[length - 1];
}





// NOT:  main hepsi küçük harflerle olmak zorundadýr. Aksi halde program hata veriyor.
void main()
{
	std::cout << calculator(5, '*', 5) << std::endl;
	std::cout << calculator(5, '/', 5) << std::endl;
	std::cout << calculator(5, '-', 5) << std::endl;
	std::cout << calculator(5, '+', 5) << std::endl;
	std::cout << calculator(5, '/', 0) << std::endl;

}