#include<iostream>
using namespace std;
class student
{
    char name[10], address[10];
    int rollno, phoneno;
public:
    void read();
    void display();
};
    void student::read()
    {
        cout << "Enter the name of student:";
        cin >> name;
        cout << "Enter the address of student:";
        cin >> address;
        cout << "Enter the rollno.of student:";
        cin >> rollno;
        cout << "Enter the phone no. of student:";
        cin >> phoneno;
        cout << endl;

    };
    void student::display()
    {
        cout << "The entered students details are shown below:\n";
        cout << "student name :: "<<name<<endl;
        cout << "Roll no. ::"<<rollno<<endl;
        cout << "Address ::"<<address<<endl;
        cout << " phone no. ::"<<phoneno<<endl;

    };
    int main()
    {
        int n;
        cout<<"Enter the no. of students:";
        cin>>n;
        student S[n];
        for(int i = 0; i<n; i++)
        {
            S[i].read();
            cout<<"Display the details of student:" <<i+1<<endl;
            S[i].display();
        }
        return 0;
        }
    



