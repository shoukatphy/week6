/////////////////////////
//MC integraion//////////
//shoukat////////////////

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

//function to integrate
double getFunc(double x){

return (1/(1+x*x));
}

//func to integ the above fun using monteCarlo integ method

double monteCarloIntegration(double min, double max, int num_iteration){

	double FuncSum=0;
	double funcVal, randNumber;
	double width = max-min; //domain width of func 

	int iter=0;
	TRandom3 *rnd = new TRandom3();//for random numbers 	
	
	//while (iter<=num_iteration){
        for(int iter=1; iter<=num_iteration; iter++){
		 randNumber = min + (rnd->Rndm()/0.9) *width;//generating rand num within the limits of integratiion :0.9 is assumed to be max in rndm nums 
		//getting func values
		funcVal = getFunc(randNumber);

	        //suming over the func values 
	        FuncSum += funcVal;
	}

	 double IntegEstimate = width*FuncSum/num_iteration;

	 return IntegEstimate;
}


//main func 
int MCarloInteg(){

	double mn = -1.;
	double mx = 1.;
	int iterations = 100;
	double analytical_val = 1.57079632679;
	double variance[iterations];
	double itera_arr[iterations];

        for(int Itr=1; Itr<iterations+1; Itr++){
	double IntegValue = monteCarloIntegration(mn, mx, Itr);//calling the MC integrator

	//variance 
	variance[Itr] = IntegValue-analytical_val;

	itera_arr[Itr] = Itr*1;

          cout<<"MC intgral gives : "<<IntegValue<< "   and variance value is:  "<<variance[Itr]<<endl;
         }
        cout<<"The analytical solution gives us: "<< analytical_val<<endl;

        
	//ploting the results
	
	auto *c = new TCanvas();//creat canvas
        auto *gr = new TGraph(iterations, itera_arr, variance);

	gr->SetTitle("Variance in MC Integ Method");
	gr->GetXaxis()->SetTitle("Iterations");
	gr->GetYaxis()->SetTitle("Var(MC_result-Analytic_result)"); 
        gr->Draw("AP");  
        c->SaveAs("MCvariace.pdf");	

return 0;
}
