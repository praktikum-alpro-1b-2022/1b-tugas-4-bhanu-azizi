#include <iostream>
using namespace std;

int main()
{
	int bil;
	cout << "----------------------" << endl;
	cout << "Masukkan Tahun : ";
	cin >> bil;
	cout << endl;

	if (bil%4==0){
		cout << bil << " Adalah Tahun Kabisat"<<endl;
    }else {
		cout<<bil<<" Adalah Bukan Tahun Kabisat"<<endl;
	}
	return 0;
}
