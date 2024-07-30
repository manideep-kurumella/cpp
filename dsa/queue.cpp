#include<iostream>
#define QUEUE_SIZE 30

class Queue
{
    private:
        int front;
        int rear;
        int queue[QUEUE_SIZE];

    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for(int i=0; i<QUEUE_SIZE; i++ )
                queue[i]=0;

        }

        bool isEmpty()
        {
            if(front==-1 && rear==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if (front==-1 && rear==QUEUE_SIZE-1)
                return true;
            else
                return false;
        }

        void enqueue(int value)
        {
            if(isFull())
            {
                std::cout<<"QUEUE Full ....cannot perform enqueue operation"<<std::endl;
                return;
            }
            else if(isEmpty())
            {
                front++;
                rear++;
            }
            else
            {
                rear++;
            }
            queue[rear]=value;

        }

        int dequeue()
        {
            int popvalue;           
            if(isEmpty())
            {
              std::cout<<"QUEUE Empty ....cannot perform Dequeue operation"<<std::endl;
              return 0;  
            }
            else if(front == rear)
            {
                popvalue = queue[front];
                queue[front] = 0;
                front=-1;
                rear=-1;
            }
            else
            {
                popvalue = queue[front];
                queue[front] =0 ;
                front++;

            }
            return popvalue;

        }

        int count()
        {
            if(!isEmpty())
                return rear-front+1;
            else
                return 0;
        }

        void display()
        {
            if(isEmpty())
                std::cout<<"Queue is empty\n";
            else
            {
                std::cout<<"QUEUE ELEMENTS ARE : ";
                for(int i=front;i<=rear;i++)
                    std::cout<<queue[i]<<"\t";
                std::cout<<std::endl;

            }
        }
};


int main()
{
    Queue q;
    int option, position, value;

    do
    {
        std::cout<<"++++++++++++++++++++++++++++++++++++++++\n";
        std::cout<<"Options : \n"<<"1.Enqueue\n"<<"2.Dequeue\n"<<"3.count\n";
        std::cout<<"4.display queue\n"<<"5.isEmpty()\n"<<"6.isFull()\n";
        std::cout<<"++++++++++++++++++++++++++++++++++++++++\n";
        std::cout<<"select option :";
        std::cin>>option;

        switch(option)
        {
            case 0 : 
                std::cout<<"Exiting...\n";
                break;
            case 1 :
                std::cout<<"Enter value to enqueue into queue : ";
                std::cin>>value;
                q.enqueue(value);
                break;
            case 2 :
                std::cout<<"dequeued the value : "<<q.dequeue()<<" from the queue \n";
                break;
            case 3 :
                std::cout<<"Number of elements in the queue = "<<q.count()<<std::endl;
                break;
            case 4 :
                q.display();
                break;
            case 5 :
                if(q.isEmpty())
                    std::cout<<"Queue is empty "<<std::endl;
                else
                    std::cout<<"Queue is not empty "<<std::endl;
                break;
            case 6 :
                if(q.isFull())
                    std::cout<<"Queue is FULL "<<std::endl;
                else
                    std::cout<<"Queue is not FULL "<<std::endl;
                break;
            default:
                std::cout<<"Wrong option Entered.....Enter 0 to exit or select correct option in the menu\n";
                break;
        }

    } while (option != 0);
    
    return 0;
}
