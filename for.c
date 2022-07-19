#include<stdio.h>
#include<math.h>
#include <stdbool.h>

//  for 4
// int main (){
//     double narxi=12.3;
//     for (int i=1; i<11; i++)
// {
//     printf("%d konfet %.1lf so`m\n",i,i*narxi);
// }
// return 0;
// }

//  for 5
// int main (){
//     double narxi=12.3;
//     for (double i=0.1; i<1; i+=0.1)
// {
//     printf("%.1lf konfet %.1lf so`m\n",i,i*narxi);
// }
// return 0;
// }

// for 6
// int main(){
//     double narxi = 12.3;
//     for(double i=1.2; i<2; i+=0.2){
//         printf("%.1lf konfet %.1lf so`m\n", i, i*narxi);
//     }
//     return 0;
// }

// for 7
// int main (){
//     double a=1, b=2,c=0;
//     for(int i=a; i<b+1; i++){
//         c+=i;
//     }
//     printf("c=%lf\n", c);
//     return 0;
// }


// for 8
// int main (){
//     double a=2, b=3,c=1;
//     for(int i=a; i<b+1; i++){
//         c*=i;
//     }
//     printf("c=%.1lf\n", c);
//     return 0;
// }

// for 9 
// int main (){
//     double a=2, b=3,c=0;
//     for(int i=a; i<b+1; i++){
//         c+=i*i;
//     }
//     printf("c=%.1lf\n", c);
//     return 0;
// }

// for 10 
// int main (){
//     double S=1, n=15;

//     for (double i=0; i<n; i++){
//         S*=(1.0+i/10);
//     }
//     printf("Natija: %.1lf\n", S);
//     return 0;
// }

// for 12
// int main (){
//     double a=1.1, n=5,s;
//     for (double i=a; i<n; i+=0.1){
//         printf("Natija: %.1lf\n", i*(1.1+0.1));
//     }
    
//     return 0;
// }

// for  14
// int main (){
//     int a=1,n=55;
//     for (int i=a; i<n; i+=i){
//         printf("natija: %d\n",i*i);

//     }
//     return 0;
// }

// for 15
// int main(){
//     double a,n,m=1;
//     printf("a=");
//     scanf("%lf",&a);
//     printf("n=");
//     scanf("%lf",&n);
//     for(int i=1;i<=n;i++){
//         m*=a;

//     }
//     printf("%.2lf^%.lf=%.2lf\n",a,n,m);
//     return 0;

// }

// for 16
// int main (){
//     double n=5, a=1,s;
//     for(double i=a; i<n; i++){
//     printf("javob: %lf\n", pow(i,n));
//     }

//     return 0;
// }

// for 17
// int main (){
//     double n=5, a=1,s;
//     for(double i=a; i<n; i++){                
//     printf("javob: %lf\n", pow(i,n)), s+=i;
//     }

//     return 0;
// }

// for 19
// int main (){
//     double a=1, n=6,s;
//     for(double i=a; i<n; i+=1 ){
//         printf("Natija %.1lf\n", i*n);
//     }
//     return 0;
// }

// for 20
// int main (){
//     double n=5;
//     for(double i=1; i<n; i++){
//         printf("natija %lf.1\n", i+n);
//     }
//     return 0;
// }

// for 21
// int main (){
//     double n=2, n1, n2,s;
//     for(double i=1; i<n; i++){
//         s=(i*1)/(i*2)/(i*3);
//         printf("javob: %lf\n", s);
//     }   
//     return 0;
// }

// for 22
// int main(){
//     double n=4, n2=1,S, x=2, n3=1;
    
//     for(double i=1;i<=n;i++){
//         n2=pow(x, i);
//         n3*=i;
//         S+=n2/n3;
//     }
//     printf("S=%.1lf\n",S);
//     return 0;
// }

// 23-misol, for
// int main(){

//     double x=2, n=4;
//     double S=0, kasr_surati=0;
//     int daraja_uchun=2, faktorial=1;

//     for(int i=1; i<(2*n+1); i+=2){

//         faktorial = 1;
//         for(int j=1; j<=i; j++){
//             faktorial *= j;
//         }
//         kasr_surati = pow(-1, daraja_uchun++)*pow(x, i);
//         S += kasr_surati/faktorial;
//         printf("Natija: S=%lf, Surati=%lf, Faktorial=%d, Daraja=%d\n", S, kasr_surati, faktorial, daraja_uchun%2);
//     }

//     printf("Summa: %lf\n", S);

//     return 0;
// }

// 24-misol, for
// int main(){

//     double x=2, n=4;
//     double S=0, kasr_surati=0;
//     int daraja_uchun=2, faktorial=1;

//     for(int i=1; i<(2*n); i+=2){

//         faktorial = 1;
//         for(int j=1; j<=i; j++){
//             faktorial *= j;
//         }
//         kasr_surati = pow(-1, daraja_uchun++)*pow(x, i);
//         S += kasr_surati/faktorial;
//         printf("Natija: S=%lf, Surati=%lf, Faktorial=%d, Daraja=%d\n", S, kasr_surati, faktorial, daraja_uchun%2);
//     }

//     printf("Summa: %lf\n", S);

//     return 0;
// }

// 25-misol
// int main(){
//     double x,n,ishora=1,S=0;
//     printf("x=");
//     scanf("%lf",&x);
//     printf("n=");
//     scanf("%lf",&n);
//     for(int i=1;i<=n;i++){
//         S+=ishora*pow(x,i)/i;
//         ishora*=-1;
//     }
//     printf("yig`indi=%lf",S);
//     return 0;
// }

// 26-misol
// int main(){
//     double x,n,ishora=1,S=0;
//     printf("x=");
//     scanf("%lf",&x);
//     printf("n=");
//     scanf("%lf",&n);
//     for(int i=1;i<=2*n+1;i+=2){
//         S+=ishora*pow(x,i)/i;
//         ishora*=-1;
//     }
//     printf("yig`indi=%.1lf",S);
//     return 0;
// }

// 27-misol
// int main(){
//     float n, s = 1, m = 1, x, d, k;
//     printf("n=");  scanf("%f",&n);
//     printf("x=");  scanf("%f",&x);
//     k = x;
//     d = x;
//     for (int i=1; i<=n; i++){
//         d = d * x * x;
//         m = m * 2 * i;
//         s = s * 2 * i - 1;
//         k = k + d * s / (m * (2 * i + 1));
//     }
//     printf("k=%f\n",k);
//     return 0;
//     }

// 28-misol
// int main(){
//     float x;
//     printf("X=");
//     scanf ("%f", &x);
 
//    int n;
//    printf("N=");
//    scanf ("%d", &n);
 
 
//    float t1=1,t2=1,r=1,p=1;
//    int i;
//    for  (i =1; i<n; ++i){
//       t1 *= 2*i-3;
//       t2 *=2*i;
//       p *=(-1)*x;
//       r += t1*p/t2;
//    }
//    printf("%f \n ",r);
 
//    return 0;
// }

// 29-misol
// int main(){
//     double x1,x2,n,a;
//     printf("x1=");
//     scanf("%lf",&x1);
    
//     printf("x2=");
//     scanf("%lf",&x2);
    
//     printf("n=");
//     scanf("%lf",&n);
//     a=fabs(x2-x1);
//     a/=n;
//     for(int i=1;i<=n+1;i++){
//         printf("%.2lf\n",x1);
//         x1+=a;        
//     }
//     return 0;
// }

// 30-misol
// int main(){
//     double x1,x2,n,a,f;
//     printf("x1=");
//     scanf("%lf",&x1);
    
//     printf("x2=");
//     scanf("%lf",&x2);
    
//     printf("n=");
//     scanf("%lf",&n);
//     a=fabs(x2-x1);
//     a/=n;
//     for(int i=1;i<=n+1;i++){
//         f=1-sin(x1);
//         printf("f(%.1lf)=%.1lf\n",x1,f);
//         x1+=a;
//     }
//     return 0;
// }

// 31-misol
// int main(){
//     double a=2,n=3;

//     for(int i=1;i<=n;i++){
//         a=2+(1/a);
//         printf("A%d=%.2lf\n",i,a);
//     }
//     return 0;
// }

// 32-misol
// int main(){
//     double a=1,n=3;

//     for(int i=1;i<=n;i++){
//         a=(a+1)/i;
//         printf("A%d=%lf\n",i,a);
//     }
//     return 0;
// }

// 33-misol
// int main(){
//     int F1=1,F2=1,n=5;

//     printf("F1=%d\nF2=%d\n",F1,F2);
//     for(int i=3;i<=n;i+=2){
//     F1=F1+F2;
//     F2=F1+F2;
//     printf("F%d=%d\nF%d=%d\n",i,F1,i+1,F2);
//     }
//     return 0;
// }

// 34-misol
// int main(){
//     double A1=1,A2=2;
//     int n=3;
//     printf("A1=%.lf\nA2=%.lf\n",A1,A2);
//     for(int i=3;i<=n;i+=2){

//     A1=(A1+(2*A2))/3;
//     A2=(A2+(2*A1))/3;
//     printf("A%d=%lf\nA%d=%lf\n",i,A1,i+1,A2);
//     }
//     return 0;
// }

// 35-misol
// int main(){
//     int A1=1,A2=2,A3=3;
//     int n=5;
//     printf("A1=%d\nA2=%d\nA3=%d\n",A1,A2,A3);
//     for(int i=4;i<=n;i+=3){

//     A1=A3+A2-(2*A1);
//     A2=A1+A3-(2*A2);
//     A3=A2+A1-(2*A3);
//     printf("A%d=%d\nA%d=%d\nA%d=%d\n",i,A1,i+1,A2,i+2,A3);
//     }
//     return 0;
// }

// 36-misol
// int main (){
//     double k=2, n=3, s=0;
//     for(double i=1;i<=n; i++){
//         s+=pow(i,k);
//     }
//     printf("natija: %lf\n", s);
//     return 0;
// }

// 37-misol
// int main (){
//     double n=3,s;
//     for(double i=1; i<=n; i++){
//         s+=i*i;
//     }
//     printf("Natija %lf\n", s);
//     return 0;
// }


// 38-misol
// int main(){
//     int N,S=0,a;
//     printf("N=");
//     scanf("%d",&N);
//     a=N;
//     for(int i=1;i<=N;i++){
//         S+=pow(i,a);
//         a-=1;
//     }
//     printf("S=%d",S);
//     return 0;
// }

// 39-misol
int main(){
    int A=4,B=5;
    for(A=1;A<B;A++){
        for(int i=1;i<=A;i++){
            printf("%d ",A);
        }
            printf("\n");
    }
    return 0;
}



