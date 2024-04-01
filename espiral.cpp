#include<iostream>
using namespace std;
int c,cont,cr,a,meia,num, r;
int ccd,cce,clc,clb,s,d,ld,le;

int main(){
do{

        printf("Digite a largura da matriz: E NECESSARIO SER UM NUMERO IMPAR MAIOR QUE UM:\n");
        scanf("%d",&a);
        while(a<3 || a%2==0){
            printf("E NECESSARIO SER UM NUMERO IMPAR MAIOR QUE UM:\n");
            scanf("%d",&a);
        }


        int matriz[a][a];

        meia=a/2;


 matriz[meia][meia]=1;
 cr=2;
 num=2;
 clc=meia-1;
 clb=meia+1;
 ccd=meia+1;
 cce=meia-1;
 s=meia;
 d=meia;
 ld=meia;
 le=meia;
 while(cr<a*a){

        //coluna para cima
        for(cont=0;cont<num;cont++){
            matriz[s-cont][ccd]=cr;
            cr++;
        }
        s=s+1;
        ccd=ccd+1;
        
        //linha esquerda
        for(cont=0;cont<num;cont++){
            matriz[clc][le-cont]=cr;
            cr++;
        }
        le=le+1;
        clc=clc-1;
        
        //coluna para baixo
        for(cont=0;cont<num;cont++){
            matriz[d+cont][cce]=cr;
            cr++;
        }
        d=d-1;
        cce=cce-1;
                
        //linha direita         
        for(cont=0;cont<num;cont++){
            matriz[clb][ld+cont]=cr;
            cr++;
        }
        ld=ld-1;
        clb=clb+1;
        
        num=num+2;
}




for(c=0;c<a;c++){
        for(cont=0;cont<a;cont++){
                if(matriz[c][cont]<10)
                    printf("0%d  ",matriz[c][cont]);
                else
                    printf("%d  ",matriz[c][cont]);        
        }
        printf("\n");
}


printf("Deseja utilizar o programa novamente?  1-SIM    2-NÃO\n");
scanf("%d",&r);
while(r!=1 && r!=2){
    printf("RESPOSTA INVALIDA!   1-SIM      2-NÃO\n");
    scanf("%d",&r);
}
}while(r==1);
    return 0;
}