#include<iostream>
using namespace std;
#define stacksize 100
int mystack[stacksize],top=-1; //Global variables

void push(int value){
if(top>=stacksize-1)
    cout<<"Stack full can't push value";
else mystack[++top]=value;
}

/*void peek(){
if(top<0)
    cout<<"stack is empty"<<endl;
else
    cout<<mystack[top]<<endl;
}*/
void pop()
{
    if(top<0)
    cout<<"Stack is empty can't pop value";
else
{
    cout<<mystack[top]<<endl;
}
    top--;
}
int main(){
   for(int i=0;i<10;i++)
   {
       push(10);
   }
   for(int i=0;i<10;i++)
   {
       pop();
   }
   //peek();
return 0;
}
