#include <iostream>
#include <string.h>
using namespace std;
#include <fstream>

int main(){
    char username[20];
    char password[20];
    char temp1[20];
    char temp2[20];
    fstream file("userName.txt");
    file << "Sahil";
    file.close();
    fstream file1("password.txt");
    file1 << "12345";
    file1.close();
    cout<<"Enter the Username:\t";
    cin>> username;
    cout<<"Enter the Password:\t";
    cin>> password;
    fstream file2("userName.txt");
    fflush(stdin);
    file2.read((char *)&temp1, 5);
    file2.close();
    fstream file3("password.txt");
    file3.read((char *)&temp2, sizeof(temp2));
    file3.close();
    cout<<temp1<<endl;
    cout<<temp2<<endl;
    if(temp1 == username && temp2 == password)
    cout<< "Login Successfull !!";
    else
    cout<<"Username or Password is incorrect.";
}