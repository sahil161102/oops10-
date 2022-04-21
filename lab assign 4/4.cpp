#include <iostream>
using namespace std;
#include <fstream>
class student{
    public:
    char name[10];
    int roll_no;
    int marks;

    void input(){
        cout<< "Enter the name - ";
        cin>>name;
        cout<< "Enter the roll_no - ";
        cin>>branch;
        cout<< "Enter the marks- ";
        cin>>roll;
    }
};
int main(){
    student s;
    ofstream file("Sdetails.txt");
    s.input();
    file<< s.name<<endl<<s.roll_no<<endl<<s.marks;
}