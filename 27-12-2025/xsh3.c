#include <stdio.h>
int main() {
    
    float investment;
    float purchasePrice;
    float currentPrice;
    int shares;
    float profitLoss;


    printf("Enter initial investment amount: ");
    scanf("%f", &investment);

    printf("Enter stock purchase price per share: ");
    scanf("%f", &purchasePrice);

    printf("Enter current stock price per share: ");
    scanf("%f", &currentPrice);

    
    shares = investment / purchasePrice;

    profitLoss = (currentPrice - purchasePrice) * shares;


    if (profitLoss > 0) {
        printf("You made a profit of %.2f\n", profitLoss);
    } 
    else if (profitLoss < 0) {
        printf("You incurred a loss of %.2f\n", profitLoss);
    } 
    else {
        printf("No profit, no loss. The stock price did not change.\n");
    }
    return 0;
}