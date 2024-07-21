#include "Card.h"

Card::Card(){
    //default constructor
}

Card::Card(Colour colour, int number){
    this->colour = colour;
    this->number = number;
}

Card::Card(Card& other){
    //copy constructor
}

Card::~Card(){
    //deconstructor
}

Card::Colour getColour(){
    //todo
}

Card::int getnumber(){
    return number;
}

Card::std::string getRule(){
    if(colour == 0){

    }else if(colour == 1){

    }else if(colour == 2){

    }else if(colour == 3){

    }else if(colour == 4){

    }else if(colour == 5){

    }else if(colour == 6){

    }
}

Card::std::string colourAsString(){
    if(colour == 0){
        return "RED";
    }else if(colour == 1){
        return "ORANGE";
    }else if(colour == 2){
        return "YELLOW";
    }else if(colour == 3){
        return "GREEN";
    }else if(colour == 4){
        return "BLUE";
    }else if(colour == 5){
        return "INDEGO";
    }else if(colour == 6){
        return "VIOLET";
    }else{
        return "Colour not found"
    }
}