# Week6 (Numerical Integration) 
This program (in hw6) should operate for two different types of the numerical integration: ``` the fixed interval size```  and the ```Gaussain qaudrature rule```. The output will also show the result I have obtained analytical integration. 

**hw7**


## How to Run the Program
This code can be run through *`ROOT`*. In case you don't have it in your system, you can install from here [https://root.cern/install/](docs/CONTRIBUTING.md). The root macro will ask you to pass three arguments. 
Type the commad <> **`root `** in the terminal and open the root in the terminal, then type root[0] **`.x Integral.C(double (Lower limit), double (upper Limit), int (Num of steps))`**
## Limitation
I have enlisted  the weights and absessica for the case of ```Gaussain qaudrature rule``` for **N=10** , and lower bound upper bound as (-1, 1) . Therefore, it will not give us better results beyond that. But integral of ``` the fixed interval size``` will work for any values of iterations and integral limits. 
## Reference 
1. Chapter7 of the **Numerical Integration** can be found here [http://www.phy.ohio.edu/~elster/phys5071/extras/MHJ_Ch7_integration.pdf](docs/CONTRIBUTING.md) . 
