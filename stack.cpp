//stack
//��ջ
void push(stack &S,int x)
{
	if(S.top<=Maxsize-1)
	{
		S.data[++S.top];
		return ture;
	}
	else return flase;
} 
//��ջ
void pop(stack &S,int &x)
{
	if(!IsEmpty(S))
	{
		x=S.data[s.top--];
		return ture;
	}
	else return flase;
} 
// ȡջ��
void top(stack S ,int &x)
{
	if(!IsEmpty(S))
	{
		x=s.data[s.top];
		return ture;
	}
	else return flase;
} 
