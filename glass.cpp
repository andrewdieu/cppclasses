#include "glass.h"

Glass::Glass(){
    isfull = false;
    material = "glass";
    content = "";
};

Glass::Glass(string _material){
    material = _material;
};

Glass::Glass(string _material, string _content){

    material = _material;
    content = _content;
    isfull = true;
}

bool Glass::isFull()
{
    if (isfull == true){
        return true;
    }
    else {
        return false;
    }
};

void Glass::fill(){
    if (isfull == false){
         content = "water";
    }
    else {
        content = content;
    }
};

void Glass::fill(string toFill){
    if (isfull == false) {
        content = toFill;
    }
    else {
        content = "content";
    }
};

void Glass::empty(){
    content = "";
    isfull = false;
}

string Glass::getContent(){
    return content;
}

string Glass::getMaterial(){
    return material;
}