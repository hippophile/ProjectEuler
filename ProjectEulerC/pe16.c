#include <stdio.h>

// Συνάρτηση που διπλασιάζει έναν αριθμό που αποθηκεύεται ως πίνακας ψηφίων
void mul2(int *n) {
    int c = 0, v; // Μεταβλητές για τη μεταφορά και το αποτέλεσμα
    while (*n >= 0) { // Όσο το ψηφίο δεν είναι -1 (σταματητής)
        v = c + *n * 2; // Υπολογισμός του νέου ψηφίου πολλαπλασιάζοντας με 2 και προσθέτοντας τη μεταφορά
        c = v / 10; // Υπολογισμός της μεταφοράς
        *n++ = v % 10; // Αποθήκευση του ψηφίου στον πίνακα και αύξηση του δείκτη
    }
    if (c) *n++ = c; // Αν υπάρχει μεταφορά, αποθηκεύεται ως επόμενο ψηφίο
    *n = -1; // Τοποθέτηση σταματητή στο τέλος του πίνακα
}

// Συνάρτηση που υπολογίζει το άθροισμα των ψηφίων ενός αριθμού που αποθηκεύεται ως πίνακας ψηφίων
int sum(int *n) {
    int sum = 0; // Αρχικοποίηση του άθροισμα
    while (*n >= 0) // Όσο το ψηφίο δεν είναι -1 (σταματητής)
        sum += *n++; // Προσθήκη του ψηφίου στο άθροισμα και αύξηση του δείκτη
    return sum; // Επιστροφή του τελικού αθροίσματος
}

int main(void) {
    int arr[1000] = {1, -1}; // Δήλωση και αρχικοποίηση του πίνακα με τον αρχικό αριθμό 1 και τον σταματητή -1
    int i;
    for (i = 0; i < 1000; i++) // Επανάληψη 1000 φορές
        mul2(arr); // Κλήση της συνάρτησης για διπλασιασμό του αριθμού

    // Εκτύπωση του αθροίσματος των ψηφίων
    printf("%d\n", sum(arr));

    return 0;
}
