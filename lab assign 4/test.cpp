#include<iostream>
#include<fstream>

using namespace std;

class stdData{
    char name[20];
    int roll_no[20];
    public:
    void getData(){
        cout<<"Enter the name of student\t";
        cin >> name;
        cout<<"Enter the roll_no\t";
        cin >> roll_no;
    }
    void putData(){
        cout<<"Name:\t"<<name<<endl;
        cout<<"Rollno:\t"<<roll_no<<endl;
    }
} stu;

int main(){
    char foutput[20];
    stu.getData();
    fstream file;
    file.open("sDetails.txt");
    file.write((char *)&stu,sizeof(stu));
    file.close();
    stu.putData();
    fstream file2;
    file2.open("sDetails.txt");
    file2.read((char *)&foutput,sizeof(file2));
    file2.close();
    cout<<foutput;
}
