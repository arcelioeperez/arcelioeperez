"""
Monte Carlo Simulation
From the book: Python for Finance -Yves Hilpisch (page 300)

Variables: 
M: intervals 
I: paths 

S0: value of the option by  time
sigma: constant of instantaneous volatility
T: time horizon of the simulation - maturity date
dt: T/M
r: riskless, short-term rate
z = rn = brownian motion

Run with (GNU-Linux and MacOS): 
python3 monte_carlo.py

More references: 
Black-Scholes-Merton SDE (geometric Brownian Motion) 
dSt = r*St*dt + sigma*St*dZt 

(The equation presented here is the Black-Scholes-Merton differential equation)
St = St - dt exp((r - sigma**2/2) dt + dt*sqrt(dt*Z))

***More information here***
Book: https://learning.oreilly.com/library/view/python-for-finance/9781491945360/
Black Sholes Merton: https://maths.ucd.ie/courses/mst3024/section4-3.pdf
Euler Methods (MIT): https://web.mit.edu/10.001/Web/Course_Notes/Differential_Equations_Notes/node3.html
"""

import numpy as np 
import math
import matplotlib.pyplot as plt

class MonteCarlo: 
    def __init__(self, M, I): 
        self.M = M
        self.I = I
    def get_s(self): 
        T = 1.0
        S0 = 36 
        r = 0.06
        sigma = 0.2
        dt = T / self.M
        S = np.zeros((self.M + 1, self.I))

        S[0] = S0 
        rn = np.random.standard_normal(S.shape)
    
        #Euler scheme 
        for t in range(1, self.M + 1):
            S[t] = S[t-1] * np.exp((r - sigma ** 2 / 2) * dt + sigma * math.sqrt(dt) * rn[t])
        return S  
    
    def plotter(self):
        end = []
        for i in MonteCarlo.get_s(self): 
           #plt.hist(MonteCarlo.get_s(self), bins = 3)
            end.append(i[-1])
        plt.plot(end)
        return plt.show()
    
"""
------------------
Tests
------------------
for i in S.get_s():
    print(i[-1])

end = []
for i in S.get_s(): 
    end.append(i[-1]) 

plt.plot(end)
plt.show()

---------------------
Example
---------------------
end = []
for i in S.get_s(): 
    for j in i:
        end.append(j) 

plt.plot(end[-11:-1])
plt.show()


a = [[2,4,6], [3,5,2], [3,5,8]]
for i in a: 
    print(i[-1])
"""
#Creating an object
#M - intevals
#S - number of paths 


M = 10
I = 500
#Creates the 'S' object with interval 10 and number of paths 500
S = MonteCarlo(M, I)

#Calls the plotter method - plots the end of period values
S.plotter()
