#define MAX_SIZE 101
int a[MAX_SIZE];
int top = -1;

void push(int ele){
    if(top < MAX_SIZE - 1){ // Remove __ and complete the push function
        a[++top] =  ele;
        cout<<"Pushed: "<< ele <<"\n";
    }
    else{
        cout<<"Stack is full. Cannot push: "<< ele <<"\n";
    }
}

int pop(){
    if(top >= 0){
        int ele = a[top];
        top--; // Remove __ and complete the pop function
        cout<<"Popped: "<<ele<<"\n";
        return ele;
    }
    else{
        cout<<"Stack is empty. Cannot pop.\n";
        return '-1';
    }
}