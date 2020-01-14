#include <iostream>
using namespace std;

int main()
{int pound2,pound1,shilling2,shilling1,pence1,pence2,penceTot,shillingTot,poundTot,addS,leftoverP,addPo,leftoverS,decConversionP;
char dot;
cout<<"Enter first old-pound amount:";
cin>>pound1>>dot>>shilling1>>dot>>pence1;
cout<<"Enter second old-pound amount:";
cin>>pound2>>dot>>shilling2>>dot>>pence2;
penceTot=pence1+pence2;
addS=penceTot/12;
leftoverP=penceTot%12;
shillingTot=shilling1+shilling2+addS;
addPo=shillingTot/20;
leftoverS=shillingTot%20;
poundTot=pound1+pound2+addPo;
cout<<"Old-pound total="<<poundTot<<"."<<leftoverS<<"."<<leftoverP<<"\n";
decConversionP=(leftoverS*12+leftoverP)*100/240;
cout<<"Decimal-pound total="<<poundTot<<"."<<decConversionP;
return 0;
}
