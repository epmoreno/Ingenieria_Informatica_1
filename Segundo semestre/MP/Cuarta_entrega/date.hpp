#ifndef DATE_HPP
#define DATE_HPP

#include <string>

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
    /**
     * ?POR DEFECTO
    */
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