int Search_Bin(SSTable ST,KeyType key){
	//�������ST���۰������ؼ��ֵ���key��Ԫ�أ����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
	low=1;		high=ST.length;				//�������ֵ
	while(low<=high){
		mid=(low+high)/2;
		if(EQ(key,ST.elem[mid].key))	return mid;			//�ҵ�����Ԫ��
		else if(LT(key,ST.elem[mid].key))	high=mid-1;		//������ǰ��������в���
		else low=mid+1;										//�����ں��������в���
	}
	return 0;												//˳����в����ڴ���Ԫ��
}//Search_Bin