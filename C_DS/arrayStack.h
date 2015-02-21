struct arrayStack
{
	int top;
	int capacity;
	int *arr;
};

struct arrayStack  *createStack(int capacity)
{
	struct arrayStack *stack=malloc(sizeof(struct arrayStack));
	if(!stack)
	{		
		return NULL;
	}
	stack->top=-1;
	stack->capacity=capacity;
	stack->arr=(int*)malloc(stack->capacity*sizeof(int));
	if(!stack->arr)
		return NULL;
	return stack;
}

int isEmpty(struct arrayStack *stack)
{
	return (stack->top==-1);
}
char topMost(struct arrayStack *stack)
{ 
	return stack->arr[stack->top];
}
void push(struct arrayStack *stack,char op)
{
	stack->arr[++stack->top]=op;
}
char pop(struct arrayStack *stack)
{
	if(!isEmpty(stack))
		return stack->arr[stack->top--];
	else
		return '$';
	
}

