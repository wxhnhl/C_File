OperandType EvaluateExpression(){
	//算术表达式求值的算符优先算法。设OPTA和OPED分别为运算符栈和运算数栈
	//OP为运算符集合
	InitStack(OPTR); Push(OPTR,'#');
	initStack(OPED); c=getchar();
	while(c!='#'||GetTop(OPTR)!='#'){
		if(!In(c,op)){Push(OPND,c);	c=getchar();}		//不是运算符则进栈
		else
			switch(Precede(GetTop((OPTR),c)){
				case '<':	//栈顶元素优先权低
						Push(OPTR,c);	c=getchar();
						break;
				case '=':	//脱括号并接收下一字符
					Pop(OPTR,x);		c=getchar();
					break;
				case '>':	//退栈并将运算结果入栈
					Pop(OPTR,theta);
					Pop(OPND,b);	Pop(OPND,a);
					Push(OPND,Operate(a,theta,b));
					break;
		}//swith
	}//while
	return GetTop(OPND);
}//EvaluateExpression