#include<iostream>
using namespace std;
int main()
{
  const int MAX_SIZE=30;
  int marks[MAX_SIZE];
  int marks, numOfStu, sum=0;
  cout<<"Enter marks of students: ";
  cin>>marks;
  while(marks!=-99 && numOfStu<MAX_SIZE)
  {
    marks[numOfStu]=marks;
    numOfStu++;
    cout<<"Enter marks of students: ";
    cin>>marks;
  }
  for(int i=0; i<numOfStu; i++)
    sum=sum+marks[i];
  cout<<"The Sum of marks of students is: " <<sum;
  return 0;
}
