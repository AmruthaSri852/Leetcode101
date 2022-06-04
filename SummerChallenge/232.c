// 232. Implement Queue using Stacks

#define MAX_SIZE 100

typedef struct 
    {
        int size;
        int* stack;
    }   MyStack;


typedef struct 
    {
       MyStack* stack1; 
       MyStack* stack2; 
    }  MyQueue;


MyQueue* myQueueCreate() 
    {
        MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
        queue->stack1 = (MyStack*)malloc(sizeof(MyStack));
        queue->stack2 = (MyStack*)malloc(sizeof(MyStack));
        queue->stack1->stack = (int*)malloc(sizeof(int)*MAX_SIZE);
        queue->stack1->size = -1;
        queue->stack2->stack = (int*)malloc(sizeof(int)*MAX_SIZE);
        queue->stack2->size = -1;
        return queue;
    }

void myQueuePush(MyQueue* obj, int x) 
    {
        obj->stack1->size++;
        obj->stack1->stack[obj->stack1->size] = x;
    }

int myQueuePop(MyQueue* obj) 
    {
        int size2 = obj->stack2->size , j = 0; 
        if(obj->stack2->size >= 0)
            { 
                int val = obj->stack2->stack[size2];
                obj->stack2->stack[size2] = 0;
                obj->stack2->size--;
                return val;
            } 
        
        else
            { 
                obj->stack2->size = obj->stack1->size;
                    for(int i = obj->stack1->size; i >=0; i--)
                        {
                            obj->stack2->stack[j] = obj->stack1->stack[i];
                            obj->stack1->stack[i] = 0;
                            j++;
                        }
                obj->stack1->size = -1;
                int val = obj->stack2->stack[obj->stack2->size];
                obj->stack2->stack[obj->stack2->size] = 0;
                obj->stack2->size--;
                return val;
            }
    }

int myQueuePeek(MyQueue* obj) 
    {

        int size2 = obj->stack2->size , j = 0;

        if(size2 >= 0)
            { 
                int val = obj->stack2->stack[size2];
                return val;
            } 
        
        else
        { 
            obj->stack2->size = obj->stack1->size;
                for(int i = obj->stack1->size; i >=0; i--)
                {
                    obj->stack2->stack[j] = obj->stack1->stack[i];
                    obj->stack1->stack[i] = 0;
                    j++;
                }
            obj->stack1->size = -1;
            int val = obj->stack2->stack[obj->stack2->size];
            return val;
        }
    }

bool myQueueEmpty(MyQueue* obj) 
    {
        return obj->stack1->size == -1 && obj->stack2->size == -1;
    }

void myQueueFree(MyQueue* obj) 
    {
        free(obj->stack1->stack);
        free(obj->stack2->stack);
        free(obj->stack1);
        free(obj->stack2);
        free(obj);  
    }


// Input:
//
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
//
// Output:
// [null, null, null, 1, 1, false]
