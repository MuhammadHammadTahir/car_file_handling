#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class car
{
	int chassis_no,
		engin_no,
		model_year;
	string make,
		type;
public:
	car()
	{
		cout << "\n\nObject taking data from reading file\n";
	}
	car(int ch, int eng, int mo, string ma, string ty)
	{
		chassis_no = ch;
		engin_no = eng;
		model_year = mo;
		make = ma;
		type = ty;
	}
	void set(int ch, int eng, int mo, string ma, string ty)
	{
		chassis_no = ch;
		engin_no = eng;
		model_year = mo;
		make = ma;
		type = ty;
	}
	void print_data(void)
	{
		cout << "\nChassis_no : " << chassis_no;
		cout << "\nEngin_no : " << engin_no;
		cout << "\nModel_year: " << model_year;
		cout << "\nMake : " << make;
		cout << "\nType : " << type;
	}
};
int main()
{
	fstream file_car;
	file_car.open("car.txt", ios::out|ios::trunc);
	int chass, engin, model;
	string mak,chass_s,engin_s,model_s,typ,read;
	cout << "\nEnter the data for the first car :  ";
	cout << "\n\n Enter Chassis_no : ";
	cin >> chass;
	chass_s = to_string(chass);
	cout << "\nEnter Engin_no : ";
	cin >> engin;
	engin_s = to_string(engin);
	cout << "\nEnter Model_year : ";
	cin >> model;
	model_s = to_string(model);
	cout << "\nEnter Make : ";
	cin >> mak;
	cout << "\nEnter Type : ";
	cin >> typ;
	file_car <<  chass_s<<endl;
	file_car <<  engin_s << endl;
	file_car <<  model_s << endl;
	file_car <<  mak << endl;
	file_car <<  typ << endl;
	car c1(chass, engin, model, mak, typ);
	cout << "\nEnter the data for the second car :  ";
	cout << "\n\n Enter Chassis_no : ";
	cin >> chass;
	chass_s = to_string(chass);
	cout << "\nEnter Engin_no : ";
	cin >> engin;
	engin_s = to_string(engin);
	cout << "\nEnter Model_year : ";
	cin >> model;
	model_s = to_string(model);
	cout << "\nEnter Make : ";
	cin >> mak;
	cout << "\nEnter Type : ";
	cin >> typ;
	file_car <<  chass_s << endl;
	file_car <<  engin_s << endl;
	file_car << model_s << endl;
	file_car <<  mak << endl;
	file_car <<  typ << endl;
	car c2(chass, engin, model, mak, typ);
	cout << "\n\nFile closed";					//file close
	file_car.close();
	file_car.open("car.txt", ios::in);
	car c3;
	getline(file_car, read);
	chass = stoi(read);
	getline(file_car, read);
	engin = stoi(read);
	getline(file_car, read);
	model = stoi(read);
	getline(file_car, read);
	mak = read;
	getline(file_car, read);
	typ = read;
	c3.set(chass, engin, model, mak, typ);
	car c4;
	getline(file_car, read);
	chass = stoi(read);
	getline(file_car, read);
	engin = stoi(read);
	getline(file_car, read);
	model = stoi(read);
	getline(file_car, read);
	mak = read;
	getline(file_car, read);
	typ = read;
	c4.set(chass, engin, model, mak, typ);
	cout << "\n\nData of first car after reading\n";
	c3.print_data();
	cout << "\n\nData of second car after reading\n";
	c4.print_data();
}