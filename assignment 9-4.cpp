#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
    const int N=10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}

Students *makeStudents(int N)
{
  Students *ptr = new Students[N];
  ifstream ifs;
  ifs.open("1students.txt");
  if(ifs.fail())
  {
    cout << " File cannot be opened. ";
    exit(0);
  }

  else 
   for(int i =0;i<N;i++)
   {
     ifs>>(ptr+i)->sid >>(ptr+i)->sname;
     for(int j=0;j<NUM_SCORES;j++)
     {
       ifs>>(ptr+i)->scores[j];
     }
   }

   return ptr;
}

void printStudents(Students*const ptr, int N)
{
  for(int i=0;i<N;i++)
  {
    cout << (ptr+i)->sid << " " << (ptr+i)->sname << " ";
     for(int j=0;j<NUM_SCORES;j++)
    {
      cout << (ptr+i)->scores[j] << " " ;
    }
    cout << endl;
  }     
  cout << endl << endl << endl;
}

void sortStudents(Students * const ptr, int N)
{
  double s1,s2;
  s1 = s2;
  s2 = 0;
  for(int i =0;i<N;i++)
  {
    for(int j=0;j<N-1;j++)
    {
      s1 = (ptr+j)->scores[0]+(ptr+j)->scores[1]+(ptr+j)->scores[2];
      s2 = (ptr+j+1)->scores[0]+(ptr+j+1)->scores[1]+(ptr+j+1)->scores[2];
        if(s1 < s2)
        swap(*(ptr+j+1),*(ptr+j));
    }
  }
}