//Authors: Brad Lefler
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;
  int lucky;
  cout<<"What is your first name? ";
  cin>>first;
  cout<<"What is your last name? ";
  cin>>last;
  cout<<"Welcome "<<first[0]<<last[0]<<", here is your fortune...";
  //tell fortune
  cout<<"Your lucky number is "<<first.length()<< endl;
  return 0;
}
