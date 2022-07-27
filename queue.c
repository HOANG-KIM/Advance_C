#include <stdio.h>
#include <stdbool.h>

#define max 6

int queue[max];
int front = 0;
int rear = 0;

void enqueue(int data){
    if(rear == max){
        printf("Queue full");
    }
    else{
        queue[rear] = data;
        rear++;
    }
}

void dequeue(){
    if(front == rear){
        printf("Queue empty");
    }
    else{
        queue[front] = 0;
        front++;
    }
}

bool IsEmpty(int front, int rear) {
    return (front == rear);
}

int Front(){
    return queue[front];
}

int main(int argc, char const *argv[])
{
    // int data[max] = {1,2,3,4,5,6};
    // for (int i = 0; i < max; i++)
    // {
    //     enqueue(data[i]);
    // }
    enqueue(1);
    enqueue(2);
    enqueue(4);
    enqueue(3);
    dequeue();
    enqueue(5);
    printf("Gia tri dau tien cua queue: %d\n", Front());
    printf("Queue co trong khong? --%s--", IsEmpty(front, rear) ? "True" : "False");

    return 0;
}
