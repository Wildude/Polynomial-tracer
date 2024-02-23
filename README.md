# Polynomial-tracer
This Algorithm finds the polynomial relationship between two variables.
This is an algorithm description of a program that utilizes both differential and integral calculus to find the mathematical relation between two variables.
Suppose you have two variables x and y, let there be a relation between these two variables in a way that one variable is dependent on the other variable. Let the dependent variable be a mathematical function of the independent variable. 
However, you don’t know what the relation of the two variables is, you only know that they relate. And you also only know that they relate mathematically. So, say if y is the dependent variable and x is the independent variable, then the relation between them can be determined by finding their mathematical function f(x). Here, f(x) is any function of x, but we want it to relate to y. Therefore, y=f(x) is the relation between x and y. If we assumed their roles wrong, that is x is the dependent variable while y is the independent one, then we can simply invert the function as x=f^- (y). For the time being, we will assume that y is indeed the dependent variable and x is the independent one and so take the relation y=f(x) as valid.
Now, the quest is to find f(x) having the values for x and y. With the values of both variables known, and with the direction and intervals of change also known, one can devise differential calculus to find the rate of change of y with respect to the change of x (which is a fixed interval).
The value of y is simply the value of x having gone through the function f(x), which is y is simply f(x).
∴y=f(x)
Since y is simply f(x), the rate of change of y with respect to x is called the derivative of f(x). 
∴∆y/∆x=f^' (x)
Where, ∆y is change of y, ∆x is change of x and f^' (x) is a function that relates the rate of change of y with x. The function f'(x) is simply the slope (ratio of vertical change to the horizontal change) of a line that’s made of two points in a two-dimensional space containing dimensions x and y. 
Let the first point be P_o=(x_o,y_o) and the second P=(x,y). Then, the derivative will be:
∴(y-y_o)/(x-x_o )=f'(x)
Now, we know that y_o=f(x_o )  and y=f(x) and since the direction and intervals of change are determined as positive direction and fixed interval, x will be greater than x_o by the fixed interval, ∆x. 
∴(f(x)-f(x_o ))/∆x=f^' (x)
But if ∆x=x-x_o, then x=x_o+∆x. So:
∴(f(x_o+∆x)-f(x_o))/∆x=f^' (x)
From this, it can be understood that one can find the derivative at any value of x, by simply subtracting the value of y which comes from the value of x increased by a fixed value ∆x, to the value of y which comes from the value of x, and then dividing the result by ∆x. For the purpose of increasing accuracy, ∆x is considered very small, approaching to zero. In mathematics, ∆x is actually infinitesimal and the expression for the derivative is:
lim┬(∆x→0)⁡〖(f(x_o+∆x)-f(x_o ))/∆x〗=f^' (x)
One can see that the derivative of the function can find the relation of two variables if their relation is linear. That is, if the rate of change of y=f(x) with the change in x is constant. For in that case, all that one must do is integrate the derivative to get the original function. 
As it’s known, integration is the inverse of derivation and thus it’s also known as the antiderivative. The antiderivative of the derivative of a function is the function itself plus some constant value.
∴∫f^' (x)=f(x)+C
Where, C is the constant value. For now, let’s assume we are only working with a power function and thus there is no constant value. Let’s call this antiderivative with no constant value added F(x).
∴F(f^' (x))=f(x)
We have the derivative of the function as a constant value, so when we integrate it, we get the linear function that relates the two variables.
∫S∆x=Sx+C⇔∫f^' (x)=f(x)+C
Where, S is the slope of the function and C is any constant value that is unknown for the time being. Here we can see that we have found the linear relation between the variables x and y=f(x) as y=f(x)=Sx. But there is exists a problem, that is the value of C is unknown. What we have worked out is the indefinite integral, which is a set of antiderivatives that are differentiated to give back the same integrand (the integrated function). This results in ambiguity of whether the original function is (say) 2x or 2x+1, resulting in huge error in prediction of the relation between the variables. So, the value of C must be found and it can be found as follows.
We know that:
∫f^' (x)=f(x)+C and F(f^' (x))=f(x)
Note that F(f^' (x)) is known so we can find C as:
C=∫f^' (x)- F(f^' (x))
So, for linear relations:
f(x)=Sx+C
S=F(f^' (x))=f^' (x)=(f(x_o+∆x)-f(x_o ))/∆x
C=∫f^' (x)- F(f^' (x))
Now a few distinctions must be made:
The f(x) we get from F(f^' (x)) is an estimated value since it’s obtained from the computation of the rate of change at a particular iteration in the program. Which is to say that F(f^' (x)) is a computationally obtained value rather than an actual antiderivative function. Since the function is linear it can be expressed in this form:
f(x)=f_c^' (x)⋅x+C
Which is to say, F(f^' (x))=f_c^' (x)
Now, f^' (x) is the actual mathematical relation of the rate of change to the variable x, while f_c^' (x) is a computed value at some instant taken from the mathematical formula of the derivative. This is to say f'(x) is hidden, just like f(x).
So, from now on to avoid confusion all calculated estimated functions will have a subscript of c on them.
∴f(x)≠f_c (x) and f^' (x)≠f_c^' (x) (at least in interpretation)
But if the computation for f_c^' (x) is accurate, the following will also be accurate too:
∴f(x)=f_c (x)+C and f^' (x)=f_c^' (x)+D, where D and C are different constant values.
∴C=f(x)-f_c (x) and D=f^' (x)-f_c^' (x)
However, there’s a better way to find C and D.
From the formula for the slope of a line:
∴m=(y-y_o)/(x-x_o )
We obtain:
∴y=m(x-x_o )+y_o
∴y=mx-mx_o+y_o⇔f(x)=Sx+C
C=-mx_o+y_o=y_o-mx_o
C=f(x_o )-f_c^' (x) 〖⋅x〗_o
Here the known values are f_c^' (x) and x_o and f(x_o) is hidden.
So, our program would display the linear relation as:
	f(x) = Sx + C
where:
S = f_c^' (x) which for this case is constant and
C = f(x_o )-f_c^' (x) 〖⋅x〗_o which is also constant
So far, the algorithm has been briefed for linear relations and so can find linear functions with accuracy. To obtain a function that is non-linear, like quadratic function, the algorithm must be expanded to include the rate of change of the rate of change of y with respect to x. This is known as the second derivative which is the derivative of the derivative. The derivative taken from the original function will be called the first derivative. 
∴f^'' (x)=lim┬(∆x→0)⁡〖(f^' (x)-f^' (x_o ))/∆x〗
Now we will just do what we did to obtain the original function, only this time we won’t obtain the original function but the derivative of the function. This is because for quadratic functions, the derivative increases with the increase in x, while the second derivative remains constant. 
So, we can find the second derivative by doing this:
f^'' (x)=lim┬(∆x→0)⁡〖(f^' (x)-f^' (x_o ))/∆x〗
But f^' (x)=(f(x_o+∆x)-f(x_o))/∆x and similarly f^' (x_o )=(f(x_o )-f(x_o-∆x))/(∆x )
=(f(x_o+∆x)+f(x_o-∆x)-2f(x_o))/(∆x^2 )
Using the above method, we obtain the first derivative of the function as:
∴f^' (x)=f_c^'' (x)⋅x+C
C=f^' (x_o )-f_c^'' (x)⋅x_o
Since we still haven’t got the original function, we integrate this entire term to get:
∫f^' (x)=∫▒(f_c^'' (x)⋅x+C)  ∆x=(f_c^'' (x))/2 x^2+Cx+D, where D is a constant value.
Now:
f(x)=∫f^' (x)=f_c (x)+E, where E is a constant value.
f_c (x)+E⇔(f_c^'' (x))/2 x^2+Cx+D
f(x)=(f_c^'' (x))/2 x^2+Cx+D
Where: 
D=f(x_o )-f_c (x_o )⋅x_o
And so, we found our quadratic function.
How about cubic function? well then it means the second derivative is not constant but the third derivative is. The third derivative is the derivative (rate of change) of the second derivative and we get it as:
f^''' (x)=lim┬(∆x→0)⁡〖(f^'' (x)-f^'' (x_o ))/∆x〗
=(f(x_o+∆x)+3f(x_o-∆x)-3f(x_o )-f(x_o-2∆x))/(∆x^3 )
Using above methods, we get the second derivative as:
f^'' (x)=f_c^''' (x)⋅x+A
Where:
A=f^'' (x_o )-f_c^''' (x)⋅x_o
We integrate it to get the first derivative:
f^' (x)=f_c^'' (x)⋅x+B
Where:
f_c^'' (x)=(f_c^''' (x))/2 x^2+Ax
B=f^' (x_o )-f_c^'' (x)⋅x_o
We integrate again to finally get the original function:
f(x)=f_c^' (x)⋅x+C
Where:
f_c^' (x)=(f_c^''' (x))/6 x^3+A/2 x^2+Bx
C=f(x_o )-f_c^' (x)⋅x_o
As we increase the function to a quartic function (degree-4 polynomial), the complexity of the algorithm as well as the steps increase. And so, from now on, it’s wiser to find a method to implement the algorithm in a recursive fashion. 
For linear functions the first derivative is constant and the second derivative is zero. For quadratic functions the first derivative varies, the second derivative is constant and the third is zero and soon. The derivative of a constant function is zero, zero itself is a constant so the derivative of a zero function will be zero. This means once a zero derivative is obtained no further derivation is required and the algorithm should revert back to integration ( indefinite integrals). We summarize our algorithm in such manner.
	Obtain first derivation:
f^' (x)=(f(x_o+∆x)-f(x_o))/∆x
	If non-zero, do second derivation and keep on differentiating until a zero-derivative is found.
f^n (x)=(f^(n-1) (x_o+∆x)-f^(n-1) (x_o))/∆x
	Once a zero derivative is found, take the previous derivative which is a constant function and integrate it.
If k is the zero derivative:
f^(k-2) (x)=f_c^(k-1) (x)⋅x+C
where,C=f^(k-2) (x_o )-f_c^(k-1) (x)⋅x_o
And you get the k-3th derivative as:
f^(k-3) (x)=f_c^(k-2) (x)⋅x+D
where,f_c^((k-2) ) (x)=(f_c^(k-1) (x))/2 x^2+Cx and D=f^(k-3) (x_o )-f_c^(k-2) (x)⋅x_o
And soon until you get the original function.
This algorithm seems wonderful for its simplicity yet powerful for how it can find the mathematical relation between two variables easily. However, there’s a catch:
Since this algorithm is recursive with the base case that nth derivative will be zero, it only works for polynomial functions. If the relation between the variables where say exponential, trigonometric, logarithmic, rational, inverse-polynomial, rooted and soon, the algorithm would fail in finding it. Say for example, if it’s exponential, the algorithm won’t halt. 
Thus, this program is limited since it’s applicable only for polynomial functions, hence the name: Polynomial calculus algorithm.
