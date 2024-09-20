#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int answer;
    string response;
    system("clear");
    printf("Answer in numbers\n");
    printf("Question1: Location\n1:Africa\n2:Europe\n3:Asia\n");
    scanf("%d", &answer);
    switch (answer)
    {
    case 1:
        printf("1:Northern Africa\n2:Central or Middle Africa\n3:Southern Africa\n4:East Africa\n5:Western Africa\n");
        scanf("%d", &answer);
        switch (answer)
    {
        case 1:
            response = "Northern Africa";
            break;
        case 2:
            response = "Central or Middle Africa";
            break;
        case 3:
            response = "Southern Africa";
            break;
    
        case 4:
            response = "East Africa";
            break;
        
        case 5:
            response = "Western Africa";
            break;
        }
        break;
    
    case 2:
        printf("1:Eastern Europe\n2:Southern Europe\n3:Western Europe\n4:Northern Europe\n");
        scanf("%d", &answer);
        switch (answer)
    {
        case 1:
            response = "Eastern Europe";
            break;
        case 2:
            response = "Southern Europe";
            break;
        case 3:
            response = "Western Europe";
            break;
    
        case 4:
            response = "Northern Europe";
            break;
        }
        break;
    case 3:
        printf("1:South Asia\n2:Southeastern Asia\n3:Central Asia\n4:East Asia\n5:Western Asia\n");
        scanf("%d", &answer);
        switch (answer)
    {
        case 1:
            response = "South Asia";
            break;
        case 2:
            response = "Southeastern Asia";
            break;
        case 3:
            response = "Central Asia";
            break;
    
        case 4:
            response = "East Asia";
            break;
        
        case 5:
            response = "Western Asia";
            break;
        }
        break;
    }
    system:("clear");
    cout << response;
    return 0;
}