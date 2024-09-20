#include<iostream>

class Node{
    public:
        int data;
        Node *next;

        //default constructor
        Node(){
            data=0;
            next=NULL;
        }
        //parameterized constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }

};

class SLL{
    Node *head;

    public:
        //Default constructor
        SLL(){
            head=NULL;
        }
    void insert_node(){
        int data;
        std::cout<<"Enter Data to be inserted : ";
        std::cin>>data;
        Node *newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        

    }
    void delete_node(){

    }
    int count_node(){
        
        
    }
    void print_list(){

    }
    void search_data(){

    }
};

int main(){

    int ch;
    SLL list;

    do{
        std::cout<<"Enter choice\n";
        std::cout<<"0:Exit\n";
        std::cout<<"1.Insert Node\n2.Delete Node\n";
        std::cout<<"3.Count nodes\n4.Print List\n";
        std::cout<<"5.serach Node Data\n";

        std::cin>>ch;

        switch(ch){
            case 0:
                std::cout<<"Exiting....\n";
                break;
            case 1:
                std::cout<<"Insering a node...\n";
                list.insert_node();
                break;
            case 2:
                std::cout<<"Deleting a node...\n";
                list.delete_node();
                break;
            case 3:
                std::cout<<"count nodes in the list...\n";
                list.count_node();
                break;
            case 4:
                std::cout<<"print allnodes in the lsit...\n";
                list.print_list();
                break;
            case 5:
                std::cout<<"search data in the list...\n";
                list.search_data();
                break;

        }

    }while(ch!=0);
    

    return 0;
}