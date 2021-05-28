
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


// Kod Egzersizi 12
// parametre olarak verilen dizideki tek sayýlara +1 ekleyen, çift sayýlara -1 ekleyen metodu yazýn.
#include <vector>
std::vector<int> transform(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i++)
	{
		//arr[i] % 2 == 0 ? arr[i] -= 1 : arr[i] += 1;
		if (arr[i] % 2 == 1)
		{
			arr[i] += 1;
		}
		else
		{
			arr[i] -= 1;
		}
	}
	return arr;
}


// Kod Egzersizi 13
// ingilizce dilinde string olarak girilen ifadenin çoðul olup olmadýðýný belirleyen metodu yazýn. Çoðul ise True, Tekil ise False dönsün.
// çoðul ifadesi olarak sondaki "s" karakteri kontrol edilecek.
#include <iostream>
bool isPlural(std::string word) {

	const char plural = 's';
	if (word[word.size() - 1] == plural)
		return true;
	else
		return false;

	//return word[word.size() - 1] == 's';

}


// Kod Egzersizi 14
// parametre olarak aldýðý dizideki tüm nesnelerin sonunda, aldýðý ikinci parametreyi ekleyen metodu yazýn.
#include <iostream>
#include <vector>
std::vector<std::string> addEnding(std::vector<std::string> arr, std::string ending) {
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] += ending;
	}
	return arr;
}


// Kod Egzersizi 15
// 1'den baþlayarak parametre olarak verilen sayýya kadarki tüm sayýlarý toplayan metodu yazýn.
#include <iostream>
int addUpTo(int n) {
	if (n >= 1)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		return sum;
	}
	else
		return 0;


	// recursive çözüm
	/*if (n == 1) { return 1; }
	else return n + addUpTo(n - 1);*/
}


// Kod Egzersizi 16
// Alýnan her 6 kahvede bir kahve bedava. Yani 6 kahve alýrsam 7 kahvem olur. Parametre olarak girilen kahve sayýsýna göre toplam kahve sayýsýný veren metodu yazýn.
int totalCups(int n) {
	return n + (n / 6);
}


// Kod Egzersizi 17
// parametre olarak aldýðý string degerde ard arda tekrar eden kelimeler var ise True yok ise False dönen metodun yazýn.
#include <iostream>
bool double_letters(std::string word) {
	for (int i = 0; i < word.size(); i++)
	{
		if (i >= 1)
			if (word[i - 1] == word[i])
				return true;
	}
	return false;
}




// Kod Egzersizi 18
// Dýþarýdan parametre olarak girilen sayýnýn hangi ay olduðunu veren metodu yazýn.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::string monthName(int n) {
	switch (n)
	{
	case 1: return "January";	break;
	case 2: return "February";	break;
	case 3: return"March";	break;
	case 4: return"April";	break;
	case 5: return"May";	break;
	case 6: return"June";	break;
	case 7: return"July";	break;
	case 8: return"August";	break;
	case 9: return"September";	break;
	case 10:return "October"; break;
	case 11:return "November"; break;
	case 12:return "December"; break;
	default:return ""; break;
	}
	//vector<string> a = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	//return a[n - 1];
}



// Kod Egzersizi 19
// parametre olarak verilen dizideki sayýlarýn, parametre olarak verilen diðer sayýnýn çarpanlarý olup olmadýðýný kontrol eden metodu yazýn.
// 2,3,4 sayýlarý 12'nin çarpanlarýdýr.
#include <iostream>
#include <vector>	
bool checkFactors(std::vector<int> f, int num) {
	for (int i = 0; i < f.size(); i++)
	{
		if (num % f[i] != 0)
			return false;
		return true;
	}
}




// NOT:  main hepsi küçük harflerle olmak zorundadýr. Aksi halde program hata veriyor.
void main()
{
	std::cout << checkFactors({ 2,3,4 }, 12) << std::endl;
	std::cout << checkFactors({ 1,2,3,8 }, 12) << std::endl;
	std::cout << checkFactors({ 1,2,50 }, 100) << std::endl;
	std::cout << checkFactors({ 3,6 }, 9) << std::endl;

}