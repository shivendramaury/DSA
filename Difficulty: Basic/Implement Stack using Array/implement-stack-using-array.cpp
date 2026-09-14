class myStack {
    int *arr;
    int size;
    int top;
    
    public:
        myStack(int s) {
            size = s;
            top = -1;
            arr = new int[s];
        }

    bool isEmpty() {
        if(top == -1) return true;
        else return false;
    }

    bool isFull() {
        if(top == size-1) return true;
        else return false;
    }

    void push(int x) {
        if(top == size-1) return;
        else {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if(top == -1) return;
        else{
            top--;
        }
    }

    int peek() {
        if(top == -1) return -1;
        else return arr[top];
    }
};