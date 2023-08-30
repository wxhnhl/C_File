Status DestroyArray(Array &A){
	//Ïú»ÙÊı×éA
	if(!A.base)	 return ERROR;
	free(A.base); A.base=NULL;
	if(!A.bound)	return ERROR;
	free(A.bounds);	A.bounds=NULL;
	if(!A.constants)	return ERROR;
	free(A.constants)	A.constants=NULL;
	return OK;
}