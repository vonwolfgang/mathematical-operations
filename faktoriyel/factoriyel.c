
int main(){

    fact(6);
	
	return 0;
}


int fact(number){
	
	int tut=1,i=1;
	
	for (i; i<number+1; i++){
		
		 tut = tut * i;
		
	}  
	printf("%d\n",tut);

}
