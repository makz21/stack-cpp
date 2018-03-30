#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    int element;
    int wybor;
    int znacznik=1;
    Stack *s1 = new Stack;
    
    while(znacznik!=0)
    {
        cout<<"PROGRAM STOS ZREALIZOWANY W C++"<<endl;
        cout<<"********************************"<<endl;
        cout<<"1. ZNISZCZ STOS"<<endl;
        cout<<"2. DODAJ ELEMENT"<<endl;
        cout<<"3. USUN ELEMENT"<<endl;
        cout<<"4. CZY PUSTY?"<<endl;
        cout<<"5. WYCZYSC STOS"<<endl;
        cout<<"6. WYLACZ PROGRAM"<<endl;
        
        cin>>wybor;
        
        
        switch(wybor)
        {
            case 1:
            {
                delete s1;
                s1 = new Stack;
            }
                break;
            case 2:
            {
                cout<<"Nowy element: "<<endl;
                cin>>element;
                s1->push(element);
            }
                break;
            case 3:
            {
                element = s1->pop();
                if(element!=-1)
                {
                    cout<<"Zdjety element: "<<element<<endl;
                }
            }
                break;
            case 4:
            {
                if(s1->isEmpty()==1)
                {
                    cout<<"Pusty stos."<<endl;
                }
                else
                {
                    cout<<"Niepusty stos."<<endl;
                }
            }
                break;
            case 5:
            {
                s1->clear();
            }
                break;
            case 6:
            {
                znacznik=0;
            }
                break;
            default:
            {
                cout<<"Brak opcji w menu."<<endl;
            }
        }
    }
    
    //s1->~stack();
    delete s1;
    
    
    return 0;
}

