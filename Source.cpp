#include <iostream>
using namespace std;

#define MAS
//#define MAS_1
#define MAS_2
//#define dec_bin
//#define DEC_HEX



void main()
{
	setlocale(LC_ALL, "");
#ifdef MAS
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
#endif // MAS

	//Вывод исходного массива на экран
	
#ifdef MAS_1

	for (int i = 0; i < n; i++)
	{
			int buf = arr[0];
			for (int i = 0; i < n; i++)
			{

				cout << arr[i] << "\t";
				arr[n - 1] = buf;
				arr[i] = arr[i + 1];

			}
		
		cout << endl;
	}


#endif // MAS_1


#ifdef MAS_2
		
	for (int i = 0; i <n; i++)
	{
		int buf = arr[0];
			for (int i = 0; i <n; i++)
		
			cout << arr[i] << "\t";
			buf=arr[n];
			arr[i]=arr[n-1];
			
		cout << endl;
	}
#endif // MAS_2

#ifdef dec_bin
	int numb;
	cout << "Введите число:";  cin >> numb;
	int mas[10];
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		int a = numb % 2;
		if (a == 0)
			 mas[n] = 0;
		else
			mas[n] = 1;
		n++;
		numb = numb / 2;
	}
	for (int i = 9; i >= 0; i--)
	{
		cout << mas[i];
	}
#endif // dec_bin

#ifdef DEC_HEX

	int n;
	int rem;
	cout << "Введите число:"; cin >> n;
	string s = "";
	while (n > 0)
	{
		rem = n % 16;
		if (rem > 9)
		{

			switch (rem)
			{
			case 10: s = "A" + s; break;
			case 11: s = "B" + s; break;
			case 12: s = "C" + s; break;
			case 13: s = "D" + s; break;
			case 14: s = "E" + s; break;
			case 15: s = "F" + s; break;
			}
		}
		else
		{
			s = char(rem + 48) + s;

		}
		n = n / 16;
	}
	if (s == "")
		cout << "0";
	else
		cout << s;
#endif //DEC_HEX





}