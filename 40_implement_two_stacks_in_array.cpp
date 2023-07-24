

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
       
      if(top1+1<top2 && top1+1<size)
      {
          top1++;
          arr[top1]=x;
          
          
          
      }
        
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
        if(top2-1 > top1 && top2-1>=0)
        {
            top2--;
            arr[top2]=x;
        }
       
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        int el=-1;
        if(top1>=0)
        {
            el=arr[top1];
            top1--;
        }
        return el;
        
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
         int el=-1;
        if(top2<size)
        {
            el=arr[top2];
            
            top2++;
        }
        return el;
        
    }
};
