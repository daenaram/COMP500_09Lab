#include <stdio.h>

float compute_bill (int num_nights, float room_rate, float mini_bar_total);
float print_bill (int num_nights, float room_rate, float mini_bar_total);

int main(void){
    int num_nights;
    float room_rate, mini_bar_total;
    
    printf("Number of nights? Room rate? Minibar?\n");
    scanf("%d %f %f", &num_nights, &room_rate, &mini_bar_total);
    print_bill (num_nights, room_rate, mini_bar_total);
    return 0;
    
}

float compute_bill (int num_nights, float room_rate, float mini_bar_total){
    return (num_nights * room_rate) + mini_bar_total;
}

float print_bill (int num_nights, float room_rate, float mini_bar_total){
    
    printf("Nights:    %d\n", num_nights);
    printf("Room rate: $%6.2f\n", room_rate);
    printf("Minibar:   $%6.2f\n", mini_bar_total);
    printf("-----------------\n");
    printf("Total:     $%.2f", compute_bill (num_nights, room_rate, mini_bar_total));
    
    return 0;
}
