// �������� ������� 
#include<iostream>
#include<string>
#include<fstream> //�������� ������.���������� ����������� �������� � �������� � ����������������� � �������.
using namespace std;
//������ ��� �������� ���� �������� ������� �������� � ���� ���� � ������.
// 
// 
//������ �������� ��� ������:
// 1 �������� ���� 
// 2 ��� ������� ��� ��������
// 3 ���� ������

//������ �������� ����� ��� ������
// 1 �������� ���� 
// 2 ��� ������� ��� ��������
// 3 ����� �� ����������

// ������ ��� �������� �����
// 1 �������� ���� 
// 2 ��� ������� ��� ��������
// 3 ����� �� ����������
// 4 ���� ������ 

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
		cout << "������\n";
}


void clear() {
	ofstream out;
	out.open("word.txt");
	out.close();
}



int main() {

	setlocale(LC_ALL, "ru");
	int n;

	/*string path = "file.txt"; //���� � �����

	
//������ � ���� ofstream
	//���������� ������ ��� ����� ������ ����������� ����� ��������� ������ ������
	ofstream out;//(path); //�����������
	out.open(path,ios::out);  //��������� ����


	if (out.is_open()) {
		cout << "������ ��� ������\n";
		string str;
		cout << "������� ������\n";
		getline(cin, str);
		out << str + "\n"; //��������� ������ � ���� 
		
	}
	else
		cout << "o�����\n";



	out.close();  // ��������� ����
	//������ �� ����� 

	ifstream in;
	in.open(path);  // �������� ������������� ����� ��� ������

	if (in.is_open()) {
		cout << "������ ��� ������\n";
		string filestr;
		//������������ ���������� 
		char sym;
		while (in.get(sym)) {
			filestr += sym;

		}
		cout << filestr;
		//��������� ����������
		
		while (!in.eof()) {
			string str;
			in >> str;
			filestr += str + "\n";
		}
		//���������� ���������� 
		string st;
		while (getline(in, st)){
		filestr += st+"\n";
		}


		cout << filestr;
	}
	else
		cout << "o�����\n";
	in.close();

	if (!remove("file.txt")) //������� ����
	cout << "���� ������\n";
	else
		cout << "������ ��������\n";*/

	//������ 1



	int answer;
	do {
		cout << " 1��������\n";
		cout << "2 �����\n";
		cout << "3 ����������\n";
		cout << "4 �������\n";
		cout << "5 ����������\n";
		cout << "����\n";
		cin >> answer;
		switch (answer)
		{
		case 1:
			cout 

		case 3:


		case 3:
			clear();
			cout << "������\n";
		case 4:
			cout << "����������\n";
			break;
		default:
			cout << "������\n";


		}
		system("pause");
		system("cls");
	} while (answer != 4);
	cout << "��������� ���������\n";

	cout << "������� �����\n";

	string str;
	cin >> str;
	cin.ignore();
	if (statict(str)) 
		cout << "";
	else
		cout << "";
		
	










	return 0;
}