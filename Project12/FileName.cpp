#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>

#if defined(max)
#undef max
#endif

using namespace std;

//Srednee Arifmet
/*
double calc(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
	}
	double av = static_cast<double>(sum) / size;
	return av;
}
*/

//Kol-vo polozhitel'nykh i otritsatel'nykh chisel
/*
void countNumbers(int arr[], int size, int& pos, int& neg, int& zero)
{
	pos = 0;
	neg = 0;
	zero = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			pos++;
		}
		else if (arr[i] < 0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
}
*/

//Summa dvukh peremennykh
/*
int recursiveSum(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return recursiveSum(a + 1, b - 1);
}
*/

//Proizvedeniye dvukh peremennykh
/*
int recursiveMultiply(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	if (b < 0)
	{
		return -recursiveMultiply(a, -b);
	}
	return a + recursiveMultiply(a, b - 1);
}
*/

/*
int SumPl(int oneC, int twoC)
{
	int resulte = oneC + twoC;
	return resulte;
}

int SumMin(int oneC, int twoC)
{
	int resulte = oneC - twoC;
	return resulte;
}

int SumYmn(int oneC, int twoC)
{
	int resulte = oneC * twoC;
	return resulte;
}

int SumRaz(int oneC, int twoC)
{
	int resulte = oneC / twoC;
	return resulte;
}
*/

/*
void PrintArr(int name[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << " ";
	}

}
*/

/*
void revCop(const int sour[], int targ[], int size) {
	for (int i = 0; i < size; i++) {
		targ[size - 1 - i] = sour[i];
	}
}
*/

/*
template <typename	Funktion>
Funktion maxc(Funktion a, Funktion b) {
	return (a > b) ? a : b;
}
*/

/*
template <typename Ss, size_t Idk>
void FL(const Ss(&arr)[Idk])
{
	cout << arr[0] << endl;
	cout << arr[Idk - 1] << endl;
}
*/

/*
void Test(int* one)
{
	*one = *one + 10;
	cout << *one << "\n";
}
*/

/*
void svap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
*/


int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Ymnozhenie ot a do 20
	/*
	int a = 0;
	int size = 20;
	long long res = 1;

	cin >> a;

	for (int i = a; i < size; i++)
	{
		res *= i;
	}

	cout << res;
	*/

	//Vozvodim v stepen
	/*
	int x = 0;
	int y = 0;
	int res = 1;

	cin >> x;
	cin >> y;

	for (int i = 0; i < y; i++)
	{
		res *= x;
	}

	cout << res;
	*/

	//Chitaet summu chisel ot zadannogo polzovatelem do 500
	/*
	int a;
	int res = 0;

	cin >> a;

	for (int i = a; i < 501; i++)
	{
		res += i;
	}

	cout << res;
	*/

	/*
	std::getline(std::cin, world,'\n');
	cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
	cout << world;


	std::string usname = "Admin";
	std::string pass = "696969";

	std::string us;
	std::string pas;

	std::getline(std::cin, us, '\n');

	std::getline(std::cin, pas, '\n');

	if (us == usname && pas == pass)
	{
		std::cout << "��������" << std::endl;
	}
	else
	{
		std::cout << "��������" << std::endl;
	}
	*/

	/*
	int row = 5;
	int col = 3;
	int pla = 4;

	int*** arr = new int** [pla];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int* [row];
		for (int j = 0; j < row; j++)
		{
			arr[i][j] = new int[col];
		}

	}
	*/

	/*
	int w = 3, ww = 5;
	int **name = new int*[w];
	for (int i = 0; i < w; i++)
	{
		name[i] = new int[ww];
	}
	*/

	/*
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

#include <iostream>
	using namespace std;

	const int row = 5;
	const int col = 5;
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; i < col; i++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	*/

	/*
	int size = 4;
	int *arr = new int[size] {1, 2, 3, 4};
	size++;
	int* temp = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[size - 1] = 0;
	swap(arr, temp);
	delete[]temp;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	delete[]arr;
	*/

	/*
		int dyns = 4;
		int* d = new int[dyns] {5, 4, 3, 2};

		for (int i = 0; i < dyns; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;

		dyns = 5;
		int* n = new int[dyns];

		for (int i = 0; i < dyns - 1; i++) {
			n[i] = d[i];
		}

		n[dyns - 1] = 1;

		delete[] d;

		d = n;

		for (int i = 0; i < dyns; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;

		delete[] d;
		*/

	/*
		int o = 698;
		int t = -4537;
		cout << o << " " << t << endl;
		svap(o, t);
		cout << o << " " << t;
	*/

	/*
	int a = 5;
	cout << a << "\n";
	int* b = &a;
	Test(b);
	cout << a << "\n";
*/

	/*
int intA[] = { 69, 1488, 52, 21, 6996 };
FL(intA);

double doubleA[] = { 14.88, 6.9, 52.52 };
FL(doubleA);

char charA[] = { 'y', 'a', 'g', 'y', 'y'};
FL(charA);
*/

	/*
int i1 = 0;
int i2 = 0;
cout << "������� ����� 1: " << endl;
cin >> i1;
cout << "������ ����� 2: " << endl;
cin >> i2;
cout << maxc(i1, i2) << std::endl;

double d1 = 0;
double d2 = 0;
cout << "������� ����� 1 �������: " << endl;
cin >> d1;
cout << "������ ����� 2: " << endl;
cin >> d2;
cout << maxc(d1, d2) << std::endl;
*/

	/*
int a;
int suma = 0;

for (a = 0; ; a++) {
	cin >> a;
	if (a == 0) {
		break;
		suma = suma + a;
		cout << suma << endl;
	}

}

while (true)
{
	cin >> a;
	if (a == 0)
		break;
	suma = suma + a;
	cout << suma << endl;
}

float fuel = 300, ab = 0, bc = 0, ac = 0, k = 0, ves = 0, maxDist = 0;
cout << "������ ����������� ������� � �������" << endl;

while (true)
{
	cout << "������� ��� �����: " << endl;
	cin >> ves;
	if (ves >= 0 && ves <= 2000)
	{
		break;
	}
	else
	{
		cout << "������������ ���! ������� 0, �������� 2000 ��" << endl;
	}
}

if (ves < 500 && ves >= 0)
{
	k = 1;
}
else if (ves < 1000 && ves >= 500)
{
	k = 4;
}
else if (ves < 1500 && ves >= 1000)
{
	k = 7;
}
else if (ves <= 2000 && ves >= 1500)
{
	k = 9;
}
else
{
	cerr << "Err" << endl;
}

maxDist = fuel / k;


while (true)
{
	cout << "������� ���������� �� � �� �: ";
	cin >> ab;
	cout << "������� ���������� �� B �� C: ";
	cin >> bc;

	if (ab >= 0 && bc >= 0 && ab <= maxDist)
	{
		break;
	}
	else
	{
		cout << "������������ ����������! ������� 0, � �������� - " << maxDist << endl;
	}
}

ac = ab + bc;
float abFuel = ab * k;
float bcFuel = bc * k;

if (maxDist >= ac)
{
	cout << "�������� �� �����" << endl;
}
else
{
	cout << "����� �������� � ������ B �� - " << bcFuel - (fuel - abFuel) << endl;
}



int magicNumber = 0, numberUs = 0, count = 0, life = 0, choose = 0;


while (true)
{
	system("cls");
	cout << "���� ������ �����" << endl;
	cout << "������ ������� ��������� �� ����� �� 1 �� 5" << endl;
	cin >> choose;
	if (choose == 1)
	{
		system("cls");
		magicNumber = rand() % 10 + 1;
		count = 0;
		cout << "������ ����� �� 1 �� 10" << endl;
		while (true)
		{
			cout << "������� �����: " << endl;
			cin >> numberUs;
			if (numberUs == magicNumber)
			{
				cout << "�� ������ �����! ���-�� �������: " << count << endl;
				system("pause");
				break;
			}
			count++;
			cout << "�����������\n";
		}
	}
	else if (choose == 2)
	{
		system("cls");
		magicNumber = rand() % 500 + 1;
		life = 25;
		count = 0;
		cout << "������ ����� �� 1 �� 500" << endl;
		while (true)
		{
			cout << "��������: " << life << "\n";
			cout << "������� �����: " << endl;
			cin >> numberUs;
			if (numberUs == magicNumber)
			{
				cout << "�� ������ �����! ���-�� ������: " << life << endl;
				system("pause");
				break;
			}
			life--;
			cout << "�����������\n";
			if (life <= 0)
			{
				cout << "�� ��������! ����� ����������: " << magicNumber << "\n";
				system("pause");
				break;
			}
			cout << "��������: " << life << "\n";
			cout << "������ ����� ��������� �� 1 �����? 1 - ��, 2 - ���\n����: ";
			cin >> choose;
			if (choose == 1)
			{
				life--;
				if (life <= 0)
				{
					cout << "�� ��������! ����� ����������: " << magicNumber << "\n";
					system("pause");
					break;
				}
				if (numberUs < magicNumber)
				{
					cout << "���� ����� ������ ��� � ��\n";
				}
				else
				{
					cout << "���� ����� ������ ��� � ��\n";
				}
			}
		}
	}


}


int makar[4]{0,0,0,0};
int i = 0;
const int size = 10;
while (i < size)
{
	std::cin >> makar[i];
	i++;
}

i = 0;

while (i < size)
{
	std::cout << makar[i] << "";
	i++;
}



	int randNum = 0;
	int mass[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	const int size = 10;

	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 10 - 5;
	}

	for (int i = 0; i < size; i++)
	{
			cout << mass[i];
	}

	cout << "" << endl;

	for (int i = 0; i < size; i++)
	{
		if (mass[i] < 0)
		{
			cout << mass[i] ;
		}
	}

	cout << "" << endl;

	for (int i = 0; i < size; i++)
	{
		if (mass[i] > 0)
		{
			cout << mass[i] ;
		}
	}

	cout << "" << endl;

	for (int i = 0; i < size; i++)
	{
		if (mass[i] == 0)
		{
			cout << mass[i] ;
		}
	}


for (int i = 0; i < 4; i++)
{
	for (int j = 0; j < 5; j++)
	{
		std::cout << "= ";
	}
	cout << "\n";
}
*/

	/*
int numb;

	cout << "������� ������������ �����: ";
	cin >> numb;

	if (numb < 100000 || numb > 999999) {
		cout << "������: ������� �� ������������ �����.\n";
	}

	int d1 = numb / 100000;
	int d2 = (numb / 10000) % 10;
	int d3 = (numb / 1000) % 10;
	int d4 = (numb / 100) % 10;
	int d5 = (numb / 10) % 10;
	int d6 = numb % 10;

	int sumFT = d1 + d2 + d3;
	int sumLT = d4 + d5 + d6;

	if (sumFT == sumLT) {
		cout << "����� �������� ����������)\n";
	}
	else {
		cout << "����� �� �������� ����������(\n";
	}
	*/

	/*
int numb;

cout << "������� ������������� �����: ";
cin >> numb;

if (numb < 1000 || numb > 9999) {
	cout << "������: �� ���������\n";
}

int di1 = numb / 1000;
int di2 = (numb / 100) % 10;
int di3 = (numb / 10) % 10;
int di4 = numb % 10;

int newNu = di2 * 1000 + di1 * 100 + di4 * 10 + di3;

cout << "����� ����� ������������ ����: " << newNu << endl;
*/

	/*
int nu[7];
int maxN;

cout << "������� 7 ����� �����:\n";
for (int i = 0; i < 7; i++) {
	cin >> nu[i];
}

maxN = nu[0];

for (int i = 1; i < 7; i++) {
	if (nu[i] > maxN) {
		maxN = nu[i];
	}
}

cout << "������������ �����: " << maxN << endl;
*/

	/*
int oneC, int twoC, char zn;

cin >> oneC;
cin >> zn;
cin >> twoC;

	if (zn == '+')
	{
		cout << SumPl(oneC, twoC);
	}
	else if (zn == '-')
	{
		cout << SumMin(oneC, twoC);
	}
	else if (zn == '*')
	{
		cout << SumMin(oneC, twoC);
	}
	else if (zn == '/' && twoC != 0)
	{
		cout << SumMin(oneC, twoC);
	}
	*/

	/*
	const int size = 5;
	int arr[size]{};

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 5;
	}

	PrintArr(arr, size);
	*/

	/*
const int Si = 10;
int ar1[Si] = {1488, 666, 69, 52, 41, 31, 993, 777, 1, 0};
int ar2[Si] = {0};

revCop(ar1, ar2, Si);

cout << "First: ";
for (int i = 0; i < Si; i++) {
	cout << ar1[i] << " ";
}
cout << endl;

cout << "Second: ";
for (int i = 0; i < Si; i++) {
	cout << ar2[i] << " ";
}
cout << endl;
*/

// sumky Makara
	/*
int otvet = 0;
int kategory = 0;
int dama = 0;
int rukzak = 0;
int chemodan = 0;
int ct = 0;
const int size = 12;
int suma[size]{0};
int chem_cou = 0;
int chem_pri[4] = {5899, 17199, 28799, 81449};
bool toPay = false;

cout << "��� ������������ �������: ����� ������!\n";
cout << "�� ������� ������ �����?\n0 - �� ����\n1 - �������" << endl;
cin >> otvet;

if (otvet == 0) {
	cout << "��� ����� ����( ����� ����� ��� �����!\n";
	return 0;
}
else if (otvet != 1) {
	cout << "�� ������!";
	return 0;
}

system("cls");

cout << "�������! �� ����� ������������, ��� �� ������� ������ ���) �� ������ ������� ���������:\n\n";
while (!toPay) {
	cout << "1 - ������� �����\n2 - �������\n3 - ��������\n";
	cin >> kategory;
	system("cls");

	if (kategory == 1) {
		while (true) {
			cout << "1 - ������� ������ - ���� 7.299�\n" << "2 - ������� ������� ������� - ���� 14.799�\n" << "3 - ������� ������� - ���� 3.399�\n";
			cin >> dama;

			if (dama == 1) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[0] += ct * 7299;
				cout << "�� �������: " << ct << " �����. ��� ��� �������� �: " << ct * 7299 << "�\n\n";
			}
			else if (dama == 2) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[1] += ct * 14799;
				cout << "�� �������: " << ct << " �����. ��� ��� �������� �: " << ct * 14799 << "�\n\n";
			}
			else if (dama == 3) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[2] += ct * 3399;
				cout << "�� �������: " << ct << " �����. ��� ��� �������� �: " << ct * 3399 << "�\n\n";
			}

			cout << "����� �������� ������ �������?\n" << "0 - ��������� � ��� �� ���������\n" << "1 - ������� ������ ���������\n" << "2 - ������� � ������\n";
			cin >> ct;

			if (ct == 0) {
				system("cls");
				continue;
			}
			else if (ct == 1) {
				system("cls");
				break;
			}
			else if (ct == 2) {
				toPay = true;
				break;
			}
		}
	}
	else if (kategory == 2) {
		while (true) {
			cout << "1 - ������ ��� �� ���� - ���� 8.299�\n" << "2 - ������ ��������� - ���� 13.799�\n" << "3 - ������ ������� - ���� 16.399�\n";
			cin >> rukzak;

			if (rukzak == 1) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[3] += ct * 8299;
				cout << "�� �������: " << ct << " ��������. ��� ��� �������� �: " << ct * 8299 << "�\n\n";
			}
			else if (rukzak == 2) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[4] += ct * 13799;
				cout << "�� �������: " << ct << " ��������. ��� ��� �������� �: " << ct * 13799 << "�\n\n";
			}
			else if (rukzak == 3) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[5] += ct * 16399;
				cout << "�� �������: " << ct << " ��������. ��� ��� �������� �: " << ct * 16399 << "�\n\n";
			}

			cout << "����� �������� ������ �������?\n" << "0 - ��������� � ��� �� ���������\n" << "1 - ������� ������ ���������\n" << "2 - ������� � ������\n";
			cin >> ct;

			if (ct == 0) {
				system("cls");
				continue;
			}
			else if (ct == 1) {
				system("cls");
				break;
			}
			else if (ct == 2) {
				toPay = true;
				break;
			}
		}
	}
	else if (kategory == 3) {
		while (true) {
			cout << "1 - ������� ������ - ���� 5.899�\n" << "2 - ������� ������� - ���� 17.199�\n" << "3 - ������� ������ - ���� 28.799�\n" << "4 - ������� ���� - ���� 81.449�\n";
			cin >> chemodan;

			if (chemodan >= 1 && chemodan <= 4) {
				cout << "�������! ������� �������?\n";
				cin >> ct;
				suma[6 + chemodan - 1] += ct * chem_pri[chemodan - 1];
				chem_cou += ct;
				cout << "�� �������: " << ct << " ���������. ��� ��� �������� �: " << ct * chem_pri[chemodan - 1] << "�\n\n";
			}

			cout << "����� �������� ������ �������?\n" << "0 - ��������� � ��� �� ���������\n" << "1 - ������� ������ ���������\n" << "2 - ������� � ������\n";
			cin >> ct;

			if (ct == 0) {
				system("cls");
				continue;
			}
			else if (ct == 1) {
				system("cls");
				break;
			}
			else if (ct == 2) {
				toPay = true;
				break;
			}
		}
	}

	if (toPay) break;
}

int tot = 0;
for (int i = 0; i < size; ++i) {
	tot += suma[i];
}

if (tot > 10000) {
	cout << "���� ������� ��������� 10,000�. ��� ������������� ������ 10%! �� ����� ���� � ������ ��� ������ ��������� ���� � ���������! ��� ��� ���!\n";
	tot *= 0.9;
}

if (chem_cou >= 3) {
	int min_pri = INT_MAX;
	for (int i = 6; i < 10; ++i) {
		if (suma[i] > 0) {
			min_pri = min(min_pri, chem_pri[i - 6]);
		}
	}
	if (min_pri != INT_MAX) {
		cout << "�� ������ 3 � ����� ���������. ����� ������� �� ��� � �������! �� ���������� " << min_pri << "�.\n";
		tot -= min_pri;
	}
}

cout << "������� �� �������! ���� �������� �����: " << tot << "�\n" << "�������, �Ĩ� ��� �٨!";
*/   

//Srednee Arifmet
	/*
	int arr[] = { 10, 20, 30, 40, 50 };
	int size = sizeof(arr) / sizeof(arr[0]);

	double ave = calc(arr, size);
	std::cout << "������� ��������������: " << ave << std::endl;
	*/

//Kol-vo polozhitel'nykh i otritsatel'nykh chisel
	/*
	int arr[] = { 10, -5, 0, 3, -2, 0, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int positive, negative, zero;

	countNumbers(arr, size, positive, negative, zero);

	std::cout << "������������� ���������: " << positive << std::endl;
	std::cout << "������������� ���������: " << negative << std::endl;
	std::cout << "������� ���������: " << zero << std::endl;
	*/

//Summa dvukh peremennykh
	/*
int a, b;

std::cout << "������� ������ �����: ";
std::cin >> a;
std::cout << "������� ������ �����: ";
std::cin >> b;

int result = recursiveSum(a, b);
std::cout << "����� �����: " << result << std::endl;
*/

//Proizvedeniye dvukh peremennykh
	/*
int a, b;

std::cout << "������� ������ �����: ";
std::cin >> a;
std::cout << "������� ������ �����: ";
std::cin >> b;

int result = recursiveMultiply(a, b);
std::cout << "������������ �����: " << result << std::endl;
*/

//Minimal'nyy i maksimal'nyy element v massive
	/*
const int size = 10;
int arr[size];

std::srand(42);

for (int i = 0; i < size; i++)
{
	arr[i] = std::rand() % 100;
}

std::cout << "������: ";
for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << " ";
}
std::cout << std::endl;

int min = arr[0];
int max = arr[0];

for (int i = 1; i < size; i++)
{
	if (arr[i] < min) {
		min = arr[i];
	}
	if (arr[i] > max)
	{
		max = arr[i];
	}
}

std::cout << "����������� �������: " << min << std::endl;
std::cout << "������������ �������: " << max << std::endl;
*/

//Zadannyy pol'zovatelem diapazon randomnykh chisel s posleduyushchim nakhozhdeniyem minimal'nogo
	/*
int size;
int lowerBound, upperBound;
int userValue;

std::cout << "������� ������ �������: ";
std::cin >> size;

std::cout << "������� ������ ������� ���������: ";
std::cin >> lowerBound;
std::cout << "������� ������� ������� ���������: ";
std::cin >> upperBound;

std::cout << "������� �������� ��� ���������: ";
std::cin >> userValue;

std::srand(42);

int* arr = new int[size];
for (int i = 0; i < size; i++) {
	arr[i] = lowerBound + std::rand() % (upperBound - lowerBound + 1);
}

std::cout << "������: ";
for (int i = 0; i < size; i++) {
	std::cout << arr[i] << " ";
}
std::cout << std::endl;

int sum = 0;
for (int i = 0; i < size; i++) {
	if (arr[i] < userValue) {
		sum += arr[i];
	}
}

std::cout << "����� ��������� ������ " << userValue << ": " << sum << std::endl;

delete[] arr;
*/

//Pribyl' biznes
	/*
	const int mon = 12;
	double pro[mon];

	std::cout << "������� ������� ����� �� ������ �����:" << std::endl;
	for (int i = 0; i < mon; i++)
	{
		std::cout << "����� " << (i + 1) << ": ";
		std::cin >> pro[i];
	}

	int startM;
	int endM;
	std::cout << "������� ��������� ����� ���������: ";
	std::cin >> startM;
	std::cout << "������� �������� ����� ���������: ";
	std::cin >> endM;

	int minM = startM - 1;
	int maxM = startM - 1;

	for (int i = startM - 1; i < endM; i++)
	{
		if (pro[i] < pro[minM])
		{
			minM = i;
		}
		if (pro[i] > pro[maxM])
		{
			maxM = i;
		}
	}

	std::cout << "����� � ����������� �������� � ���������: " << (minM + 1) << std::endl;
	std::cout << "����� � ����������� �������� � ���������: " << (maxM + 1) << std::endl;
	*/
	return 0;
}



