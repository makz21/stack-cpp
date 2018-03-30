#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack() {
    this->rozmiar=2;
    this->dane= new int[this->rozmiar];
    this->top=0;
}

Stack::~Stack()
{
    delete [] dane;
    cout<< "Stos zostal usuniety"<<endl;
}

void Stack::clear()
{
    this->top=0;
    cout<<"Stos zostal wyczyszczony"<<endl;
}


void Stack::push(int n){
    if (this->top<this->rozmiar){
        this->dane[this->top++]=n;
    }
    else{
        cout<<"Stos zostal poszerzony i element zostal dodany"<<endl;
        int *noweDane = new int[this->rozmiar=this->rozmiar*2];
        memcpy(noweDane, this->dane, this->top*sizeof(int));
        delete [] dane;
        dane=noweDane;
        this->dane[this->top++]=n;
    }
}

int Stack::pop()
{
    if(this->top>0)
    {
        return this->dane[--this->top];
    }
    else
    {
        cout<<"Stos jest pusty!"<<endl;
        return-1;
    }
}
bool Stack::isEmpty()
{
    if(this->top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    

