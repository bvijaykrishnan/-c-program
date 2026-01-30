#include <stdio.h>
struct Recharge {
    long long mobileNumber;
    float amount;
};
int main() {
    struct Recharge r;
    r.mobileNumber = 7010955515;
    r.amount = 799.0;
    printf("Mobile Recharge Details\n");
    printf("------------------------\n");
    printf("Mobile Number : %lld\n", r.mobileNumber);
    printf("Recharge Amount : %.2f\n", r.amount);
    return 0;
}