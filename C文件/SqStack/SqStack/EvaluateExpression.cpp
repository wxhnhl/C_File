OperandType EvaluateExpression(){
	//�������ʽ��ֵ����������㷨����OPTA��OPED�ֱ�Ϊ�����ջ��������ջ
	//OPΪ���������
	InitStack(OPTR); Push(OPTR,'#');
	initStack(OPED); c=getchar();
	while(c!='#'||GetTop(OPTR)!='#'){
		if(!In(c,op)){Push(OPND,c);	c=getchar();}		//������������ջ
		else
			switch(Precede(GetTop((OPTR),c)){
				case '<':	//ջ��Ԫ������Ȩ��
						Push(OPTR,c);	c=getchar();
						break;
				case '=':	//�����Ų�������һ�ַ�
					Pop(OPTR,x);		c=getchar();
					break;
				case '>':	//��ջ������������ջ
					Pop(OPTR,theta);
					Pop(OPND,b);	Pop(OPND,a);
					Push(OPND,Operate(a,theta,b));
					break;
		}//swith
	}//while
	return GetTop(OPND);
}//EvaluateExpression