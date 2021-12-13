#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	/*
in		Открыть для ввода (выбирается по умолчанию для ifstream)
out		Открыть для вывода (выбирается по умолчанию для ofstream)
binary	Открыть файл в бинарном виде
aрр		Присоединять данные; запись в конец файла
ate		Установить файловый указатель на конец файла
trunc	Уничтожить содержимое, если файл существует
		(выбирается по умолчанию, если флаг out указан, а флаги ate и арр — нет) 
	*/
	fstream stream;
	stream.open("in.txt", ios::in);
	int sum = 0;
	while (!stream.eof())
	{
		int a = 0;
		stream >> a;
		sum += a;
	}
	stream.close();
	stream.open("in.txt", ios::app);
	stream << sum << endl;
	system("pause");
	stream << sum << endl;
	stream << sum << endl;
	stream << sum << endl;
	stream.close();

	return 0;
}