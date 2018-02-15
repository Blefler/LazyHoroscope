//Authors: Brad Lefler
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;
  //tell fortune
  char zero=first[0];
  int lin =last.length();
  char one=last[lin-1];
  cout<<"your lucky number is "<<first.length()<< endl;
  if (zero==65||zero==69||zero==73||zero==79||zero==85||zero==97||zero==101||zero==105||zero==111||zero==117)
  {
  cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
  cout<<"you should keep a low profile."<<endl;
  }
  if (one==65||one==69||one==73||one==79||one==85||one==97||one==101||one==105||one==111||one==117)
  {
  cout<<"you have already met your true love."<<endl;
  }
  cout<<"have a good day!"<<endl;
  return 0;
}
