#include <stdio.h>

#define MAX_DIGITS 200 // Υποθέτουμε ότι το μέγιστο πλήθος των ψηφίων που θα πρέπει να αντιμετωπίσουμε είναι 200

void multiply(int result[], int digit, int *result_size) {
    int carry = 0;
    for (int i = 0; i < *result_size; i++) {
        int prod = result[i] * digit + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result[*result_size] = carry % 10;
        carry = carry / 10;
        (*result_size)++;
    }
}

int main() {
    int result[MAX_DIGITS] = {0};
    result[0] = 1;
    int result_size = 1;

    // Υπολογισμός του 100!
    for (int i = 2; i <= 100; i++) {
        multiply(result, i, &result_size);
    }

    // Υπολογισμός του άθροισματος των ψηφίων
    int sum = 0;
    for (int i = 0; i < result_size; i++) {
        sum += result[i];
    }

    printf("Το άθροισμα των ψηφίων του 100! είναι: %d\n", sum);

    return 0;
}
