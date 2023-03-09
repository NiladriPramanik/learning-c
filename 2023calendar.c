#include <stdio.h>
#include <stdlib.h>

int main() {
    int year = 2023, month, day;
    printf("Enter a date in format (DD MM): ");
    scanf("%d %d", &day, &month);

    
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.\n");
        return 1;
    }

     int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = day;

    for (int i = 0; i < month - 1; i++) {
        days += daysInMonth[i];
    }

    char* weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int startDay = 0; 

    int dayOfWeek = (startDay + days - 1) % 7;

 
    printf("%d/%d/%d is a %s.\n", day, month, year, weekdays[dayOfWeek]);

    return 0;
}
