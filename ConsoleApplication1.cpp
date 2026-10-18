#include <iostream>
#include <string>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

std::string getmonthname(int mnumber) {
    Month month = static_cast<Month>(mnumber);

    switch (month) {
    case JANUARY: return "Январь";
    case FEBRUARY: return "Февраль";
    case MARCH: return "Март";
    case APRIL: return "Апрель";
    case MAY: return "Май";
    case JUNE: return "Июнь";
    case JULY: return "Июль";
    case AUGUST: return "Август";
    case SEPTEMBER: return "Сентябрь";
    case OCTOBER: return "Октябрь";
    case NOVEMBER: return "Ноябрь";
    case DECEMBER: return "Декабрь";
    default: return "Неправильный номер!";
    }
}

int main() {
    int mnumber;
    setlocale(LC_ALL, "Russian");

    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> mnumber;

        if (static_cast<int>(mnumber) == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        std::string mname = getmonthname(mnumber);
        std::cout << mname << std::endl;
    }

    return 0;
}
