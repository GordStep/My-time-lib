#include <iostream>
#include <string>
#include "my_time.h"

using namespace std;

int main()
{
  my_date date = my_date(23, 4, 2025);
  cout << date.get() << endl << endl;
  cout << date.get_full_date() << endl << endl;
  // cout << bool(date.is_leap()) << endl;

  cout << date.get_day() << endl;
  cout << date.get_month() << endl;
  cout << date.get_year() << endl << endl;

  date.set_day(1);
  date.set_month(2);
  date.set_year(2003);

  cout << date.get_full_date() << endl;
  date.set(12, 3, 2005);
  cout << date.get_full_date() << endl << endl;

  date.set(11, 9, 2001);
  cout << date.get_full_date() << endl;
  
}
