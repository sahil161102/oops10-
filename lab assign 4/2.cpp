#include <iostream>
using namespace std;
#include <fstream>
class student{
    public:
    char name[10];
    char branch[10];
    int roll;

    void input(){
        cout<< "Enter the name - ";
        cin>>name;
        cout<< "Enter the branch - ";
        cin>>branch;
        cout<< "Enter the roll - ";
        cin>>roll;
    }
};
int main(){
    student s;
    ofstream file("Sdetails.txt");
    s.input();
    file<< s.name<<endl<<s.branch<<endl<<s.roll;
}