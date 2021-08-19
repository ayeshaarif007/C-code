#include<iostream>
using namespace std;
int main()
{
  const int MAX_SIZE=30;
  int marks[MAX_SIZE];  //Partially filled array.
  int marks, numOfStu, sum=0;
  cout<<"Enter marks of students: ";
  cin>>marks;
  cout<<"Enter -99 to stop input.\n";
  while(marks!=-99 && numOfStu<MAX_SIZE)  //Sentinel-controlled loop.
  {
    marks[numOfStu]=marks;
    numOfStu++;
    cout<<"Enter marks of students: ";
    cin>>marks;
  }
  for(int i=0; i<numOfStu; i++)
    sum=sum+marks[i];   //Calculating the sum of values stored in the array.
  cout<<"The Sum of marks of students is: " <<sum;
  
  return 0;
}
