#include <iostream>
#include <cassert>

using namespace std ;

double inchesToCentimeters(double inches)
{
if (inches < 0)
{
  // cerr << "The given measurement must be nonnegative." << endl;
  assert(inches > 0);
return -1.0;
}
else
return 2.54 * inches;
}

int main () 
{
  cout << "How many inches do you have: \n" ;
  double inches ;
  cin >> inches ;
  double CMS ;
  CMS = inchesToCentimeters(inches) ;
  cout << "Your " << inches << "  inches are now converted to centimeters  as  " << CMS << endl ;
  return 0 ;
}
