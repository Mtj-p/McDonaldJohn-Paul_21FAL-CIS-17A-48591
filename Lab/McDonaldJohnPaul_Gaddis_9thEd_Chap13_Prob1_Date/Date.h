/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: mtjp
 *
 * Created on November 16, 2021, 2:50 AM
 */

#ifndef DATE_H
#define DATE_H

#ifdef __cplusplus
extern "C" {
#endif

    class Date{
    private:
        int month;
        int day;
        int year;
    public:
        void setMonth(int m){
            if(m<13&&m>0){
                month = m;
            }
            else{
                std::cout<<"Input validation error: Month 1-12\n";
            }
        }
        int getMonth(){
            return month;
        }
        void setDay(int d){
            if(d<32&&d>0){
                day = d;
            }
            else{
                std::cout<<"Input validation error: Day 1-31\n";
            }
        }
        int getDay(){
            return day;
        }
        void setYear(int y){
            year = y;
        }
        int getYear(){
            return year;
        }
        void prntNum(){
            std::cout<<month<<"/"<<day<<"/"<<year;
        }
        void prntMnth(){
            switch(month){
                case 1:std::cout<<"January ";break;
                case 2:std::cout<<"February ";break;
                case 3:std::cout<<"March ";break;
                case 4:std::cout<<"April ";break;
                case 5:std::cout<<"May ";break;
                case 6:std::cout<<"June ";break;
                case 7:std::cout<<"July ";break;
                case 8:std::cout<<"August ";break;
                case 9:std::cout<<"September ";break;
                case 10:std::cout<<"October ";break;
                case 11:std::cout<<"November ";break;
                case 12:std::cout<<"December ";break;
            }
            std::cout<<day<<", "<<year;
        }
        void prntDay(){
            std::cout<<day<<" ";
            switch(month){
                case 1:std::cout<<"January ";break;
                case 2:std::cout<<"February ";break;
                case 3:std::cout<<"March ";break;
                case 4:std::cout<<"April ";break;
                case 5:std::cout<<"May ";break;
                case 6:std::cout<<"June ";break;
                case 7:std::cout<<"July ";break;
                case 8:std::cout<<"August ";break;
                case 9:std::cout<<"September ";break;
                case 10:std::cout<<"October ";break;
                case 11:std::cout<<"November ";break;
                case 12:std::cout<<"December ";break;
            }
            std::cout<<year;
        }
    };


#ifdef __cplusplus
}
#endif

#endif /* DATE_H */

