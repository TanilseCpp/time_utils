#include <iostream>
#include "time_utils.h"

Time_utils::Time_utils(long long _epoch){
    epoch = _epoch;
};


void Time_utils::convert_epoch_to_timestamp() {

    tiempo = static_cast<time_t>(epoch);
    tm* tmp = localtime(&tiempo);
    if (tmp != nullptr) {
    fecha = *tmp;
    convertido = true;
    }
}

void Time_utils::show_info () {

    if (convertido == false) {
        std::cout << "Fecha no convertida\n";
    } else {
        std::cout << "Fecha: "
        << fecha.tm_mday << "/"
        << fecha.tm_mon + 1 << "/"
        << fecha.tm_year + 1900 << " "
        << fecha.tm_hour << ":"
        << fecha.tm_min << ":"
        << fecha.tm_sec << std::endl;
    }
    
}
