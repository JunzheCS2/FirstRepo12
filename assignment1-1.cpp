#include <iostream>
#include <fstream>
using namespace std;
const int NUMCOURSE = 2;
struct Student
{
  int id;
  string name;
  double score[NUMCOURSE];
  double sum;
  double average;
};

int main() {
  ifstream stu; // declare a file
  Student s[10]; // declare student
  stu.open("student.txt"); // open the file
  ofs.open("student.bin");

  for(int i = 0; i < 10; i++) //save all data
  {
  stu >> s[i].id; //save
  stu >> s[i].name; // save name
  stu >> s[i].score[0];
  stu >> s[i].score[1];
  s[i].sum = s[i].score[0] + s[i].score[1];
  s[i].average = s[i].sum/2;
  }

  for(int i = 0; i < 10; i++) // print all
  {
    cout << s[i].id << endl;
    cout << s[i].name << endl;
    cout << s[i].score[0] << " " << s[i].score[1] << endl;
    cout << s[i].sum << " " << s[i].average << endl;
  }

  for(int i = 0 ; i < 10 ; i++)
  {
    ofs.write(s[i], sizeof(s));
  }

}
