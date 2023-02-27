# Week6 (Numerical Integration) 
## hw6
This program should operate for two different types of the numerical integration: ``` the fixed interval size```  and the ```Gaussain qaudrature rule```. The output will also show the result I have obtained analytical integration. 

## hw7
the ```MCarloInteg.C``` will integrate the given function using ```Monte-Carlo Integration Method```. The number of iterations can be changed from the main function of the program. 

## How to Run the Programs?
for both **hw6** and **hw7** The code can be run through *`ROOT`*. In case you don't have it in your system, you can install from here [https://root.cern/install/](docs/CONTRIBUTING.md). The root macro will ask you to pass three arguments. 

Type the commad <> **`root `** in the terminal and open the root in the terminal, then type root[0] **`.x Integral.C(double (Lower limit), double (upper Limit), int (Num of steps))`**. Use the same method to run the  ```MCarloInteg.C``` without passing any argument. It will also give a plot for the variance of the value obtained via Monte-Carlo techqinue. 
## Limitations
For **hw6** I have enlisted  the weights and absessica for the case of ```Gaussain qaudrature rule``` for **N=10** , and lower bound upper bound as (-1, 1) . Therefore, it will not give us better results beyond that. But integral of ``` the fixed interval size``` will work for any values of iterations and integral limits. 
## Reference 
1. Chapter7 of the **Numerical Integration** can be found here [http://www.phy.ohio.edu/~elster/phys5071/extras/MHJ_Ch7_integration.pdf](docs/CONTRIBUTING.md) . 
2. Monte-Carlo Integration by Cameron Mcelfresh:  [https://cameron-mcelfresh.medium.com/monte-carlo-integration-313b37157852](docs/CONTRIBUTING.md) . 
