#include <iostream>
using namespace std;

int main()
{
    // copy by value
    int card = 100;
    int newCard = card;
    card = 200;
    printf("card is : %d, newCard is %d.\n", card, newCard);

    // copy by reference
    int *ptr = &card;
    newCard = *ptr;
    card = 300;
    printf("card is : %d, newCard is %d.\n", &card, ptr);
}