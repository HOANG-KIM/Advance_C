#include <stdio.h>


int MAX = 4;       
int stack[4];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAX)
      return 1;
   else
      return 0;
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   }else {
      printf("Stack trong.\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   }else {
      printf("Stack da day.\n");
   }
}

int main(int argc, char const *argv[])
{
    push(1);
    push(2);
    push(3);
    push(5);
    push(21);
    push(22);

    while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
    }
    return 0;
}
