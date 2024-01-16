#include "LinkedList.h"

int main() {
    
    LinkedList<int> myList;

    
    myList.AddToHead(1);
    myList.AddToTail(2);
    myList.AddToTail(3);

    
    myList.Show();

    
    myList.DeleteFromHead();
    myList.DeleteFromTail();

    
    myList.Show();

    
    myList.DeleteAll();

    
    myList.Show();

    return 0;
}
