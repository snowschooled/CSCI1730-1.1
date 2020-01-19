//This file is for review of syntax etc. for Joel excersise 1.1
//01-18-2020
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int oldPounds1,oldShill1,oldPence1,oldPounds2,oldShill2,oldPence2,totalOldPounds,totalOldShill,totalOldPence,totalNewPounds;
  float totalPence = 0.00;
  char dot;
cout << "This program will give you the sum of two amounts of Old English money in old-pounds and new-pounds \n";
cout << "Please enter first amount of old-pounds: " ;
cin >> oldPounds1 >> dot >> oldShill1 >> dot >> oldPence1;
cout << "Please enter second amount of old-pounds: ";
cin >> oldPounds2 >> dot >> oldShill2 >> dot >> oldPence2;
cout << "You have £" << (oldPounds1 + oldPounds2) << dot << (oldShill1 + oldShill2) << dot << (oldPence1 + oldPence2) << " in old £ system (Pound.Shilling.Pence) " << '\n';
totalPence = (oldPounds1*240) + (oldShill1*12) + (oldPence1) + (oldPounds2*240) + (oldShill2*12) + (oldPence2);
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << "You have £" << (totalPence / 240) << " in new £ system(Decimal)";
return 0;
}
