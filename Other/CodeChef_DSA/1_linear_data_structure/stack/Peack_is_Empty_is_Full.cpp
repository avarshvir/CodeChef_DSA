int peek(){
    if(top >= 0){
        int ele = a[top];
        cout<<"Peeked: "<<ele<<"\n";
        return 1;
    }
    else{
        cout<<"Stack is empty. Cannot peek.\n";
        return 0;
    }
}

int isEmpty(){
    return top == -1;
}

int isFull(){
    if(top >= MAX_SIZE){
        return 1;
    }
    else{
        return 0;
    }
}
