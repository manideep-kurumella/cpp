#include<iostream>
#define STACK_SIZE 30

class Stack
{
    private:
        int top;
        int stack[STACK_SIZE];

    public:
        Stack()
        {
            top =-1;
            for (int i=0 ; i<STACK_SIZE ; i++)
                stack[i] = 0;
        }

        bool isEmpty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top == STACK_SIZE-1)
                return true;
            else
                return false;
        }

        void push(int value)
        {
            if(isFull())
            {
                std::cout<<"Stack overflow....cannot push value : "<<value<<std::endl;
            }
            else
            {
                top++;
                stack[top] = value;

            }
        }

        int pop()
        {
            if(isEmpty())
            {
                std::cout<<"stack underflow...no stack elements to pop"<<std::endl;
                return 0;
            }
            else
            {
                int popvalue = stack[top];
                stack[top] = 0;
                top--;
                return popvalue;
            }

        }

        int count()
        {
            return top+1;
        }

        int peek(int index)
        {

            if(index > top || index >= STACK_SIZE || isEmpty())
            {
                std::cout<<"Invalid index "<<std::endl;
                return 0;
            }
            else
            {
                return stack[index];

            }
        }

        void change(int index,int value)
        {
            if(index > top || index > STACK_SIZE || isEmpty())
            {
                std::cout<<"Invalid index "<<std::endl;
                return;
            }
            else
            {
                stack[index] = value;
                std::cout<<"changed the value at the position : "<<index<<std::endl;
            }
        }

        void display()
        {
            if(isEmpty())
            {
                std::cout<<"stack empty"<<std::endl;
                return;
            }
            else
            {
                std::cout<<"Stack elements"<<std::endl;
                for( int i = top;i >= 0 ; i--)
                    std::cout<<stack[i]<<std::endl;

            }
        }
};

int main()
{
    Stack s;
    int option, position, value;

    do
    {
        std::cout<<"++++++++++++++++++++++++++++++++++++++++\n";
        std::cout<<"Options : \n"<<"1.push\n"<<"2.pop\n"<<"3.count\n"<<"4.peek\n";
        std::cout<<"5.change\n"<<"6.display stack\n"<<"7.isEmpty()\n"<<"8.isFull\n";
        std::cout<<"++++++++++++++++++++++++++++++++++++++++\n";
        std::cout<<"select option :";
        std::cin>>option;

        switch(option)
        {
            case 0 : 
                std::cout<<"Exiting...\n";
                break;
            case 1 :
                std::cout<<"Enter value to push into stack : ";
                std::cin>>value;
                s.push(value);
                break;
            case 2 :
                std::cout<<"Popped the value : "<<s.pop()<<" from the stack \n";
                break;
            case 3 :
                std::cout<<"Number of elements in the stack = "<<s.count()<<std::endl;
                break;
            case 4 :
                std::cout<<"Enter the index to be peeked : ";
                std::cin>>position;
                std::cout<<"Value at index : "<<position<<" = "<<s.peek(position)<<std::endl;
                break;
            case 5 :
                std::cout<<"Enter the index to be changed : ";
                std::cin>>position;
                std::cout<<"Enter the new value to be changed : ";
                std::cin>>value;
                s.change(position,value);
                break;
            case 6 :
                s.display();
                break;
            case 7 :
                if(s.isEmpty())
                    std::cout<<"stack is empty "<<std::endl;
                else
                    std::cout<<"stack is not empty "<<std::endl;
                break;
            case 8 :
                if(s.isFull())
                    std::cout<<"stack is FULL "<<std::endl;
                else
                    std::cout<<"stack is not FULL "<<std::endl;
                break;
            default:
                std::cout<<"Wrong option Entered.....Enter 0 to exit or select correct option in the menu\n";
                break;
        }

    } while (option != 0);
    
    return 0;
}