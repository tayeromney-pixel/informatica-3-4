#include <stdio.h>

int main(void)
{
    float celsius;
    printf("Enter temp in celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 1.8) + 32;

    if(celsius < 0) {
        printf("❄️ freezing temperature\n");
    } else if(celsius <= 10) {
        printf("🥶 very cold weather\n");
    } else if(celsius < 20) {
        printf("🧥 chilly weather\n");
    } else if(celsius < 30) {
        printf("🌤️ normal weather\n");
    } else if(celsius < 40) {
        printf("😅 hot weather\n");
    } else {  // celsius >= 40
        printf("🔥 very hot weather\n");
    }

    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);

}
