#include <iostream>
using namespace std;

bool kiemTraGioiTinh(string gt)
{
	if (gt == "nam" || gt == "Nam" || gt == "NAM")
	{
		return true;
	}
	else if (gt == "nu" || gt == "Nu" || gt == "NU")
	{
		return false;
	}
}

float Mortgage(bool male, int age, float salary)
{
	if (male == true)
	{
		return (age >= 18 && age < 35) ? (75 * salary) : ((age >= 31 && age < 40) ? (55 * salary) : (30 * salary));
	}
	else
	{
		return  (age >= 18 && age < 35) ? (75 * salary) : ((age >= 31 && age < 40) ? (50 * salary) : (35 * salary));
	}
}

void main()
{
	bool male;
	int mortagage, age;
	float salary;
	string gt;
	do
	{
		cout << "Nhap gioi tinh: ";
		cin >> gt;
		if (gt == "nam" || gt == "Nam" || gt == "NAM" || gt == "nu" || gt == "Nu" || gt == "NU")
		{
			break;
		}
		{
			cout << "Loi!\n(GIOI TINH: 'Nam' hoac 'Nu')! Vui long nhap lai!\n";
		}
	} while (1);
	
	male = kiemTraGioiTinh(gt);
	do
	{
		cout << "\nNhap TUOI: ";
		cin >> age;
		if (age>=18&&age<=55)
		{
			break;
		}
		else {
			cout << "Loi!\n(18 <= TUOI <= 55)! Vui long nhap lai!\n";
		}
	} while (1);
	do
	{
		cout << "\nNhap LUONG: ";
		cin >> salary;
		if (salary >= 1000 && salary <= 9000)
		{
			break;
		}
		else {
			cout << "Loi!\n(1000 <= luong <= 9000)! Vui long nhap lai!\n";
		}
	} while (1);

	cout << "\nKet qua Mortagage = " << Mortgage(male, age, salary)<<endl;


	system("pause");
}