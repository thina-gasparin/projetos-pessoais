#include <stdio.h>


int c,cont,cr,l,a,meia,k,num,aux,t,ccd,cce,clc,clb,s,d,ld,le;

main(){
 
 
	printf("Digite a largura da matriz: E NECESSARIO SER UM NUMERO IMPAR MAIOR QUE UM:\n");
	scanf("%d",&a);
	
	
	int matriz[a][a];
	
	meia=a/2;
	aux=meia;
	
 
 matriz[meia][meia]=1;
 cr=2;
 c=0;
 t=1;
 num=2;
 clc=meia-1;
 clb=meia+1;
 ccd=meia+1;
 cce=meia-1;
 s=meia;
 d=meia;
 ld=meia;
 le=meia;
 k=2;
 while(cr<=(a^2)){
	t=1;
	if(cr<=7){
		l=3;
	}else{
		l=2;
	}
	
	while(t<=l){
	 	if(k==2){
		 if(cr<=11){
	 			s=meia;	
		 }
	 		for(cont=0;cont<num;cont++){
	 			matriz[s-cont][ccd]=cr;
	 			cr++;
			}
			 s=s+1;
			 ccd=ccd+1;
			 k=1;
		}
		if(k==-2){
			for(cont=0;cont<num;cont++){
	 			matriz[d+cont][cce]=cr;
	 			cr++;
			}
			d=d-1;
			cce=cce-1;
	 		k=-1;
		}
		if(k==-1){
			for(cont=0;cont<num;cont++){
	 			matriz[clb][le+cont]=cr;
	 			cr++;
			}
			le=le-1;
			clb=clb+1;
	 		k=2;	
		}
		if(k==1){
			for(cont=0;cont<num;cont++){
	 			matriz[clc][ld-cont]=cr;
	 			cr++;
			}
			ld=ld+1;
			clc=clc-1;
	 		k=-2;	
		} 
		t++;
	}	
	num=num+1;
}




for(c=0;c<a;c++){
	for(cont=0;cont<a;cont++){
		printf("%d  ",matriz[c][cont]);	
	}
	printf("\n");
}
			

}
