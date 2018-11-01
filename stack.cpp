//stack
//»Î’ª
void push(stack &S,int x)
{
	if(S.top<=Maxsize-1)
	{
		S.data[++S.top];
		return ture;
	}
	else return flase;
} 
//≥ˆ’ª
void pop(stack &S,int &x)
{
	if(!IsEmpty(S))
	{
		x=S.data[s.top--];
		return ture;
	}
	else return flase;
} 
// »°’ª∂•
void top(stack S ,int &x)
{
	if(!IsEmpty(S))
	{
		x=s.data[s.top];
		return ture;
	}
	else return flase;
} 
