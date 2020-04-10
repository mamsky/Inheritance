#include <iostream>
#include <string>
using namespace std;

class Person
{	
     public:
        string propesi;
        int umur ;

        Person(): propesi("GAMERS"), umur(16) { }
        void display()
        {
        	cout << "==========================================="<<endl;
             cout << "propesi saya adalah: " << propesi << endl;
             cout << "==========================================="<<endl;
             cout << "umur saya adalah: " << umur << endl;
             walk();
             talk();
        }
        void walk() { cout << "Saya Bisa Berjalan." << endl; }
        void talk() { cout << "Saya Bisa Berbicara" << endl; }
};

class GameTeacher : public Person
{
    public:
       void teachMaths() { cout << "Saya Bisa Mengajari Cara Bermain Game." << endl; }
};

class Footballer : public Person
{
    public:
       void playFootball() { cout << "Saya Sangat Jago Bermain Bola" << endl; }
};

int main()
{
	cout << "\t|=============================|"<<endl;
	cout << "\t|===== by Paste Prosmana =====|"<<endl;
	cout << "\t|=============================|\n"<<endl;
	
     GameTeacher teacher;
     teacher.propesi = "Profesional Game";
     teacher.umur = 23;
     teacher.display();
     teacher.teachMaths();

     Footballer footballer;
     footballer.propesi = "Pemain Bola";
     footballer.umur = 17;
     footballer.display();
     footballer.playFootball();

     return 0;
}
