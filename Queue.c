#include <stdio.h>

int Maxsize = 5;
int Queue[5];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == Maxsize - 1) {
        printf("Queue is full\n");
    } 
    else if (rear == -1) {
        front = rear = 0;
        Queue[rear] = value;
    } 
    else {
        rear++;
        Queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    }
    else if (front == rear) {
        front = rear = -1;
    }
    else {
        front++;
    }
}

void display_Queue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display_Queue();

    dequeue();
    display_Queue();

    enqueue(40);
    enqueue(50);
    enqueue(60);  
    display_Queue();

    return 0;
}
