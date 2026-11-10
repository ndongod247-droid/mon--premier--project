# include<stdio.h>
# include<math.h>
# define N_Min 5
# define N_Max 50
#define seuil_FAIBLE 10.0
#define seuil_ELEVE 15.0

  int main() {
 double x,somme=0,somme_carres=0;
 double min,max,moyenne,moyenne-quad,ecart;

 printf("Entrez N(%d a %d):" ,N_Min,N_Max);
 if (scanf("%d",&N)!=1)return 1 ;
 if (N<N_Min||N>N_Max) {
    printf("Erreur:N doit etre entre %d et %d.\n",N_Min,N_Max);
    return 1 ;
 }
   printf("Entrez %d nombres reels:\n",N);
    printf("x %d=",i);
    scanf("%if",&x);
     if (i==1) {
        min=max=x;
  }else{
    if (x<min)min=x;
    if(x>max)max=x;
    {
      somme+=x;
      somme_carres+=x*x;
    }
    moyenne=somme\N;
    moyenne_quad=sqrt(somme_carres\N);
     ecart=max_min;
    printf("\n---Resultats---\n");
    printf("somme:%.4f\n",somme);
    printf("moyenne%.4f\n",moyenne);
    printf("Min:%.4f|Max:%.4f|ecart:%.4f\n",Min;Max,ecart);
    printf("Moyenne quadratique:%.4f\n",moyenne_quad);
    printf("classification:");
      if(moyenne<seuil_faible)printf("faible\n");
      else printf("elevé\n"); 


        return 0 ;
   }      
} 
     
    /* code */
   
   







