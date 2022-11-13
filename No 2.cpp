#include <iostream>
using namespace std;

int main ()
{
    string username, password;

    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;

    if (username == "admin" && password == "admin123"){
        cout << "Login Berhasil" << endl;
    }else if (username == "admin" ){
        cout << "password salah" << endl;
    }else if (password == "admin123"){
        cout << "username salah" << endl;


    }else{
        cout << "Username dan password tidak sesuai!" << endl;}


 return 0;
}

