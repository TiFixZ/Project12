#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>
#include <cstdlib> 

#if defined(max)
#undef max
#endif

using namespace std;

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
		std::cout << "разрешён" << std::endl;
	}
	else
	{
		std::cout << "запрещён" << std::endl;
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
cout << "Введите число 1: " << endl;
cin >> i1;
cout << "Теперь число 2: " << endl;
cin >> i2;
cout << maxc(i1, i2) << std::endl;

double d1 = 0;
double d2 = 0;
cout << "Введите число 1 дробное: " << endl;
cin >> d1;
cout << "Теперь число 2: " << endl;
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
cout << "Расчёт потребления топлива у самолёта" << endl;

while (true)
{
	cout << "Введите вес груза: " << endl;
	cin >> ves;
	if (ves >= 0 && ves <= 2000)
	{
		break;
	}
	else
	{
		cout << "Недопустимый вес! Минимум 0, максимум 2000 кг" << endl;
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
	cout << "Введите расстояние от А до В: ";
	cin >> ab;
	cout << "Введите расстояние от B до C: ";
	cin >> bc;

	if (ab >= 0 && bc >= 0 && ab <= maxDist)
	{
		break;
	}
	else
	{
		cout << "Недопустимое расстояние! Минимум 0, а максимум - " << maxDist << endl;
	}
}

ac = ab + bc;
float abFuel = ab * k;
float bcFuel = bc * k;

if (maxDist >= ac)
{
	cout << "Заправка не нужна" << endl;
}
else
{
	cout << "Нужна заправка в пункте B на - " << bcFuel - (fuel - abFuel) << endl;
}



int magicNumber = 0, numberUs = 0, count = 0, life = 0, choose = 0;


while (true)
{
	system("cls");
	cout << "Игра угадай число" << endl;
	cout << "Выбери уровень сложности по шкале от 1 до 5" << endl;
	cin >> choose;
	if (choose == 1)
	{
		system("cls");
		magicNumber = rand() % 10 + 1;
		count = 0;
		cout << "Угадай число от 1 до 10" << endl;
		while (true)
		{
			cout << "Введите число: " << endl;
			cin >> numberUs;
			if (numberUs == magicNumber)
			{
				cout << "Ты угадал число! Кол-во попыток: " << count << endl;
				system("pause");
				break;
			}
			count++;
			cout << "Неправильно\n";
		}
	}
	else if (choose == 2)
	{
		system("cls");
		magicNumber = rand() % 500 + 1;
		life = 25;
		count = 0;
		cout << "Угадай число от 1 до 500" << endl;
		while (true)
		{
			cout << "Здоровье: " << life << "\n";
			cout << "Введите число: " << endl;
			cin >> numberUs;
			if (numberUs == magicNumber)
			{
				cout << "Ты угадал число! Кол-во жизней: " << life << endl;
				system("pause");
				break;
			}
			life--;
			cout << "Неправильно\n";
			if (life <= 0)
			{
				cout << "Ты проиграл! Число компьютера: " << magicNumber << "\n";
				system("pause");
				break;
			}
			cout << "Здоровье: " << life << "\n";
			cout << "Хотите взять подсказку за 1 жизнь? 1 - Да, 2 - Нет\nВвод: ";
			cin >> choose;
			if (choose == 1)
			{
				life--;
				if (life <= 0)
				{
					cout << "Ты проиграл! Число компьютера: " << magicNumber << "\n";
					system("pause");
					break;
				}
				if (numberUs < magicNumber)
				{
					cout << "Ваше число меньше чем у ПК\n";
				}
				else
				{
					cout << "Ваше число больше чем у ПК\n";
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

	cout << "Введите шестизначное число: ";
	cin >> numb;

	if (numb < 100000 || numb > 999999) {
		cout << "Ошибка: введено не шестизначное число.\n";
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
		cout << "Число является счастливым)\n";
	}
	else {
		cout << "Число не является счастливым(\n";
	}
	*/

	/*
int numb;

cout << "Введите четырёхзначное число: ";
cin >> numb;

if (numb < 1000 || numb > 9999) {
	cout << "Ошибка: Ты свиноролл\n";
}

int di1 = numb / 1000;
int di2 = (numb / 100) % 10;
int di3 = (numb / 10) % 10;
int di4 = numb % 10;

int newNu = di2 * 1000 + di1 * 100 + di4 * 10 + di3;

cout << "Число после перестановки цифр: " << newNu << endl;
*/

	/*
int nu[7];
int maxN;

cout << "Введите 7 целых чисел:\n";
for (int i = 0; i < 7; i++) {
	cin >> nu[i];
}

maxN = nu[0];

for (int i = 1; i < 7; i++) {
	if (nu[i] > maxN) {
		maxN = nu[i];
	}
}

cout << "Максимальное число: " << maxN << endl;
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

cout << "Вас приветствует магазин: Сумки Макара!\n";
cout << "Не желаете купить сумку?\n0 - Не хочу\n1 - Давайте" << endl;
cin >> otvet;

if (otvet == 0) {
	cout << "Нам очень жаль( Будем ждать вас снова!\n";
	return 0;
}
else if (otvet != 1) {
	cout << "Вы глупый!";
	return 0;
}

system("cls");

cout << "Отлично! Мы очень признательны, что вы выбрали именно нас) Вы можете выбрать категорию:\n\n";
while (!toPay) {
	cout << "1 - Дамские сумки\n2 - Рюкзаки\n3 - Чемоданы\n";
	cin >> kategory;
	system("cls");

	if (kategory == 1) {
		while (true) {
			cout << "1 - Сумочка Бриошь - Цена 7.299р\n" << "2 - Сумочка Дамская Роскошь - Цена 14.799р\n" << "3 - Сумочка Малютка - Цена 3.399р\n";
			cin >> dama;

			if (dama == 1) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[0] += ct * 7299;
				cout << "Вы выбрали: " << ct << " Сумок. Это вам обойдётся в: " << ct * 7299 << "р\n\n";
			}
			else if (dama == 2) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[1] += ct * 14799;
				cout << "Вы выбрали: " << ct << " Сумок. Это вам обойдётся в: " << ct * 14799 << "р\n\n";
			}
			else if (dama == 3) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[2] += ct * 3399;
				cout << "Вы выбрали: " << ct << " Сумок. Это вам обойдётся в: " << ct * 3399 << "р\n\n";
			}

			cout << "Какое действие хотите сделать?\n" << "0 - Вернуться в эту же категорию\n" << "1 - Выбрать другую категорию\n" << "2 - Перейти к оплате\n";
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
			cout << "1 - Рюкзак Мал да удал - Цена 8.299р\n" << "2 - Рюкзак Универсал - Цена 13.799р\n" << "3 - Рюкзак Охотник - Цена 16.399р\n";
			cin >> rukzak;

			if (rukzak == 1) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[3] += ct * 8299;
				cout << "Вы выбрали: " << ct << " Рюкзаков. Это вам обойдётся в: " << ct * 8299 << "р\n\n";
			}
			else if (rukzak == 2) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[4] += ct * 13799;
				cout << "Вы выбрали: " << ct << " Рюкзаков. Это вам обойдётся в: " << ct * 13799 << "р\n\n";
			}
			else if (rukzak == 3) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[5] += ct * 16399;
				cout << "Вы выбрали: " << ct << " Рюкзаков. Это вам обойдётся в: " << ct * 16399 << "р\n\n";
			}

			cout << "Какое действие хотите сделать?\n" << "0 - Вернуться в эту же категорию\n" << "1 - Выбрать другую категорию\n" << "2 - Перейти к оплате\n";
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
			cout << "1 - Чемодан Важный - Цена 5.899р\n" << "2 - Чемодан Деловой - Цена 17.199р\n" << "3 - Чемодан Статус - Цена 28.799р\n" << "4 - Чемодан Царь - Цена 81.449р\n";
			cin >> chemodan;

			if (chemodan >= 1 && chemodan <= 4) {
				cout << "Отлично! Сколько желаете?\n";
				cin >> ct;
				suma[6 + chemodan - 1] += ct * chem_pri[chemodan - 1];
				chem_cou += ct;
				cout << "Вы выбрали: " << ct << " Чемоданов. Это вам обойдётся в: " << ct * chem_pri[chemodan - 1] << "р\n\n";
			}

			cout << "Какое действие хотите сделать?\n" << "0 - Вернуться в эту же категорию\n" << "1 - Выбрать другую категорию\n" << "2 - Перейти к оплате\n";
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
	cout << "Ваша покупка превышает 10,000р. Вам предоставлена скидка 10%! Мы очень рады и желаем вам носить купленный вещи с комфортом! Ждём вас ещё!\n";
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
		cout << "Вы купили 3 и более чемоданов. Самый дешёвый из них в подарок! Вы сэкономили " << min_pri << "р.\n";
		tot -= min_pri;
	}
}

cout << "Спасибо за покупку! Ваша итоговая сумма: " << tot << "р\n" << "СПАСИБО, ЖДЁМ ВАС ЕЩЁ!";
*/

	return 0;
}


