#include<iostream>
#include<string>
using namespace std;
class employee
{

public:
    string name;
    int salary;

    getSum(string name, int salary,int secreat)
    {
        this->name = name;
        this->salary = salary;
        this->secreat;
    };
    void print()
    {
        cout<<"the name of our first employee is "<<this->name<<"and the salary of his "<<this->salary<<endl;
    }
    void printf(){
        cout<<"the secreat is "<<this->secreat<<endl;
    }
private:
    int secreat;
};


int main()
{

  employee omor("Omor",400,111);

    omor.print();
    omor.printf();

    return 0;
}
