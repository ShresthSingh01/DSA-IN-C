#include<stdio.h>
#define SIZE 5 
int stack[SIZE],top=-1;
void push(int x){
   if(top == SIZE-1)
     print("OverFlow\n);
   else
     stack[++top]=x;
}
void pop(){
  if(top==-1)
    print("Underflow\n");
  else
    print("Popped: %d\n",stack[top--]);
}
int main(){
   push(10);
   push(20);
   pop();
}
