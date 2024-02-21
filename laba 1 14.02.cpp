#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Kvartira
{
	double kolvo_komnat;
	double stoimost;
public:
	Kvartira()  // Конструктор без параметров создает "пустой" объект
	{
		 double kolvo_komnat = 0;
		double stoimost = 0;
	}
	void set(int kol, int s) // Функция для инициализации полей для 
		// созданного "пустого" объекта
	{
		kolvo_komnat = kol; // Копируем строку, содержащую марку автомобиля
		stoimost = s; // Задаем значение расхода топлива на 100 км
	}
	Kvartira(int l, int w)
	{
		kolvo_komnat = l;
		stoimost = w;
	}
	double SrZnach() const {
		double r;

		r = (stoimost / kolvo_komnat);
		return r;
	}
	void print() const
	{
		cout << "\nkolvo komnat v kvartire: " << kolvo_komnat << "stoimost: " << stoimost;
	}
	void print2() const
	{
		cout << "kolvo komnat:" << kolvo_komnat << " stoimost:" << stoimost << " srednaa stoimost komnaty:" << SrZnach() << endl;

	}
};
int main()
{
	int n;
	cout << "Kolvo kvartir = "; cin >> n;
	int kol;
	int num;
	int S;
	double SrZnac = 0;
	Kvartira* pKvar; // Указатель на массив
	pKvar = new Kvartira[n];
	vector<Kvartira> vecKvar(n);
	for (int i = 0; i < n; i++)
	{
		cout << "\nStoimost kvartity nomer " << i+1 << ": "; 
		cin.ignore();
		cin >> num;
		cout << "\nkolvo komnat v kv nomer" << i+1<< ": "; 
		cin.ignore();
		cin >> kol;
		pKvar[i].set(num, kol);
		vecKvar[i].set(num, kol);
	}
	int c;
	cout << "Number: ";
	cin >> c;
	for (int i = 0; i < n; i++)
	{
		S = pKvar[i].SrZnach();
		if (S <= c)
		{

			cout << (i + 1) << ") ";
			for (;;)
			{
				pKvar[i].print2();
				break;
			}
		}

	}
	return 0;
}



