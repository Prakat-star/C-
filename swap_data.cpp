#include<iostream>
using namespace std;

class Student
{
    private:
        int age;
        string name;

        public:
            void getdata(){
                cin>>age>>name;
            }

            void swapdata(Student &obj){
                int tempAge;
                string tempName;

                tempAge = age;
                tempName = name;

                age = obj.age;
                name = obj.name;

                obj.age = tempAge;
                obj.name = tempName;

            }

            void display(){
                cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<endl;
            }


            
};

int main()
{
    Student S1,S2;
    cout<<"enter age and name of first student:"<<endl;
    S1.getdata();
    cout<<"enter age and name of second student:"<<endl;
    S2.getdata();
    cout<<"before swapping"<<endl;
    S1.display();
    S2.display();
    S1.swapdata(S2);
    cout<<"after swap:"<<endl;
    S1.display();
    S2.display();

    return 0;
}