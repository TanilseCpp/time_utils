#ifndef TIME_UTILS_H
#define TIME_UTILS_H

#include <ctime>

class Time_utils {

  private:
    long long epoch;
    time_t tiempo;
    tm fecha;
    bool convertido = false;

  public:
    Time_utils(long long _epoch);

    void convert_epoch_to_timestamp();
    void show_info();
};

#endif // TIME_UTILS_H