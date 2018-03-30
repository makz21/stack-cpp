

#ifndef stack_h
#define stack_h


class Stack{
public:
        Stack();
        void push(int n);
        int pop();
        void clear();
        bool isEmpty();
        //void display();
        //void destroy();
        ~Stack();
private:
        int top;
        int rozmiar;
        int *dane;
};
    


#endif //stack_h
