#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <math.h>


/*
2020 - is  leap  and  the  first day of the year is Wednesday (3)
2021 - is not leap and the first day of the year is Fryday (5)
2022 - is not leap and the first day of the year is Saturday (6)
2023 - is not leap and the first day of the year is Sunday (7)
2024 - is  leap  and  the  first day of the year is Monday (1)
2025 - is not leap and the first day of the year is Wednesday (3)
2026 - is not leap and the first day of the year is Thursday (4)
2027 - is not leap and the first day of the year is Friday (5)
2028 - is  leap  and  the  first day of the year is Saturday (6)
2029 - is  leap  and  the  first day of the year is Monday (1)
*/


int gaussEaster(int Y)  // returns weekday for first day of the year [1 : Monday,..., 7 : Sunday]
{
    int first_months[] {31, 28, 31, 30};
    float A, B, C, P, Q, M, N, D, E;
    int month{};

    // All calculations done
    // on the basis of
    // Gauss Easter Algorithm
    A = Y % 19;
    B = Y % 4;
    C = Y % 7;
    P = floor((float)Y / 100.0);
    Q = floor((float)(13 + 8 * P) / 25.0);
    M = (int)(15 - Q + P - (floor)(P / 4)) % 30;
    N = (int)(4 + P - (floor)(P / 4)) % 7;
    D = (int)(19 * A + M) % 30;
    E = (int)(2 * B + 4 * C + 6 * D + N) % 7;
    int days = (int)(22 + D + E);

    // A corner case,
    // when D is 29
    if ((D == 29) && (E == 6)) {
        month = 4;
        days = 19;
        std::cout << Y << "-04-19";
        // return;
    } else {
        // Another corner case,
        // when D is 28
        if ((D == 28) && (E == 6)) {
            month = 4;
            days = 18;
            std::cout << Y << "-04-18" << std::endl;
            // return;
        } else {
            // If days > 31, move to April
            // April = 4th Month
            if (days > 31) {
                month = 4;
                days -= 31;
                std::cout << Y << "-04-" << days << std::endl;
                // return;
            } else {
                // Otherwise, stay on March
                // March = 3rd Month
                month = 3;
                std::cout << Y << "-03-" << days << std::endl;
            }
        }
    }
    // bool is_leap = ((Y % 4) == 0) && ( ((Y % 100) != 0) || ((Y % 400) == 0) );
    int leap = ((Y % 4) == 0) && ( ((Y % 100) != 0) || ((Y % 400) == 0) );
    int week_day{};
    switch (month) {
        case 3:
            week_day = 7 - ( ( 31 + 28 + leap + days) % 7 ) + 1 ;
            break;
        case 4:
            week_day = 7 - ( ( 31 + 28 + 31 + leap + days) % 7 ) + 1;
            break;
        default:
            std::cerr << "Error in first day of year weekday calculation." << std::endl;
    }
    if (week_day > 7) {
        week_day -= 7;
    }
    return week_day;
}


int daysInMonth(int &month, int &year) {
    if (month > 0 && month <= 12) {
        switch(month) {
            case 2:
                return 28 + (((year % 4) == 0) && ( ((year % 100) != 0) || ((year % 400) == 0) ));
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31; 
            default: 
                return 30;
        }
    }
    return 0;
}

bool validDay (int &day) {
    return (day > 0) && (day < 8);
}

int main() {
    const std::vector<std::string> weekDayNames {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    const std::vector<std::string> monthNames {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int year{};
    int firstDay{};
    std::cout << "Enter a year : ";
    std::cin >> year;

    /*  Tests 
    firstDay = gaussEaster(2020);
    firstDay = gaussEaster(2021);
    firstDay = gaussEaster(2022);
    firstDay = gaussEaster(2023);
    firstDay = gaussEaster(2024);
    firstDay = gaussEaster(2025);
    firstDay = gaussEaster(2026);
    firstDay = gaussEaster(2027);
    firstDay = gaussEaster(2028);
    firstDay = gaussEaster(2029);
    */

    firstDay = gaussEaster(year);
    std::cout << "First day week day calculated: " << firstDay << std::endl;

    /*  Not needed anymore
    std::cout << "Enter the first day of the year [1 : Monday,..., 7 : Sunday] : ";
    std::cin >> firstDay;
    */

    std::cout << std::endl << "Calendar for " << year << std::endl;
    if (validDay(firstDay)) {
        for (int month = 1 ; month <= 12 ; month++) {
            std::cout << std::endl << "-- " << monthNames.at(month - 1) << " " << year << " --" << std::endl;
            for (auto &name : weekDayNames) {
                std::cout << std::right << std::setw(7) << name;
            }
            std::cout << std::endl;
            int days = daysInMonth(month, year);
            int day{1};
            int column{1};
            while (column < firstDay) {
                std::cout << std::right << std::setw(7) << "." ;
                column++;
            }
            while (day <= days) {
                std::cout << std::right << std::setw(7) << day;
                day++;
                column++;
                if (column > 7) {
                    std::cout << std::endl;
                    column = 1;
                }
            }
            firstDay = column;
            if (column != 1)
                std::cout << std::endl;
        }
    } else {
        std::cout << firstDay << " is not valid." << std::endl;
    }

    return 0;
}


/*
// solution provided



// This program prompts the user to enter a year (examples 2015, 1992,...) and 
// the first weekday of a year [1: Monday, ... 7:Sunday]. To be very clear,
// the weekday may be 1 for Monday, 2 for Tuesday and so on. 

// The program then prints the calendar for the specified year. Below is a simple run

// PS E:\Sandbox\CppTemplateProject> .\rooster.exe
// Enter a year  :  2020
// Enter the first day of the year [1: Monday, ... 7:Sunday]: 3

// Calendar for 2020
// --January 2020 --
//    Mon   Tue   Wed   Thu   Fri   Sat   Sun
//                  1     2     3     4     5
//      6     7     8     9    10    11    12
//     13    14    15    16    17    18    19
//     20    21    22    23    24    25    26
//     27    28    29    30    31

// --February 2020 --
//    Mon   Tue   Wed   Thu   Fri   Sat   Sun
//                                    1     2
//      3     4     5     6     7     8     9
//     10    11    12    13    14    15    16
//     17    18    19    20    21    22    23
//     24    25    26    27    28    29 

//     ..... 

//     This program is slightly challenging and may take you a while to get right.
//     Don't worry if it takes you hours, even days! If you were stuck on it, just
//     take a look at our reference solution and learn the little tricks we're using
//     in here. This program will test your understanding of the many concepts learnt
//     so far in the course. Things like 
//       . data input
//       . data output
//       . output formatting
//       . flow control
//       . loops 
//       . general problem solving skills

//     Have fun!


#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter a year  :  ";
    unsigned int year;
    std::cin >> year;

    std::cout << "Enter the first day of the year [1: Monday, ... 7:Sunday]: ";
    unsigned int first_day;
    std::cin >> first_day;


    std::cout << std::endl;
    std::cout << "Calendar for 2020" << std::endl;

    int number_of_days_in_a_month = 0;
    unsigned int starting_point{first_day};
    unsigned int day_counter{0}; //After we print the day, we increment
    unsigned int date_width{6};

    // Display calendar for each month
    for (int month = 1; month <= 12; month++)
    {
        // Print the title and get number of days in a month
        switch (month)
        {
            case 1:
                number_of_days_in_a_month = 31;
                std::cout << "--January " <<year <<  " --" << std::endl;
                break;
            case 2:
                //Check for Leap years 
                if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                    number_of_days_in_a_month = 29;
                else
                    number_of_days_in_a_month = 28;
                    std::cout << "--February " <<year <<  " --" << std::endl;
                break;
            case 3:
                number_of_days_in_a_month = 31;
                std::cout << "--March " <<year <<  " --" << std::endl;

                break;
            case 4:
                number_of_days_in_a_month = 30;
                std::cout << "--April " <<year <<  " --" << std::endl;
                break;
            case 5:
                number_of_days_in_a_month = 31;
                std::cout << "--May " <<year <<  " --" << std::endl;
                break;
            case 6:
                number_of_days_in_a_month = 30;
                std::cout << "--June " <<year <<  " --" << std::endl;
                break;
            case 7:
                number_of_days_in_a_month = 31;
                std::cout << "--July " <<year <<  " --" << std::endl;
                break;
            case 8:
                number_of_days_in_a_month = 31;
                std::cout << "--August " <<year <<  " --" << std::endl;
                break;
            case 9:
                number_of_days_in_a_month = 30;
                std::cout << "--September " <<year <<  " --" << std::endl;
                break;
            case 10:
                number_of_days_in_a_month = 31;
                std::cout << "--October " <<year <<  " --" << std::endl;
                break;
            case 11:
                number_of_days_in_a_month = 30;
                std::cout << "--November " <<year <<  " --" << std::endl;
                break;
            case 12:
                number_of_days_in_a_month = 31;
                std::cout << "--December " <<year <<  " --" << std::endl;
                break;
        }

        //Print day header. Make sure each date takes up date_width characters
        std::cout << std::setw(date_width) << "Mon"
                  << std::setw(date_width) << "Tue"
                  << std::setw(date_width) << "Wed"
                  << std::setw(date_width) << "Thu"
                  << std::setw(date_width) << "Fri"
                  << std::setw(date_width) << "Sat"
                  << std::setw(date_width) << "Sun" << std::endl;

        //Print empty day slots in calendar
        for(unsigned int j{1};j < starting_point; ++j){
            std::cout << std::setw(date_width) <<  ""; 
            ++ day_counter;
            if(day_counter == 7){
                std::cout << std::endl; // Move to the next week
                day_counter = 0;
            }
        }

        //Print actual days in the calendar
        for(unsigned int i{1} ; i <= number_of_days_in_a_month; ++i){ 
            std::cout << std::setw(date_width) << i;
            ++day_counter;

            if(day_counter == 7){
                std::cout << std::endl;
                day_counter = 0;
            }

        }

        //Do the set up for the next month
        starting_point = day_counter + 1;
        day_counter = 0;
        std::cout <<  "\n\n";

    }

    return 0;
}
*/
