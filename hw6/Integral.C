/////////////////////////
//Numerical Integration//
//shoukat////////////////

#include<iostream>
using namespace std;

//function to integrate
double getFunc(double x){

return (1/(1+x*x));
}

//main function. It will excute integral using equal steps and gauss qaudrature method
int Integral(double a, double b, int N){
      
	double val;
double	step = (b-a)/N;//step size
double fa = getFunc(a);//func at lower bound
double fb = getFunc(b);//func at upper bound
double integ = fa+fb; //integ func
 for(int i=0; i<N; i++){

	 val = i*step + a;
	 integ= integ + 2*getFunc(val);

 }

integ = integ *step/2;
cout<<"Equal step size integral gives:  "<<integ<<endl;

//for Guass leg method mesh points and weights for N=10 teken from numerical integr chp7;
double msh[10] = {1.305, 6.747, 16.030, 28.330, 42.556, 57.444, 71.670, 83.970, 93.253, 98.695};
double weight[10] = {3.334, 7.473, 10.954, 13.463, 14.776, 14.776, 13.463, 10.954, 7.473, 3.334};
double gauss_Intg=0;
for(int j=0; j<N; j++){

	gauss_Intg += weight[j]*getFunc(msh[j]);
}

cout<<"The Gauss qaudrature result is: "<<gauss_Intg<<endl;
cout<<"The analytical solution for the integ is: "<<"0.463647609"<<endl;

return 0;
}






