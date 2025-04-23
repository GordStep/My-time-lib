#include <string>
#include "my_time.h"

my_date::my_date(int new_day, int new_month, int new_year)
{ 
  day = new_day;
  month = new_month;
  year = new_year;
  update_data();
}

void my_date::update_data()
{
  if (year < -9000 || year > 2100)
    year = 1970;
  if (month < 1 || month > 12)
    month = 1;
  if (day < 1)
    day = 1;

  switch (month) {
    case 1:
      if (day > 31)
        day = 1;
      month_name = "January";
      break;
    case 2:
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        day = 1;
      else if (day > 28)
        day = 1;
      month_name = "February";
      break;
    case 3:
      if (day > 31)
        day = 1;
      month_name = "March";
      break;
    case 4:
      if (day > 30)
        day = 1;
      month_name = "April";
      break;
    case 5:
      if (day > 31)
        day = 1;
      month_name = "May";
      break;
    case 6:
      if (day > 30)
        day = 1;
      month_name = "June";
      break;
    case 7:
      if (day > 31)
        day = 1;
      month_name = "July";
      break;
    case 8:
      if (day > 31)
        day = 1;
      month_name = "August";
      break;
    case 9:
      if (day > 30)
        day = 1;
      month_name = "September";
      break;
    case 10:
      if (day > 31)
        day = 1;
      month_name = "October";
      break;
    case 11:
      if (day > 30)
        day = 1;
      month_name = "November";
      break;
    case 12:
      if (day > 31)
        day = 1;
      month_name = "December";
      break;
    default:
      month_name = "none";
      break;
  }
}

bool my_date::is_leap()
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return true;
  return false;
}

void my_date::set(int new_day, int new_month, int new_year) 
{
  day = new_day;
  month = new_month;
  year =  new_year;
  update_data();
}
void my_date::set_day(int new_day) 
{
  day = new_day;
  update_data();
}
void my_date::set_month(int new_month) 
{
  month = new_month;
  update_data();
}
void my_date::set_year(int new_year) 
{
  year = new_year;
  update_data();
}

std::string my_date::get()
{
  return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}

// int days_between_dates(my_date start, my_date finish) {}
std::string my_date::get_full_date()
{
  return "Day: " + std::to_string(day) + "\n" +
    "Month: " + month_name + "\n" + 
    "Year: " + std::to_string(year) + "\n"; 
}

int my_date::get_day() { return day; }
int my_date::get_month() { return month; }
int my_date::get_year() { return year; }
std::string my_date::get_month_name() { return month_name; }

bool is_leap_year(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return true;
  return false;
}
