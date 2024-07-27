#include <stdio.h>
#include <stdlib.h>
#define CARDS 52

// bitCard structure definition with bit fields
struct bitCard {
 unsigned int face : 4; // 4 bits; 0-15
 unsigned int suit : 2; // 2 bits; 0-3
 unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCard Card; // new type name for struct bitCard


void fillDeck( Card * const wDeck );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );





int main()
{
    Card deck[ CARDS ]; // create array of 52 Cards
    fillDeck( deck );
    shuffle( deck );
    deal( deck );

    return 0;
}


// initialize Cards
void fillDeck(Card * const wDeck  ){
    size_t i; // counter
    for ( i = 0; i < CARDS; ++i ) {
        wDeck[ i ].face = i % (CARDS / 4);
        wDeck[ i ].suit = i / (CARDS / 4);
        wDeck[ i ].color = i / (CARDS / 2);
    } // end for
}


// output cards in two-column format; cards 0-25 subscripted with
 // k1 (column 1); cards 26-51 subscripted with k2 (column 2)
void deal( const Card * const wDeck )
{
 size_t k1; // subscripts 0-25
 size_t k2; // subscripts 26-51

 // loop through wDeck
 for ( k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2 ) {
    printf( "Card:%3d Suit:%2d Color:%2d ", wDeck[ k1 ].face, wDeck[ k1 ].suit, wDeck[ k1 ].color );

    printf( "Card:%3d Suit:%2d Color:%2d\n",wDeck[ k2 ].face, wDeck[ k2 ].suit, wDeck[ k2 ].color );

 } // end for
 } // end function dea


void shuffle( Card * const wDeck )
 {
    size_t i; // counter
    size_t j; // variable to hold random value between 0 - 51
    Card temp; // define temporary structure for swapping Cards

    // loop through wDeck randomly swapping Cards
    for ( i = 0; i < CARDS; ++i ) {
        j = rand() % CARDS;
        temp = wDeck[ i ];
        wDeck[ i ] = wDeck[ j ];
        wDeck[ j ] = temp;
    }}
