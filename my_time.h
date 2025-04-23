#include <string>
#include <vector>

class my_date {
private:
  int day;
  int month;
  int year;
  std::string month_name;
  void update_data();
public:
  my_date(int new_day, int new_month, int new_year);
  
  void set(int new_day, int new_month, int new_year);
  void set_day(int new_day);
  void set_month(int new_month);
  void set_year(int new_year);

  int get_day();
  int get_month();
  int get_year();
  std::string get_month_name();

  bool is_leap();

  std::string get();
  std::string get_full_date();
};
// Создание класса для работы с временем

class my_time {
private:
  int sec;
  int min;
  int h;
  void update_time();
public:
  my_time(int seconds, int minutes, int hours);

  void set(int seconds, int minutes, int hours);
  void set_seconds(int seconds);
  void set_minutes(int minutes);
  void set_hours(int hours);

  int get_seconds();
  int get_minutes();
  int get_hours();
  int total_seconds();
  int total_minutes();
  int total_hours();

  double d_total_seconds();
  double d_total_minutes();
  double d_total_hours();

  std::string to_str();
};

// int between_dates(my_date start, my_date finish);
bool is_leap_year(int year);
