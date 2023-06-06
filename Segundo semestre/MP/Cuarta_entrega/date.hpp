#ifndef DATE_HPP
#define DATE_HPP

#include <string>
#include <chrono>
#include <ctime>

class Date {

    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(int day, int month, int year);
        ~Date();
        
        
        /** @param Gets_Y_Sets **/

        int getDay() { return day;}
        void setDay(int day){
            this->day = day;
        }

        int getMonth() { return month;}
        void setMonth(int month){
             this->month = month;
        }


        int getYear() { return year;}
        void setYear(int year) {
             this->year = year;
        }
};

Date::Date(){
    // Obtener la fecha y hora actual
    auto now = std::chrono::system_clock::now();

    // Convertir std::chrono::system_clock::time_point a std::time_t
    auto now_c = std::chrono::system_clock::to_time_t(now);

    // Convertir std::time_t a std::tm
    std::tm* now_tm = std::localtime(&now_c);

    // Establecer los miembros de datos de la clase Date con los valores de std::tm
    year = now_tm->tm_year + 1900;
    month = now_tm->tm_mon + 1;
    day = now_tm->tm_mday;
}

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

/**
 * ?DESTRUCTOR M_D
*/
Date::~Date(){

}



#endif