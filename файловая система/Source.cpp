// файловая система 
#include<iostream>
#include<string>
#include<fstream> //файловый потокь.библиотека позволяющая работать с классами в заимодействующими с файлами.
using namespace std;
//классы это описание груп обьектов которые содерхат в себе поля и методы.
// 
// 
//ошибки открытия для записи:
// 1 неверный путь 
// 2 нет доступа для открытия
// 3 файл открыт

//ошибки открытия файла для чтения
// 1 неверный путь 
// 2 нет доступа для открытия
// 3 файла не существует

// ошибки при удалении файла
// 1 неверный путь 
// 2 нет доступа для открытия
// 3 файла не существует
// 4 файл открыт 

bool statict(string &word) {
	ofstream out;
	out.open("word.txt",ios::app);
	if (out.is_open()) {
		out << word + " " << word.length() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}

void printfile() {
	ifstream in;
	in.open("word.txt");
	if (in.is_open()) {

		char sym;
		while (in.get(sym))
			cout << sym;
	}
	else
		cout << "ошибка\n";
}


void clear() {
	ofstream out;
	out.open("word.txt");
	out.close();
}



int main() {

	setlocale(LC_ALL, "ru");
	int n;

	/*string path = "file.txt"; //путь к файлу

	
//запись в файл ofstream
	//контруктор класса это метод котрый выполняется когда создается обьект класса
	ofstream out;//(path); //конструктор
	out.open(path,ios::out);  //открываем файл


	if (out.is_open()) {
		cout << "открыт для записи\n";
		string str;
		cout << "введите строку\n";
		getline(cin, str);
		out << str + "\n"; //помещение строки в файл 
		
	}
	else
		cout << "oшибка\n";



	out.close();  // закрываем файл
	//чтение из файла 

	ifstream in;
	in.open(path);  // открытие существующего файла для чтения

	if (in.is_open()) {
		cout << "открыт для чтения\n";
		string filestr;
		//посимвольное считывание 
		char sym;
		while (in.get(sym)) {
			filestr += sym;

		}
		cout << filestr;
		//пословное считывание
		
		while (!in.eof()) {
			string str;
			in >> str;
			filestr += str + "\n";
		}
		//построчное считывание 
		string st;
		while (getline(in, st)){
		filestr += st+"\n";
		}


		cout << filestr;
	}
	else
		cout << "oшибка\n";
	in.close();

	if (!remove("file.txt")) //удаляет файл
	cout << "файл удален\n";
	else
		cout << "ошибка удаления\n";*/

	//задача 1



	int answer;
	do {
		cout << " 1действие\n";
		cout << "2 слово\n";
		cout << "3 содержимое\n";
		cout << "4 очиська\n";
		cout << "5 завершение\n";
		cout << "ввод\n";
		cin >> answer;
		switch (answer)
		{
		case 1:
			cout 

		case 3:


		case 3:
			clear();
			cout << "очищен\n";
		case 4:
			cout << "завершение\n";
			break;
		default:
			cout << "ошибка\n";


		}
		system("pause");
		system("cls");
	} while (answer != 4);
	cout << "программа завершена\n";

	cout << "введите слово\n";

	string str;
	cin >> str;
	cin.ignore();
	if (statict(str)) 
		cout << "";
	else
		cout << "";
		
	










	return 0;
}