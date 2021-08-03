// implementing queues using arrays

#include <stdio.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int Count = 0;

  int peek() 
  {
   return front;
   }

  int isEmpty() 
  {
    return Count == 0;
  }

  int isFull() 
  {
   return Count == MAX;
  }


  void enqueue(int data)
  {

   if(!isFull()) 
   {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
 }

  int dequeue()
  {
   int data = intArray[front++];
	
   if (front == MAX)
   {
      front = 0;
   }
	
   itemCount--;
   return data;  
  }

int main() 
{
   /* insert 5 items */
   
   enqueue(3);
   enqueue(5);
   enqueue(9);
   enqueue(1);
   enqueue(12);

   
  enqueue(15);

	
   if(isFull()) {
      printf("Queue is full\n");   
   }

   // remove one item 
   
   int num = dequeue();
	
   printf("Element removed: %d\n",num);
  
   enqueue(16);

    
   enqueue(17);
   enqueue(18);

  
   printf("Element at front: %d\n",peek());


  
   printf("Final queue after removing elements:\n  ");
	
   while(!isEmpty()) {
      int n = dequeue();           
      printf("%d ",n);
   }   
}
