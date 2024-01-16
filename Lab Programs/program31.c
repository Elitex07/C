#include <stdio.h>
#include <string.h>
#include <conio.h>

struct TIME {
    int hour;
    int minute;
};

struct TRAIN_INFO {
    int train_no;
    char train_name[100];
    struct TIME departure_time; 
    struct TIME arrival_time;
    char start_station[100];
    char end_station[100];
} train[100];

void menu(int n);
void fromStation(char name[], int n);
void fromStationOnTime(char name[], struct TIME time, int n);
void fromStationUpcoming(char name[], struct TIME time, int n);
void betweenStations(char start[], char end[], int n);

void main() {
    int n, i, j, x, y;
    printf("Enter the number of trains: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("\nTOO SMALL INPUT\n\n");
        return;
    }
    if(n > 100) {
        printf("\nTOO LARGE INPUT\n\n");
        return;
    }

    for(i = 0; i < n; i++) {
        printf("\nEnter Details Train %d\n", i + 1);
        printf("Enter the train number: ");
        scanf("%d", &train[i].train_no);
        printf("Enter the train name: ");
        getchar();
        fgets(train[i].train_name, 100, stdin);
        printf("Enter the departure time (HH:MM): ");
        scanf("%d:%d", &train[i].departure_time.hour, &train[i].departure_time.minute);
        printf("Enter the arrival time (HH:MM): ");
        scanf("%d:%d", &train[i].arrival_time.hour, &train[i].arrival_time.minute);
        printf("Enter the start station: ");
        getchar();
        fgets(train[i].start_station, 100, stdin);
        printf("Enter the end station: ");
        fgets(train[i].end_station, 100, stdin);
    }

    menu(n);
    getch();
}

void menu(int n){
    int y = 0;
    printf("-------------- MENU --------------\n");
    printf("1. List all the trains (sorted according to train number) that depart from a particular section.\n");
    printf("2. List all the trains that depart from a particular station at a particular time.\n");
    printf("3. List all the trains that depart from a particular station within the next one hour of a given time.\n");
    printf("4. List all the trains between a pair of start station and end station.\n");
    printf("5. Exit\n");
    printf("-----------------------------------\n");
    printf("Enter your choice (Sr.no): ");
    scanf("%d", &y);

    switch(y) {
        case 1:
            char name[100];
            struct TIME time;
            printf("Enter the station name: ");
            getchar();
            fgets(name, 100, stdin);
            fromStation(name, n);

            y = 0;
            printf("Do you want to continue (1/0) ?");
            scanf("%d", &y);
            if(y == 1) {
                menu(n);
            }
            break;
        case 2:
            char name2[100];
            struct TIME time2;
            printf("Enter the station name: ");
            getchar();
            fgets(name2, 100, stdin);
            printf("Enter the time (HH:MM): ");
            scanf("%d:%d", &time2.hour, &time2.minute);
            fromStationOnTime(name2, time2, n);

            y = 0;
            printf("Do you want to continue (1/0) ?");
            scanf("%d", &y);
            if(y == 1) {
                menu(n);
            }
            break;
        case 3:
            char name3[100];
            struct TIME time3;
            printf("Enter the station name: ");
            getchar();
            fgets(name3, 100, stdin);
            printf("Enter the time (HH:MM): ");
            scanf("%d:%d", &time3.hour, &time3.minute);
            fromStationUpcoming(name3, time3, n);

            y = 0;
            printf("Do you want to continue (1/0) ?");
            scanf("%d", &y);
            if(y == 1) {
                menu(n);
            }
            break;
        case 4:
            char start[100], end[100];
            printf("Enter the start station name: ");
            getchar();
            fgets(start, 100, stdin);
            printf("Enter the end station name: ");
            fgets(end, 100, stdin);
            betweenStations(start, end, n);

            y = 0;
            printf("Do you want to continue (1/0) ?");
            scanf("%d", &y);
            if(y == 1) {
                menu(n);
            }
            break;
        case 5:
            return;
        default:
            printf("\nINVALID CHOICE\n\n");
            menu(n);
    }
}

void fromStation(char name[], int n) {
    int i, j, index = 0;
    struct TRAIN_INFO td[n];
    for(i = 0; i < n; i++) {
        if(strcmp(train[i].start_station, name) == 0) {
            td[index] = train[i];
            index++;
        }
    }

    for(i = 1; i <= index; i++) {
        struct TRAIN_INFO temp = td[i];
        j = i - 1;
        while(j >= 0 && td[j].train_no > temp.train_no) {
            td[j + 1] = td[j];
            j--;
        }
        td[j + 1] = temp;
    }

    for(i = 0; i <= index; i++){
        printf("Train Number: %d\tName: %s\tDeparture Time: %d:%d\tArrival Time: %d:%d\tFrom: %s\tTo: %s\n-------\n", td[i].train_no, td[i].train_name, td[i].departure_time.hour, td[i].departure_time.minute, td[i].arrival_time.hour, td[i].arrival_time.minute, td[i].start_station, td[i].end_station);
    }
}

void fromStationOnTime(char name[], struct TIME time, int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(strcmp(train[i].start_station, name) == 0 && train[i].departure_time.hour == time.hour && train[i].departure_time.minute == time.minute) {
            printf("Train Number: %d\tName: %s\tDeparture Time: %d:%d\tArrival Time: %d:%d\tFrom: %s\tTo: %s\n-------\n", train[i].train_no, train[i].train_name, train[i].departure_time.hour, train[i].departure_time.minute, train[i].arrival_time.hour, train[i].arrival_time.minute, train[i].start_station, train[i].end_station);
        }
    }
}

void fromStationUpcoming(char name[], struct TIME time, int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(strcmp(train[i].start_station, name) == 0 && train[i].departure_time.hour >= time.hour && train[i].departure_time.hour <= time.hour + 1) {
            printf("Train Number: %d\tName: %s\tDeparture Time: %d:%d\tArrival Time: %d:%d\tFrom: %s\tTo: %s\n-------\n", train[i].train_no, train[i].train_name, train[i].departure_time.hour, train[i].departure_time.minute, train[i].arrival_time.hour, train[i].arrival_time.minute, train[i].start_station, train[i].end_station);
        }
    }
}

void betweenStations(char start[], char end[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(strcmp(train[i].start_station, start) == 0 && strcmp(train[i].end_station, end) == 0) {
            printf("Train Number: %d\tName: %s\tDeparture Time: %d:%d\tArrival Time: %d:%d\tFrom: %s\tTo: %s\n-------\n", train[i].train_no, train[i].train_name, train[i].departure_time.hour, train[i].departure_time.minute, train[i].arrival_time.hour, train[i].arrival_time.minute, train[i].start_station, train[i].end_station);
        }
    }
}